//Implementar una funcion que reciba dos cadenas, s y t, la cual debe copiar los
//elementos de t en s. Implemente en dos formas, usando arreglos y usando SOLO punteros.
//Considere que s DEBE TENER EL TAMA~NO SUFICIENTE PARA CONTENER LOS
//ELEMENTOS DE t.
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

void puntero_cad(char s[40],char t[40])
{
    char *ps=s;
    char *pt=t;
    int i=0, j=0;
    while(ps[i]!='\0'){//mientras ps sea nulo (1)
        i++;
    }
    while(pt[j]!='\0'){
    ps[i++]=pt[j++];
    }

    ps[i]='\0';
    cout<<"- copia con punteros: "<<ps;


}


void arreglos_cad(char s[40],char t[40])
{
 strcpy(s+strlen(s),t);
 cout<<"la cadena copiada con arreglos es: "<<s;//copiando el contenido de t en s, desde el ultimo termino de la cadena s
}


int main()
{

    char s[40];
    char t[40];
    cout << "Introduce una cadena (1): ";
    cin.getline(s,40);
    cout <<  "Introduce otra cadena (2): ";
    cin.getline(t,40);
    cout <<  "COPIA: ";
    puntero_cad(s,t);
    arreglos_cad(s,t);
    return 0;

}
