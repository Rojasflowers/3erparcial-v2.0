#include <iostream>
using namespace std;
int main(){
	int num, p, c=0, i, res;
	cout<<"Ingrese el numero\n";
	cin>>num;
	cout<<"Ingrese la potencia\n";
	cin>>p;
	for ( i = num; i <=p; i++)
    {
        res=(num*p)*p;
        c<<res;
    }
    return 0;
}