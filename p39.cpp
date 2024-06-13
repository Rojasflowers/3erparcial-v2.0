
#include <iostream>
using namespace std;
int main() {
   
    cout << "Digite el tamaño del arreglo: ";
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) {
        
        cout << "Digite un numero para la posicion " << i + 1 << ": ";
        int numero;
        cin >> numero;
        num[i] = numero;
    }
    for (int i = 0; i < n; i++) {
        cout << "El dato en la posicion " << i + 1 << " es: " << num[i] << std::endl;
    }

    return 0;
}
