#include <iostream>

using namespace std;

#include <iostream>
using namespace std;
void crear_arr(int V[],int tam){
     for (int i = 0; i < tam; i++)
    {
      cout << "Ingrese el valor para arreglo["<< i+1 << "]: ";
      cin >> V[i];
    }

}

void print(int V[],int tam){
	cout<<"ARREGLO: ";
    for (int i = 0 ; i < tam ; i++){
		cout<<V[i]<<" ";}
	cout<<endl;
}


void suma_rec (int V[],int tam)
{
  int total = 0;
  for (int i = 0 ; i < tam ; i++)
     total += V[i];
  cout<<"La suma de los elementos del arreglo son "<<total;
}

int suma_ite(int V[],int tam)
{
    if(tam==1)
    {
        return V[0];
    }else{
        return V[tam-1]+suma_ite(V,tam-1);
    }
}

int main(){
	int V[10];
	int tam ;
	int resultado;
	cout<<"Ingresar el tamaño del arreglo: ";
	cin>>tam;
	crear_arr(V,tam);
	print(V,tam);
	cout<<"Suma Iterativa: ";
	suma_rec(V,tam);
	resultado = suma_ite(V,tam);
	suma_ite(V,tam);
    cout<<"\n Suma Recursiva: La suma de los elementos del arreglo son: "<<resultado;



}
