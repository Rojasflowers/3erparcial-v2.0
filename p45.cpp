
#include <iostream>
using namespace std;

int main() {
    string matriz1[1][2]; 
    int matriz2[1][3];   
    matriz1[0][0] = "nando";
    matriz1[0][1] = "Oscar";
    matriz2[0][0] = 74;
    matriz2[0][1] = 56;
    matriz2[0][2] = 10;

    cout << "arreglo 1\n";
    for (int j = 0; j < 2; j++) { 
        cout << "el dato en la posicion " << j << " es: " << matriz1[0][j] << "\n";
    }
    cout << "arreglo 2\n";
    for (int j = 0; j < 3; j++) { 
        cout << "el dato en la posicion " << j << " es: " << matriz2[0][j] << "\n";
    }

    return 0;
}
