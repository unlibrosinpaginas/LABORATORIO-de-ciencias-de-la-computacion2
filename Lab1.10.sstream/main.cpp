//Implemente un programa que reciba una cadena y retorne dicha cadena en un nu´mero, sea entero o decimal
#include <iostream>
#include <sstream>
#include <string>

 //Los stringstreams permiten insertar cualquier tipo de dato dentro del flujo.
 //Todos serán convertidos automáticamente a strings y concatenados.
using namespace std;//

void entero(string cadena)
{

    float num;
    istringstream(cadena)>>num;
    cout<<"cadena a entero; "<<num;
}

int main()
{
   string cadena;
   cout<<"ingresa un cadena de numeros: ";
   getline(cin,cadena);
   entero(cadena);

}
