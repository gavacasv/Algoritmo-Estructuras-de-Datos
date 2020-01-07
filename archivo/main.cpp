#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void menu(bool en);
void ver(string ag);
void contactos(string ag);
int main(){
menu(true);
    return 0;
}
void ver(string ag){
    string nom, ape;
    int num, n;
    cout<<"Contactos de "<<ag<<endl;
    ag+=".txt";
    ifstream archivo;
    archivo.open(ag,ios::in);
    if(archivo.is_open()){
        archivo>>n;
    while (n!=0){
        archivo>>nom>>ape>>num;
        cout<<"\nCONTACTO "<<n<<"\nNombre:" <<nom<<"\nApellido: "<<ape<<"\nCelular: "<<num;
        archivo>>n;
    }
            archivo.close();
    }
    else{
        cout<<"\nNo existe tal agenda\n";}
}

void contactos(string ag){
    string nom, ape;
    int num,n=1;
    char op;
    cout<<"Contactos de "<<ag<<endl;
    ag+=".txt";
    ofstream archivo;
    archivo.open(ag, ios::out);
    if(archivo.is_open()){
        do{
            
            cout<<"Ingrese el Nombre: ";
            cin>>nom;
            cout<<"Ingrese el Apellido: ";
            cin>>ape;
            cout<<"Ingrese el Numero celular: ";
            cin>>num;
            archivo<<n<<endl<<nom<<endl<<ape<<endl<<num<<endl;
            n++;
            cout<<"Desea agregar otro (s/n): ";
            cin>>op;
            
        }while(op=='s');
        archivo<<0;
        cout<<"Fin Agenda.\n ";
        archivo.close();
    }
    
}
void menu(bool en){
    int op;
    string ag;
    if(en){
         cout<<"\nBienvenido\n¿Que desea hacer?\n";
         cout<<"1*-Agregar lista\n";
         cout<<"2.*-Ver lista\n";
        cout<<"0*-Salir\n";
        cin >>op;
        switch(op){
            case 0:
            en=false;
            break;
            case 2:
            cout<<"Ingrese el nombre de la lista: ";
            cin>>ag;
            ver(ag);
            break;
            case 1:
            cout<<"Ingrese el nombre de la lista: ";
            cin>>ag;
            contactos(ag);
            break;
        }
        menu(en);
    }
   
}