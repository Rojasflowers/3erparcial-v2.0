#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese una letra: ";
    cin >> c;

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << c << " es una vocal" << endl;
            break;
        default:
            cout << c << " no es una vocal" << endl;
            break;
    }

    return 0;
}