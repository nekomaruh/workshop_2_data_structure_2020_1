//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#ifndef TALLER_2_DATA_STRUCTURE_INTERFAZ_H
#define TALLER_2_DATA_STRUCTURE_INTERFAZ_H


#include "ListaAtencion.h"
#include "ABBAtencion.h"

class Interfaz {
public:
    Interfaz();
    ~Interfaz();
    void insertarAtencion(const char *rut);

private:
    ListaAtencion *listaAtencion;
    ABBAtencion *abbAtencion;
    int contadorAtencion;
    int transformarPrioridad(const char *rut);

};


#endif //TALLER_2_DATA_STRUCTURE_INTERFAZ_H
