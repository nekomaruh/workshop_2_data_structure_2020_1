//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#ifndef TALLER_2_DATA_STRUCTURE_ABBATENCION_H
#define TALLER_2_DATA_STRUCTURE_ABBATENCION_H


#include "NodoAtencion.h"
#include <string>

using namespace std;

class ABBAtencion {
private:
    NodoAtencion *raiz;
    int transformarPrioridad(const char *rut);
    void insertar(const char *rut, NodoAtencion *nodo, int contadorAtencion);
public:
    ABBAtencion();
    ~ABBAtencion();
    void insertar(const char *rut, int contadorAtencion);


};


#endif //TALLER_2_DATA_STRUCTURE_ABBATENCION_H
