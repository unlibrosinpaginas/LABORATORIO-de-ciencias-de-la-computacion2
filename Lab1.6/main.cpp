//Implementar una funcion que reciba dos cadenas, s y t, la cual debe concatenar
//la cadena t en s. Implemente en dos formas, usando arreglos y usando SOLO punteros.
//Considere que s DEBE TENER EL TAMA~NO SUFICIENTE
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>


using namespace std;

void puntero_cad(char s[40],char t[40])
{
    char *ps=s;
    char *pt=t;
    int i=0, j=0;{
    while(ps[i]!='\0'){//mientras ps sea nulo (1)
        i++;
    }
    while(pt[j]!='\0'){
    ps[i++]=pt[j++];
    }

    ps[i]='\0';}
    cout<<"- cadena concatenada con punteros: "<<ps;



}


void arreglos_cad(char s[40],char t[40])
{
 strcat(t,s);
 cout<<"la cadena concatenada es: "<<t;
}

int main()
{

    char s[40];
    char t[40];
    cout << "Introduce una cadena (1): ";
    cin.getline(s,40);
    cout <<  "Introduce otra cadena (2): ";
    cin.getline(t,40);
    cout <<  "CONCATENAR CADENAS: ";
    puntero_cad(s,t);
    arreglos_cad(s,t);


}
