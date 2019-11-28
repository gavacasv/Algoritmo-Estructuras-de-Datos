#include <iostream>

using namespace std;
void agregar(int a[], int n);
void imprimir(int a[], int n);
void ord_selec (int a[], int n);
void menor(int a[], int n);
int main()
{
    int n;

    cout<<"Ingrese el rango de arreglo: ";
    cin>>n;
    int arreglo[n];
    agregar(arreglo,n);
cout<<"El arreglo sin ordenado: ";
imprimir(arreglo,n);
 ord_selec (arreglo,n);
 cout<<"\nEl arreglo ordenedo: ";
 imprimir(arreglo,n);

    return 0;
}
void agregar(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
         cout<<"Valor  "<<i+1<<" :";
        cin>>a[i];

    }
}
void imprimir(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<" "<<a[i];

    }
    cout<<endl;

}
void menor(int a[], int n)
{
    int b=a[0];
    for(int i=0; i<n; i++)
    {
        if(b>a[i])
        {
            b=a[i];
        }

    }
}
void ord_selec (int a[], int n){
     int mini, aux;

    for(int i=0; i<10; i++)
    {
        mini=i;
        for(int j=i+1; j<10; j++)
        {
            if (a[j]<a[mini])
            {
                mini=j;
            }


        }
        aux=a[i];
        a[i]=a[mini];
        a[mini]=aux;

    }
}
