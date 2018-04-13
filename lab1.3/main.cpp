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


void print(int V[],int tam)
{
	cout<<"ARREGLO: ";
    for (int i = 0 ; i < tam ; i++){
		cout<<V[i]<<" ";}
	cout<<endl;
}

void insertionSort_arr(int V[], int tam)
{
   int i, cp, j;
   for (i = 1; i < tam; i++)
   {
       cp = V[i];
       j = i-1;

       while (j >= 0 && V[j] > cp)
       {
           V[j+1] = V[j];
           j = j-1;
       }
       V[j+1] = cp;
   }
}

void print_Ord2(int V[],int tam){
	cout<<"Ordenado por InsertionSort:  ";
    for (int i = 0 ; i < tam ; i++){
		cout<<V[i]<<" ";}
	cout<<endl;
}

void merge(int V[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] =  V [l + i];
    for (j = 0; j < n2; j++)
        R[j] = V[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            V[k] = L[i];
            i++;
        }
        else
        {
            V[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        V[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        V[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int V[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;

        mergeSort(V, l, m);
        mergeSort(V, m+1, r);

        merge(V, l, m, r);
    }
}


void print_Merg3(int V[], int tam)
{
	cout<<"Ordenado por MergeSort:  ";
    for (int i = 0 ; i < tam ; i++){
		cout<<V[i]<<" ";}
	cout<<endl;
}


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int V[], int low, int high)
{
    int pivot = V[high];
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++)
    {
        if (V[j] <= pivot)
        {
            i++;
            swap(&V[i], &V[j]);
        }
    }
    swap(&V[i + 1], &V[high]);
    return (i + 1);
}

void quickSort(int V[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(V, low, high);

        quickSort(V, low, pi - 1);
        quickSort(V, pi + 1, high);
    }
}
void print_Quick3(int V[], int tam)
{
	cout<<"Ordenado por QuickSort:  ";
    for (int i = 0 ; i < tam ; i++){
		cout<<V[i]<<" ";}
	cout<<endl;
}

int main(){
	int V[10];
	int tam ;
	int resultado;
	cout<<"Ingresar el tamaño del arreglo: ";
	cin>>tam;
	crear_arr(V,tam);
	print(V,tam);
    insertionSort_arr(V, tam);
    print_Ord2(V,tam);
    mergeSort(V, 0, tam - 1);
    print_Merg3(V, tam);
    quickSort(V, 0, tam-1);
    print_Quick3(V, tam);
    return 0;

}
