#include <iostream>
using namespace std;
int main() {
    int dive, divi, res;

    cout << "Ingrese el dividendo: ";
    cin >> dive;
    cout << "Ingrese el divisor: ";
    cin >> divi;
    res = dive % divi;
    cout << "El residuo de la división de " << dive << " entre " << divi << " es: " << res << endl;
    return 0;
}
