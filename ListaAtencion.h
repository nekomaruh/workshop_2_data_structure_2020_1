//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#ifndef TALLER_2_DATA_STRUCTURE_LISTAATENCION_H
#define TALLER_2_DATA_STRUCTURE_LISTAATENCION_H


#include "NodoAtencion.h"

class ListaAtencion {
private:
    NodoAtencion *first;

public:
    ListaAtencion();
    ~ListaAtencion();
    void push(NodoAtencion *nodoAtencion);
    NodoAtencion* pop();
};


#endif //TALLER_2_DATA_STRUCTURE_LISTAATENCION_H
