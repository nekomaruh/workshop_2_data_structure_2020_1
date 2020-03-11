#include <iostream>
#include "ABBAtencion.h"
#include "Interfaz.h"

using namespace std;


void insertarCliente(Interfaz *i){
    cout<<" Ingrese su rut: ";
    char rut[10];
    cin>>rut;
    cout<<"\n";
    i->insertarAtencion(rut);
}

void venderProducto(Interfaz *i){

}

void ingresarProducto(Interfaz *i){

}

void cerrarSistema(Interfaz *i){

}

int main() {
    Interfaz *i = new Interfaz();
    i->insertarAtencion("20000000-k");
    i->insertarAtencion("10000000-k");
    i->insertarAtencion("30000000-k");

    bool connected = true;

    while(connected){
        cout<<" Cliente:\n";
        cout<<"   [1] Ingresar rut\n";
        cout<<" Vendedor:\n";
        cout<<"   [2] Vender producto\n";
        cout<<" Encargado de bodega:\n";
        cout<<"   [3] Ingresar producto\n";
        cout<<" Cerrar sistema:\n";
        cout<<"   [4] Salir\n";
        cout<<" Ingrese una opción: ";
        int option;
        try{
            cin>>option;
        }catch (exception){
            cout<<"Ingrese un valor válido\n\n";
            continue;
        }
        switch(option){
            case 1:
                insertarCliente(i);
                break;
            case 2:
                venderProducto(i);
                break;
            case 3:
                ingresarProducto(i);
                break;
            case 4:
                cerrarSistema(i);
                connected = false;
                break;
            default:
                break;
        }

    }

    return 0;
}