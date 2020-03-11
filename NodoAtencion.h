//
// Created by Johan Esteban Ordenes Galleguillos on 11-03-20.
//

#ifndef TALLER_2_DATA_STRUCTURE_NODOATENCION_H
#define TALLER_2_DATA_STRUCTURE_NODOATENCION_H


class NodoAtencion {
private:
    char tipo[1];
    char rut[10];
    int numero;
    NodoAtencion *der;
    NodoAtencion *izq;
public:
    NodoAtencion(const char *rut, const char *tipo, int numero);
    ~NodoAtencion();
    NodoAtencion * getDer();
    void setDer(NodoAtencion *nodoAtencion);
    NodoAtencion * getIzq();
    void setIzq(NodoAtencion *nodoAtencion);
    char *getRut();
};


#endif //TALLER_2_DATA_STRUCTURE_NODOATENCION_H
