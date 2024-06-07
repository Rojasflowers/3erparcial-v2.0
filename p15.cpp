#include <iostream>
#define v 70
using namespace std;
int main()
{
    int e, d1,d2;
    cout<<" Ingrese su edad\n";
    cin>>e;
    if (e<=5)
    {
        d1=v-(v*0.60);
        cout<<" El precio a pagar por el voleto es de: "<<d1;
    }
     else if (e>=60);
    {
      d2=v-(v*0.55);
      cout<<" El precio a pagar por el voleto es de: "<<d2;
    }
    return 0;
}

