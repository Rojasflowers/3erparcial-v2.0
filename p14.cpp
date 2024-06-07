#include <iostream>
using namespace std;
int main()
{
    int n,n2;
    cout<<"ingrese un numero\n";cin>>n;
    cout<<"ingrese otro numero\n";cin>>n2;
  if (n > n2) {
        cout << "El " << n << " es mayor que " << n2 << "." << "\n";
    } else if (n < n2) {
        cout << "El " << n2 << " es mayor que " << n << "." << "\n";
    } else {
        cout << "los números " << n << " y " << n2 << " son iguales" << "\n";
    }
    return 0;
}
