#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, in=3,cont=0, pre,pi, cal, tot;
    char n[50], gl[20];
    while (in>0)
    { 
        cout<<" ingrese su nombre\n";
        cin>>n;
        cout<<" ingreses su numero de lista y grado, grupo\n";
        cin>>gl;
        if (strcmp(n, "daniel") == 0 && strcmp(gl, "2bm35") == 0)
        {
        cout<<" Bienvenido al sistema\n";
        for(i=1; pi>0; i--)
          {
            cout<<" ingrese cuantas piezas desea llevar\n";
            cin>>pi;
            if(pi>0){
                cout<<" Ingresa el precio de cada una\n";
                cin>>pre;
                cal=pi*pre;
            }
            cout<<" el total a pagar es de: ", cal;

          }
        }
       else
        {
        in--;
        if( in>0)
        {
            cout<<" no es correcto\n";
        }else{
            cout<<" Se ha superado el numero de intentos permitido\n"; 
        }
    
        }
    }
    return 0;
     
    
}