## Euler 
Leonard Euler represented four zones as four points, and the bridges as edges connecting the points.
Finding the walk across the bridges was equivalent to finding a circuit in the above graph so that each edge is passed only once, also known as an Euler path.

Euler defined a particular type of graph, called an Euler graph, as that type of graph which contains an Euler circuit. 
The formal definition of an Euler circuit is:
Let G be a connected graph. An Euler path over the graph is a path that does not repeat edges and in which all edges of the graph appear. An Euler circuit is a cycle (starts and ends at the same node/vertex) and is also an Euler path.

#### Example

As an example:
The graph in the following figure is an Euler graph, where the path through the nodes (1, 2, 4, 6, 5, 5, 3, 2, 5, 4, 3, 1) provides an Euler circuit.

        1
     /     \
    /       \
    2   -   3
    |\     /|
    |  \  /
    |   X   |
    |  /  \ |
    |/     \|
    4   -   5
     \     /
       \  /
        6


#### Function Description

The function has the following parameter(s):
main:
- `int argc`: the file with the graph including the number of vertices and in each line the connections there are ending with -1 

comprobarArista, añadirArista, eliminarArista:
- `int a`: a vertice 
- `int b`: a vertice 
- `multiset<pair<int, int>> aristas`: a edge

encontrarCaminoEuler:
- `vector<vector<int>> nodosGrafo`: all nodes of the network
- `multiset<pair<int, int>> aristas`: a edge

mostrarAristas:
- `multiset<pair<int, int>> aristas`: all edges

#### Returns

- returns if an euler path exists, if it does then it displays the path and if not it pops a message. 

