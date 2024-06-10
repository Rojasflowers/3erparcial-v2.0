#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n,deci,resul;
    
    cout<<"Ingresa el número entero: ";
    cin >> n; cout<<"\n"; 
    cout << "Introduce el decimal para la raíz: ";
    cin >> deci;
    resul = pow(n,1.0/deci);//para asegurar que la operacion se va a hacer con flotantes
    cout<<"La raíz "<<deci<<" de "<<n<<" es: "<<resul<<"\n";
    return 0;
}