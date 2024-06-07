#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ingrese un numero\n";cin>>n;
if (n % 2 == 0)
{
    cout<<"su numero es par\n";
}
else{
    cout<<"su numero es impar\n";
}
if (n % 3 == 0)
{
    cout<<"su numero es divisible por 3\n";
}
else {
    cout<<"su numero no es divisible por 3\n";
}
    return 0;
}
