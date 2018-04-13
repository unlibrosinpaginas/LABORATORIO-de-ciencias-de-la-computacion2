#include <iostream>

using namespace std;
//Implemente una funcio´n que reciba una cadena y retorne si la cadena representa un palindrome o no
void esPalindromo(string cadena, int num){
    for(int i = 0; i < num/2; i++)
        if(cadena[i] != cadena[num-i-1])//comparacion del primer caracter de la cadena con el ultimo
         {cout<<"No es palindromo";}
        else
            cout<<"Es Palindromo";

}
int main(){
    string cadena;
    int num;
    cout << "Ingresa la cadena: ";
    getline(cin,cadena);
    num=cadena.length();
    esPalindromo(cadena,num) ;

    return 0;
}
