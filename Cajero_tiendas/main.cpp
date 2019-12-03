#include <iostream>
#include<iomanip>
using namespace std;
void menu(int registro[], int i);
void burbujarma(int a[], int n);
void burbujarme(int a[], int n);
void imprimir(int registro[], int i);
void suma_impar(int a[], int n);
void suma_par(int a[], int n);
void ingresar(int a[], int n);
int main()
{
    int registro[100];
    int i=1;
    registro[0]=-1;
    menu(registro, i);
    return 0;
}
void menu(int registro[], int i)
{
    int op=0;
    cout<<"\n\n\n"<<setw(20)<<"BIENVENIDO\n"<<setw(8)<<"¿Que desea hacer?\n";
    cout<<"1.- Ingresar registro de dinero\n";
    cout<<"2.- Ordenar los registros de menor a mayor\n";
    cout<<"3.- Ordenar los registros de mayor a menor\n";
    cout<<"4.- Sumar los elementos pares y sumar los elemntos impares\n";
    cout<<"5.- Salir\n";
    cout<<"\nIngrese la opcion escogida ";
    cin>>op;
    switch(op)
    {
    case 1:
        cout <<"Ingrese la cantidad de valores a depositar: ";
        cin>>i;
        ingresar(registro,i);
        menu(registro, i);
        break;
    case 2:
        if(registro[0]!=-1){
        burbujarme(registro,i);
        imprimir(registro,i);}
        else{
            cout<<"No hay registros, por favor ingreselos con la opcion 1";
        }
        menu(registro,i);
        break;
    case 3:
        if(registro[0]!=-1){
        burbujarma(registro,i);
        imprimir(registro,i);
        menu(registro,i);
        }else{
            cout<<"No hay registros, por favor ingreselos con la opcion 1";
        }
        break;
    case 4:
        if(registro[0]!=-1){
        suma_par(registro, i);
        suma_impar(registro, i);
        }else{
            cout<<"No hay registros, por favor ingreselos con la opcion 1";
        }
        menu(registro,i);

        break;
    case 5:
        cout<<"GRACIAS POR PREFERIRNOS VWV\n";
        break;
    default:
        cout<<"No es una opcion valida\n\n";
        menu(registro, i);
    }

}
void imprimir(int re[], int i)
{
    for (int j=0; j<i; j++)
    {
        cout<<"Valor "<<j+1<<" = "<<re[j]<<endl;
    }
}

void burbujarma(int a[], int n)
{
     cout<<"Orden de mayor a menor "<<endl;
    for(int i=0; i<n ; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(a[i]<a[j])
            {
                int aux= a[i];
                a[i]=a[j];
                a[j]=aux;
            }

        }
    }
}
void suma_par(int a[], int n)
{
    int suma=0;
    for(int i=0; i<n ; i++)
    {
        if(a[i]%2==0)
        {
            suma=suma+a[i];
        }
    }
    cout <<"La suma de los pares es: "<<suma<<endl;
}

void ingresar(int a[], int n)
{

    for(int j=0; j<n ; j++)
    {
        cout<<"Ingrese el valor "<<j+1<<endl;
        cin>> a[j];
    }
}
void suma_impar(int a[], int n)
{
    int suma=0;
    for(int i=0; i<n ; i++)
    {
        if(a[i]%2 != 0)
        {
            suma=suma+a[i];
        }
    }
    cout<<"La suma de los impares es: " << suma<<endl;

}
void burbujarme(int a[], int n)
{
     cout<<"Orden de menor a mayor"<<endl;
    for(int i=0; i<n ; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(a[i]>a[j])
            {
                int aux= a[i];
                a[i]=a[j];
                a[j]=aux;
            }

        }
    }
}
