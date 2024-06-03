#include <iostream>
using namespace std;

int main(){
double temperatura;
cout<<"ingrese la temperatura del pasiente para saber el nivel de gravedad (en grados celcius)\n";
cin>>temperatura;
if (temperatura>=37.4 && temperatura<=37.9)
{
    cout<<"su estado en la escala termica es febricula\n";  
}
if (temperatura>=38.0 && temperatura<=38.9)
{
    cout<<"su estado en la escala termica es fiebre moderada\n";
}
if (temperatura>=39.0 && temperatura<=39.9)
{
    cout<<"su estado en la escala termica es fiebre alta\n";

}
if (temperatura>=40.0 && temperatura<=41.5)
{
    cout<<"su estado en la escala termica es fiebre fiebre muy alta\n";
}
if (temperatura>41.5)
{
    cout<<"su estado en la escala termica es fiebre hiperpirexia\n";
}
else
{
    cout<<"el paciente no tiene fiebre";
}

}