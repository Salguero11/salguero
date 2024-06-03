#include <iostream>
using namespace std;

int main() { 
float area, altura1, altura2, base;
cout<<"por favor ingrese su primera medicion de altura"<<endl;
cin>>altura1;
cout<<"por favor ingrese su segunda medicion de altura"<<endl;
cin>>altura2; 
cout<<"ingrese la base"<<endl;
cin>>base;
area= ((altura1 + altura2)*base)/2;
cout<<"el calculo de su area es de = ";
cout<<area;
}