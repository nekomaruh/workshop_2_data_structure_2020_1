//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#include <cstring>
#include "NodoAtencion.h"


NodoAtencion::NodoAtencion(const char *rut, const char *tipo, int numero) {
    this->numero = numero;
    strcpy(this->rut, rut);
    strcpy(this->tipo, tipo);
    this->der = nullptr;
    this->izq = nullptr;
}

NodoAtencion::~NodoAtencion() = default;

NodoAtencion* NodoAtencion::getDer(){
    return this->der;
}

NodoAtencion* NodoAtencion::getIzq() {
    return this->izq;
}


void NodoAtencion::setDer(NodoAtencion *nodoAtencion){
    this->der = nodoAtencion;
}

void NodoAtencion::setIzq(NodoAtencion *nodoAtencion) {
    this->izq = nodoAtencion;
}
char *NodoAtencion::getRut() {
    return this->rut;
}