#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

void crear_mat1(int M1[4][4],int f1,int c1)
{
     for (int i = 0; i < f1; i++)
        for (int j = 0; j < c1; j++)
                {cout << "Valor de la matriz (1)["<< i << "]["<< j <<"];";
                cin >> M1[i][j];}


}

void imprimir_mat1(int M1[4][4],int f1,int c1)
{
	for (int i = 0; i < f1; i++){
        for (int j = 0; j < c1; j++)
            {cout<<M1[i][j]<<" ";}
	cout<<"\n";}
}


void crear_mat2(int M2[4][4],int f2,int c2)
{
     for (int i = 0; i < f2; i++)
        for (int j = 0; j < c2; j++)
                {cout << "Valor de la matriz (1)["<< i << "]["<< j <<"];";
                cin >> M2[i][j];}


}


void imprimir_mat2(int M2[4][4],int f2,int c2)
{
	for (int i = 0; i < f2; i++){
        for (int j = 0; j < c2; j++)
            {cout<<M2[i][j]<<" ";}
	cout<<"\n";}
}

void crear_mat3(int M3[4][4],int f1,int c2)
{
     for (int i = 0; i < f1; i++)
        for (int j = 0; j < c2; j++)
            M3[i][j] = 0;

}

void multiplicacion (int M1[4][4],int f1,int c1,int M2[4][4],int c2,int M3[4][4])
{

   for(int i=0; i<f1; ++i)
        for(int j=0; j<c2; ++j)
            for(int z=0; z<c1; ++z)
                M3[i][j] += M1[i][z] * M2[z][j];



}

void imprimir_mat3(int M3[4][4],int f1,int c2)
{
	for (int i = 0; i < f1; i++){
        for (int j = 0; j < c2; j++)
            {cout<<M3[i][j]<<" ";}
	cout<<"\n";}
}


int main(){

	int f1,c1,f2,c2;
	int M1[4][4];
	int M2[4][4];
	int M3[4][4];
	cout<<"Filas de la  matriz (1) ";
	cin>>f1;
	cout<<"Columnas de la  matriz (1) ";
	cin>>c1;
	cout<<"Filas de la matriz (2) ";
	cin>>f2;
	cout<<"Columnas de la  matriz (2) ";
	cin>>c2;
	if (c1==f2)
    {
        cout<<"PRIMERA MATRIZ\n";
        crear_mat1( M1, f1, c1);
        imprimir_mat1( M1, f1, c1);
        cout<<"SEGUNDA MATRIZ\n";
        crear_mat2( M2, f2, c2);
        imprimir_mat2( M2, f2, c2);
        cout<<"MULTIPLICACION DE MATRICES\n";
        crear_mat3( M3, f1, c2);
        multiplicacion( M1, f1, c1, M2, c2, M3);
        imprimir_mat3( M3, f1, c2);
    }
    else
    cout<<"Estas matrices no se pueden multiplicar , porque el numero de columnas de la M1  no es igual al numero de filas de la M2";


}
