#include <iostream>

using namespace std;
#include <fstream>
void anadir(int a[], int lon);
void imprimir(int a[], int lon);
void buscar(int a[], int d, int lon);
void almacenar(int a[],int d, int lon);
int main()
{

    int dato;
    int longitud;
    cout << "Ingrese el numero de elementos que desea : ";
    cin>>longitud;
    int arr[longitud];
    anadir(arr, longitud);
     imprimir(arr, longitud);
    cout << "\nIngrese el dato a buscar: ";
    cin >> dato;
    buscar(arr, dato, longitud);
    almacenar(arr,dato, longitud);

}
void anadir(int a[], int lon){
    cout << "Ingrese los elementos del arreglo: "<<endl;
    for (int i=0; i<lon; i++){
        cout << "Elemento "<< i+1<< ": ";
        cin >> a[i];
    }
    cout << endl;

}
void buscar(int a[], int d, int lon){
    bool c=false;
    for(int i=0; i<lon; i++){
         if(a[i]==d){
            cout << "ELEMENTO ENCONTRADO\nPosicion: "<<i+1<<endl;
            c=true;
        }
    }
    if(c==false){
       cout<< "ELEMENTO NO ENCONTRADO";
    }
}
void imprimir(int a[], int lon){
    cout << "El arreglo es: "<<endl;
    for(int i=0; i<lon; i++){
        cout<<"|" <<a[i]<< "|";
    }
    cout << endl;
}
void almacenar(int a[], int d, int lon){

    ofstream archivo;
    archivo.open("historial.txt");
    archivo << "ELEMENTOS DEL ARREGLO: ";
    for(int i=0; i<lon; i++){
        archivo <<a[i]<<" " ;
    }
    archivo<<endl;
    bool c=false;
    for(int i=0; i<lon; i++){
        if(a[i]==d){
            archivo << "ELEMENTO ENCONTRADO\nPOCISION: "<<i+1<<endl;
            c=true;
        }
    }
    if(c==false){
        archivo<< "ELEMENTO NO ENCONTRADO";
    }
    archivo.close();
}

