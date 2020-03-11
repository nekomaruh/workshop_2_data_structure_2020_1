//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#include <iostream>
#include <string>
#include "ABBAtencion.h"

using namespace std;

ABBAtencion::ABBAtencion() {
    this->raiz = nullptr;
}

ABBAtencion::~ABBAtencion() = default;

void ABBAtencion::insertar(const char *rut, int contadorAtencion) {

    if(this->raiz== nullptr){
        this->raiz = new NodoAtencion(rut,"P",contadorAtencion);
        return;
    }else{
        insertar(rut,this->raiz, contadorAtencion);
    }

    //cout<<rut<<endl;
}

void ABBAtencion::insertar(const char *rut, NodoAtencion *nodo, int contadorAtencion) {
    if(transformarPrioridad(rut)<=transformarPrioridad(nodo->getRut())){
        if(nodo->getIzq()== nullptr){
            nodo->setIzq(new NodoAtencion(rut,"P",contadorAtencion));
        }else{
            insertar(rut,nodo->getIzq(),contadorAtencion);
        }

    }else{
        if(nodo->getDer() == nullptr){
            nodo->setDer(new NodoAtencion(rut,"P",contadorAtencion));
        }else{
            insertar(rut,nodo->getDer(),contadorAtencion);
        }
    }
}

int ABBAtencion::transformarPrioridad(const char *rut) {
    string res;
    res.append(rut,0,8);
    return atoi(res.c_str());
}
