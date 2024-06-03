#include <iostream>

using namespace std;

/* 3)         (40%) Elabore un programa que realice una transformación con una serie de números leídos desde teclado, que se guardan en un arreglo. Proceda de la siguiente manera:

a)     Llene un arreglo de números enteros con los n números.

Una vez haya llenado el arreglo realice lo siguiente:

b)    Para cada uno de los datos del arreglo, si es par, dividirlo entre dos; si es impar, multiplicarlo por diez.

c)     Muestre en pantalla los datos del arreglo ya transformados.

Por ejemplo:

Si se llena el arreglo con los siguientes números:*/

int main() {
int n;
cout<<"ingrese la cantidad de numeros que quiere para su arreglo \n";
cin>>n;
int arrel[n];
cout<<"ingrese numeros enteros en los espacios del arreglo"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<i+1<<".";
    cin>>arrel[i];
}
for (int i = 0; i < n; i++)
{
    if (arrel[i]%2==0)
    {
        arrel[i]= arrel[i]/2;
    }
   else
   {
    arrel[i]=arrel[i]*10;
   }
 
}  
cout<< "----Arreglo transformado-------\n\n";
    for (int i = 0; i < n; ++i) {
        cout << arrel[i] << " ";
    }
    cout << endl;
    
    return 0;
}

