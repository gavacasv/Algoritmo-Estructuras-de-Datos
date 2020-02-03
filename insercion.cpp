#include <iostream>

using namespace std;
void agregar(int a[], int n);
void imprimir(int a[], int n);
void ord_inser(int a[], int l);
void menor(int a[], int n);
int main()
{
	int n;
	cout << "Ingrese el rango de arreglo: ";
	cin >> n;
	int arreglo[n];
	agregar(arreglo, n);
	cout << "El arreglo sin ordenado: ";
	imprimir(arreglo, n);
	ord_inser(arreglo, n);
	cout << "\nEl arreglo ordenedo: ";
	imprimir(arreglo, n);

	return 0;
}
void agregar(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Valor  " << i + 1 << " :";
		cin >> a[i];

	}
}
void imprimir(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];

	}
	cout << endl;

}
void menor(int a[], int n)
{
	int b = a[0];
	for (int i = 0; i < n; i++)
	{
		if (b > a[i])
		{
			b = a[i];
		}

	}
}
void ord_inser(int a[], int l) {
	int i, k, aux;
	for (i = 1; i < l; i++) {
		aux = a[i];
		k = i - 1;
		while (k >= 0 && a[k] > aux) {
			a[k + 1] = a[k];
			k--;
		}
		a[k + 1] = aux;
	}

}