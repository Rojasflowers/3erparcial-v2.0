#include <iostream>
using namespace std;
int main (){
	int num,i,n;
	cout<<"digite el tamaño del arreglo";
	cin>>n;
	int nume[n];
	for(i=1;i<=n;i++){
		cout<<"digite un numero para la posicion"<<i<<endl;
		cin>>num;
		nume[i]=num;
	}
	for(i=1;i<=n;i++){
		cout<<"el dato en la posicion "<<i<<" es: "<<nume[i]<<"\n";
	}
    return 0;
}