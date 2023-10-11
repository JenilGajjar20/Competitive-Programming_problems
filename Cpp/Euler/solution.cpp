
#include <cstdlib> // Para usar srand y rand
#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>   //Para los vertices
#include <set>      //Para las aristas
#include <queue>    //Para el camino
#include <stack>    //Para guardas los nodos de los ficheros
#include <fstream> // Para usar ficheros
using namespace std;

enum aristaEncontrada {nada, opuesto, igual};      //Para evitar confusiones a la hora de usar ficheros

aristaEncontrada comprobarArista(int a, int b, multiset<pair<int,int>> aristas){

    aristaEncontrada tipoArista = nada;
    multiset<pair<int,int>>::iterator it;

    it = aristas.find(pair(a,b));
    if(it != aristas.end()){
        tipoArista = igual;
    } else{
        it = aristas.find(pair(b,a));   //Evitamos duplicados cuando copiamos del fichero
        if(it != aristas.end()){
            tipoArista = opuesto;
        }
    }    

    return tipoArista;
}

bool añadirArista(int a, int b, multiset<pair<int,int>> &aristas){

    bool aristaInsertada = false;
    pair<int,int> par{a,b};
    if (comprobarArista(a,b,aristas) != opuesto){
        aristas.insert(par);
        aristaInsertada = true;
    }

    return aristaInsertada;
}

bool eliminarArista(int a, int b, multiset<pair<int,int>> &aristas, queue<pair<int,int>> &camino){

    bool aristaEliminada = false;
    multiset<pair<int,int>>::iterator it;

    it = aristas.find(pair(a,b));
    if(it != aristas.end()){
        aristas.erase(it);
        camino.push(pair(a,b));
        aristaEliminada = true;
    } else{
        it = aristas.find(pair(b,a));
        if(it != aristas.end()){
            aristas.erase(it);
            camino.push(pair(a,b)); //Asi nos aseguramos de que el camino es consistente 
            aristaEliminada = true;
        }
    }
    return aristaEliminada;
}

queue<pair<int,int>> encontrarCaminoEuler(vector<vector<int>> nodosGrafo, multiset<pair<int,int>> aristas){

    queue<pair<int,int>> camino;
    vector<int> aristasEliminadas(nodosGrafo.size(), 0);

    bool bloqueado;
    bool existeArista;
    bool caminoEncontrado = false;

    int nodoActual;
    int nodoPosible;
    int nodoMejor;
    int numAristas;

    for(int i = 0; i < nodosGrafo.size() && !caminoEncontrado; i++){    //Todos los nodos seran inicios una vez
        nodoActual = i;
        bloqueado = false;
        while(!aristas.empty() && !bloqueado){                          //Mientras que aun queden aristas y no nos hayamos bloqueado
            if (nodosGrafo[nodoActual].size() == 1){                    //Solo hay un nodo conexo
                nodoPosible = nodosGrafo[nodoActual][0];
                if(comprobarArista(nodoActual, nodoPosible, aristas) != nada){     //La arista sigue exisitiendo
                    eliminarArista(nodoActual, nodoPosible, aristas, camino);      //Eliminamos arista
                    aristasEliminadas[nodoActual]++;                               //Reducimos el numero de nodos conexos
                    aristasEliminadas[nodoPosible]++;            
                    nodoActual = nodoPosible;
                } else bloqueado = true;                                           //No hay arista, bloqueo
            }
            else if (nodosGrafo[nodoActual].size() > 1){                //Hay varios nodos conexos
                numAristas = 0;
                for(int j = 0; j < nodosGrafo[nodoActual].size(); j++){ //Por todos los nodos conexos
                    nodoPosible = nodosGrafo[nodoActual][j];
                    if(nodosGrafo[nodoPosible].size()-aristasEliminadas[nodoPosible] > numAristas 
                    && comprobarArista(nodoActual, nodoPosible, aristas) != nada){  //Existe la arista y es el nodo conexo que mas conexos tiene en si
                        numAristas = nodosGrafo[j].size();
                        nodoMejor = nodoPosible;
                    }
                }
                if (numAristas != 0){                    
                    eliminarArista(nodoActual, nodoMejor, aristas, camino); //Eliminamos arista
                    aristasEliminadas[nodoActual]++;                        //Reducimos el numero de nodos conexos
                    aristasEliminadas[nodoMejor]++; 
                    nodoActual = nodoMejor;
                }
                else bloqueado = true;
            }
            else{
                bloqueado = true;
            }
        }

        if(!aristas.empty()){           //Camino no completado, volvemos a rellenar aristas
            while(!camino.empty()){
                aristas.insert(camino.front());
                camino.pop();
            }
            fill(aristasEliminadas.begin(), aristasEliminadas.end(), 0);    //Dejamos el numero de nodos conexos de cada uno como estaba
        }
        else{
            caminoEncontrado = true;
        }
    }

    return camino;
}

void MostrarAristas(multiset<pair<int,int>> aristas) {
    cout<<"Numero de aristas y verices que conectan:"<<endl;
    cout<<aristas.size()<<endl;

    auto it = aristas.begin();
    while(it != aristas.end()){
        cout<<(*it).first<<" - " <<(*it).second<<endl;
        it++;
    }
}

int main(int argc, char *argv[]) {

    vector<vector<int>> nodos;
    multiset<pair<int,int>> aristas;
    queue<pair<int,int>> camino;

    chrono::time_point<std::chrono::high_resolution_clock> t0, tf; // Para medir el tiempo de ejecución
	double tejecucion; // tiempo de ejecucion del algoritmo en ms

	if (argc <= 1) {
		cerr<<"\nError: El programa se debe ejecutar de la siguiente forma.\n\n";
		cerr<<argv[0]<<" NombreFicheroEntrada1 .. NombreFicheroEntradaN\n\n";
		return 0;
	}

    for (int argumento = 1; argumento<argc; argumento++) {

        ifstream ficheroGrafo;
        string cadena;
        char delimitador = '\t';            //Usamos el tab como delimitador de linea
        int dato;
        int n_vertices;

        ficheroGrafo.open(argv[argumento]);

        if (ficheroGrafo.is_open()){
            ficheroGrafo >> cadena;
            n_vertices = stoi(cadena);
            if(n_vertices > 0){
                for(int vertice = 0; vertice < n_vertices; vertice++){
                    vector<int> nodo;								//Vector auxiliar

                    getline(ficheroGrafo, cadena, delimitador); 	//Posicionamos en la lista de vertices que conectan
                    ficheroGrafo >> cadena;
                    dato = stoi(cadena);

                    while(dato >= 0){								//Si no es el final de los vertices que conectan
                        nodo.push_back(dato);                       //Añadimos el nodo conexo
                        añadirArista(vertice, dato, aristas);       //Creamos la arista

                        getline(ficheroGrafo, cadena, ' '); 
                        ficheroGrafo >> cadena;
                        dato = stoi(cadena);

                    }
                    nodos.push_back(nodo);                          //Añadimos el nodo y todos sus conexos  
                }
            }
        }

        ficheroGrafo.close();
        cout<<endl;

//        MostrarAristas(aristas);

        cout << "Buscamos camino de euler para grafo con " << nodos.size() << " nodos y " <<aristas.size()<<" aristas."<<endl;
        
        t0= std::chrono::high_resolution_clock::now(); // Cogemos el tiempo en que comienza la ejecuciÛn del algoritmo
        camino = encontrarCaminoEuler(nodos, aristas);
        tf= std::chrono::high_resolution_clock::now(); // Cogemos el tiempo en que finaliza la ejecuciÛn del algoritmo

        if(camino.empty()){
            if (nodos.size() == 1){
                cout<<"El grafo solo tiene un nodo."<<endl;
            }
            else{
                cout<<"No se encontro un camino de Euler."<<endl;
            }
        }
        else {
            cout<<"Se encontro un camino de Euler:"<<endl;
            cout<<camino.front().first<<" --> "<<camino.front().second;
            camino.pop();
            while(!camino.empty()){
                cout<<" --> "<<camino.front().second;
                camino.pop();
            }
            cout<<endl;
        }

        aristas.clear();
        nodos.clear();

        cout << "\tTiempo de ejec. (us): " << tejecucion <<endl;
        cout << "-------------------------------------------------------" <<endl;
    }

	return 0;
}