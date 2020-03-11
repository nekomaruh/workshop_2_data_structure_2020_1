//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#include "Interfaz.h"

Interfaz::Interfaz() {
    this->listaAtencion = new ListaAtencion();
    this->abbAtencion = new ABBAtencion();
    this->contadorAtencion = 0;
}


void Interfaz::insertarAtencion(const char *rut) {
    if(transformarPrioridad(rut)<=5000000){
        abbAtencion->insertar(rut, contadorAtencion);
    }else{
        listaAtencion->push(new NodoAtencion(rut,"N",contadorAtencion));
    }
    contadorAtencion++;
}

int Interfaz::transformarPrioridad(const char *rut) {
    string res;
    res.append(rut,0,8);
    return atoi(res.c_str());
}


