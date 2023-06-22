#include "validaciones.h"
#include <iostream>
#include <string>

validaciones::validaciones() {
    // Constructor
}

validaciones::~validaciones() {
    // Destructor
}

void validaciones::validacionCedula(std::string& cedula) {
    bool bandera = false;
    while (!bandera) {
        std::cout << "Ingrese su cedula: ";
        std::cin >> cedula;
        if (cedula.length() == 10) {
            for (int i = 0; i < cedula.length(); i++) {
                if (isdigit(cedula[i])) {
                    bandera = true;
                }
                else {
                    bandera = false;
                    break;
                }
            }
        }
        else {
            bandera = false;
        }
        if (!bandera) {
            std::cout << "Cedula invalida, ingrese nuevamente" << std::endl;
        }
    }
}

void validaciones::setCedula(std::string& cedula) {
    this->cedula = cedula;
}

std::string validaciones::getCedula() const {
    return cedula;
}
