//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#include "ListaAtencion.h"


ListaAtencion::ListaAtencion() = default;

void ListaAtencion::push(NodoAtencion *nodoAtencion) {
    if(this->first == nullptr){
        this->first = nodoAtencion;
    }else{
        NodoAtencion *current= first;
        while(current->getDer() != nullptr){
            current = current->getDer();
        }
        current->setDer(nodoAtencion);
    }
}

NodoAtencion* ListaAtencion::pop() {
    NodoAtencion *nodoAtencion = first;
    first = first->getDer();
    return nodoAtencion;
}