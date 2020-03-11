#include <iostream>
#include "ABBAtencion.h"
#include "Interfaz.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Interfaz *i = new Interfaz();
    i->insertarAtencion("20000000-k");
    i->insertarAtencion("10000000-k");
    i->insertarAtencion("30000000-k");

    return 0;
}