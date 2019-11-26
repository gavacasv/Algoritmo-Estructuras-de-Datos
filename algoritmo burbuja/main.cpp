#include <iostream>

using namespace std;

void ing(int a[],int n);

void burbuja(int a[],int n);

void imprimir(int a[],int n);
int main()
{
    int arre[5];
    ing( arre,5);
    burbuja(arre,5);
    imprimir(arre,5);
    return 0;
}

void ing(int a[],int n)
{
    for(int i=0; i<n; i++)
    {cout<<"e"<<i+1<<" ";
        cin>>a[i];
    }
}

void burbuja(int a[],int n)
{
    int aux;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}

void imprimir(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<" "<<a[i];
    }
}
