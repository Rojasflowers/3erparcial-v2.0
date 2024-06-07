#include <iostream>
using namespace std;

int main() 
{
  int num, m, M;
  int i;
  int suma=0;
  m=0;
  M=0;

 cout<<"dijite 10 numeros";
 cin>>num;
 m=num;
 M=num;
 suma+=num;

 for(int i=1;i<10;i++)
 {
  cin>>num;
  suma+=num;

 if(num<m)
 {
  m=num;
 }
 if(num>M)
 {
  M=num;
 }
 }
 cout<<"el numero menor es"<<m<<endl;
 cout<<"el numero mayor es"<<M<<endl;
 cout<<"la suma de sus numeros es"<<suma<<endl;

 return 0;
}