#include<iostream>
#include<cmath>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2){
    int count = 0;

    for(int i = 1; i <= 10000; i++){
        if(x1 + (v1 * i) == x2 + (v2 * i)){
            count += 1;
            break;
        } else continue;
    }

    if(count == 1) return "YES";
    else return "NO";
}

int main()
{
    int x1 = 2;
    int v1 = 1;
    int x2 = 1;
    int v2 = 2;

    string result = kangaroo(x1, v1, x2, v2);
    cout << "Result: " << result << endl;

    return 0;
}