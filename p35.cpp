#include <iostream>
using namespace std;

int main() {
    int i;
    string arreglo1[2];
    int arreglo2[3];

    arreglo1[0] = "Fernando";
    arreglo1[1] = "Oscar";
    arreglo2[0] = 74;
    arreglo2[1] = 56;
    arreglo2[2] = 10;

    cout << "arreglo 1\n";
    for (i = 0; i < 2; i++) { 
        cout << "el dato en la posicion " << i << " es: " << arreglo1[i] << "\n";
    }

    cout << "arreglo 2\n";
    for (i = 0; i < 3; i++) { 
        cout << "el dato en la posicion " << i << " es: " << arreglo2[i] << "\n";
    }

    return 0;
}