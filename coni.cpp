#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int num1, num2, num3, rtd, op = 1;
    char key;
    
    while (true) {
        system("cls");
        cout << (op == 1 ? "> " : "  ") << "1. Calcular el area de un triangulo\n";
        cout << (op == 2 ? "> " : "  ") << "2. Calcular el area de un trapecio\n";
        cout << (op == 3 ? "> " : "  ") << "3. Calcular el area de un rectangulo\n";
        cout << "Seleccione la opcion que desee (ENTER para confirmar)\n";
        
        key = _getch();
        if (key == 72 && op > 1) { // Flecha hacia arriba
            op--;
        } else if (key == 80 && op < 3) { // Flecha hacia abajo
            op++;
        } else if (key == 13) { // Enter
            system("cls");
            switch(op) {
                case 1:
                    cout << "Ingrese la base y luego la altura del triangulo\n";
                    cin >> num1 >> num2;
                    rtd = (num1 * num2) / 2;
                    cout << "El area del triangulo es " << rtd << "\n";
                    break;
                case 2:
                    cout << "Introduzca la base mayor y luego la base menor y al final ponga la altura\n";
                    cin >> num1 >> num2 >> num3;
                    rtd = ((num1 + num2) / 2) * num3;
                    cout << "El area del trapecio es " << rtd << "\n";
                    break;
                case 3:
                    cout << "Ingrese la base y luego la altura del rectangulo\n";
                    cin >> num1 >> num2;
                    rtd = num1 * num2;
                    cout << "El area del rectangulo es " << rtd << "\n";
                    break;
            }
            cout << "\nteclee cualquier tecla";
            _getch();
        }
    }
    return 0;
}
