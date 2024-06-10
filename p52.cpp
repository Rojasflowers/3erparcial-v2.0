#include <iostream>
using namespace std;

float encontrarMayor(float num1, float num2, float num3) {
    float mayor = num1;
    if (num2 > mayor) {
        mayor = num2; 
    }
    if (num3 > mayor) {
        mayor = num3; 
    }
    return mayor;
}
float promedios(float examen_1, float examen_2, float examen_3){
    float cal1,cal2,cal3,prom;
    cal1=examen_1*0.2;
    cal2=examen_2*0.2;
    cal3=examen_3*0.6;
    prom=cal1+cal2+cal3;

    return prom;
}

int main(){
    float examen_1, examen_2, examen_3;
    char resp;

    do {
        cout << "Por favor no ingresar numeros mayores a 10" << endl;
        cout << "Ingrese la nota del examen del primer parcial: ";
        cin >> examen_1;

        cout << "Ingrese la nota del examen del segundo parcial: ";
        cin >> examen_2;

        cout << "Ingrese la nota del examen del tercer parcial: ";
        cin >> examen_3;

        int promedio = promedios(examen_1,examen_2,examen_3);
        cout << "El promedio es: " << promedio << endl;

        float notaMayor = encontrarMayor(examen_1, examen_2, examen_3);
        cout << "La calificacion mayor es: " << notaMayor << endl;

        cout << "Si desea terminar pulse (n) si quiere sacar otra nota pulse (s) (s/n): ";
        cin >> resp;
    } while(resp == 'n');

    return 0;
}
