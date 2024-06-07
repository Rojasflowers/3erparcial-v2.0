#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char name[20];
  char con[35];
  int intt = 0;
  do {
    cout<<"dime tu nombre\n ";
    cin>>name;
    cout<<"dime tu grupo grado y numero de lista\n ";
    cin>>con;
    if (strcmp(name, "daniel") == 0 && strcmp(con, "2b35") == 0) {
      cout<<"Bienvenido al sistema\n";
      break;
    } else {
      intt++;
      cout<<"Incorrecto\n Intentos restantes\n"<< 3 - intt<<endl;
    }
  } while (intt < 3);
  if (intt == 3) {
    cout<<"Lo sentimos ha superado el número máximo de intentos permitidos\n";
  }

  float uni, cant, imtot = 0;

  do {
    cout<<"Ingrese el precio del artículo, si ya no va a llevar nada digite '0'\n";
    cin>>uni;

    if (uni <= 0) {
      cout<<"el precio unitario debe ser un número positivo\n";
      continue;
    }

    cout<<"Introduzca la cantidad total\n ";
    cin>>cant;

    if (cant <= 0) {
      cout<<"Error\n";
      continue;
    }

    imtot +=uni * cant;

    cout<<"Importe parcial:"<<imtot<<endl;
  } while (uni != 0);

  cout<<"\nImporte total de la factura:"<<imtot<<endl;
  return 0;
}