#include <iostream>
#include <fstream>

using namespace std;
bool busqueda(int arr[], int busq, int& i);
void guardar(int arr[], int busq);
void ing(int a[], int n);
void imprimir(int a[], int n);
using namespace std;
int main()
{
	int t = 5, b, i;
	int arre[5];
	ing(arre, t);
	imprimir(arre, t);
	cout << "\nCual elemento quiere buscar: ";
	cin >> b;
	if (busqueda(arre, b, i)) {
		cout << "\nDATO ENCONTRADO: POSICIÓN " << i+1;
	}
	else {
		cout << "\nDATO NO ENCONTRADO: EL VALOR NO ESTA EN EL ARREGLO";
	}
	guardar(arre, b);
	return 0;
}
bool busqueda(int arr[], int busq, int &i){
	bool sal=false;
	int t = 5;
	for ( i = 0; i <= t; i++)
	{
		if (arr[i] == busq)
		{
			sal = true;
			break;
		}
	}

	return sal;
}
void guardar(int arr[], int busq) {
	ofstream a;
	a.open("resultados.txt");
	int i;
	int t =5;
	a << "\nArreglo: ";
	for (i = 0; i < t; i++)
	{
		a << "|" << arr[i];
	}
	if (busqueda(arr, busq, i)) {
		a<< "\nDATO ENCONTRADO: POSICIÓN " << i+1;
	}
	else
	{
		a<< "\nDATO NO ENCONTRADO: EL VALOR NO ESTA EN EL ARREGLO";
	}
}
void ing(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Elemento " << i + 1 << ": ";
		cin >> a[i];
	}
}
void imprimir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "|" << a[i];
	}
}