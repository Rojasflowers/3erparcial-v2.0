#include <iostream>
#include <cstring>
using namespace std;
int main(){
  string admin[20];
  string user[20];
  string anonimo[20];

  stirng name[20];//nombe anonimo
  string root[] = "admin";
  string pass_ad[] = "1234";//esta es la contraseañ del admin
  string user,user_password;
  string user_identificador[]=user;
  string pass_usuario[]=user_password;
  char s;
  cout<<"ingresa tu tipo de usuario";
  switch(int type){
    cin >> type;
        case 1://usuario
          cout<<"ingresa tu nombre de usuario";
          cin >> user;
          cout<<"Ingresa tu contraseña: ";
          cin>> user_password;
          break;
        case 2://admin
          if ((strmpc(user,admin)==0)&&(strcmp(pass,1234)){
           cout<<"Bienvenido Administrador "<<endl
           cout<<"Tienes las siguientes ventajas: "<<endl;
           cout<<"1.Modificar mis datos personales\n";
          cout<<"2.Mostrar mis vendedores recomendados\n";
          cout<<"3.Recomendar a un vendedor\n";
          cout<<"4.Mostrar todos los vendedores recomendados por un usuario";
          cout<<"5.Ver los productos ofrcidos por un vendedor";
          cout<<"6. Mostrar todos los productos a la venta\n";

      }

      if(strmpc(user,anonimo)==0){
       cout<<"Ingresaste como anonimo";
        cout<<"ingresa tu nombre en el que quieres acceder: ";
        cin>>name;
        cout<<"bienvenido al sistema "<<name;
        cout<<"\n productos a la venta";
        cout<<"\n pulsa s para salir";
        cin>>s;
        if(s==´s´){
          break;
      }
    }
      if(strcmp(user,user) == 0){
        cout<<"Bienvenido Usuario "<<endl
        cout<<"Bienvenido Administrador "<<endl
    }
  }
}