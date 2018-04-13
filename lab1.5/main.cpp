#include <iostream>
using namespace std;

int puntero_tam_cadena(char *);
int puntero_tam_cadena();
char cadena[40];

int arreglo_tam_cadena(char cadena[40])
{
	int tam=0;
	while (cadena[tam]!='\0') tam++;
    return tam;

}

int puntero_tam_cadena(char *cad)//parametro puntero de la posicion inicial
{
    int cont =0;
    while (*cad){//mientras cad no sea nulo continua el while
        {cont++;}
    cad++;}
    return  cont;

}
int main()
{

    char cadena[40];//posicion inicial de la direccion&cadena

    cout <<  "Introduce un cadena: ";
    cin.get(cadena,40);
    cout << "Tamaño de una cadena FUNCION POR ARREGLOS: "<<arreglo_tam_cadena(cadena);
    cout << "\n Tamaño de una cadena FUNCION POR PUNTEROS: "<<puntero_tam_cadena(cadena);//cadena =&cadena[40]


}


