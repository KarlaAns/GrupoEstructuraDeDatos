/**
 * @file GestorPersonas.h
 * @brief Definición de la clase GestorPersonas y sus funciones miembro.
 */

#include "GestorPersonas.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

/**
 * @brief Ingresa una nueva persona y la guarda en un archivo de texto.
 */
void GestorPersonas::ingresarPersona() {
    std::string cedula, nombre, apellido, dia, mes, anio;

    std::cout << "Ingrese el numero de cedula: ";
    std::cin >> cedula;
    std::cout << "Ingrese el nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese el apellido: ";
    std::cin >> apellido;
    std::cout << "Ingrese el dia de nacimiento: ";
    std::cin >> dia;
    std::cout << "Ingrese el mes de nacimiento: ";
    std::cin >> mes;
    std::cout << "Ingrese el año de nacimiento: ";
    std::cin >> anio;

    Fecha fechaNacimiento;
    fechaNacimiento.setDia(dia);
    fechaNacimiento.setMes(mes);
    fechaNacimiento.setAnio(anio);

    Persona persona(cedula, nombre, apellido, fechaNacimiento);
    listaPersonas.insertarAlInicio(&persona);

    std::ofstream archivo("personas.txt", std::ios::app);
    if (archivo.is_open()) {
        archivo << cedula << " ";
        archivo << nombre << " ";
        archivo << apellido << " ";
        archivo << dia << "/" << mes << "/" << anio << "\n";
        archivo.close();
        std::cout << "Persona registrada exitosamente en el archivo personas.txt\n";
    } else {
        std::cerr << "No se pudo abrir el archivo personas.txt para escribir\n";
    }
}

/**
 * @brief Busca una persona por su número de cédula en un archivo de texto.
 * @return Puntero a la instancia de la persona encontrada, o nullptr si no se encontró.
 */
Persona* GestorPersonas::buscarPersona() {
    std::string cedula;
    std::cout << "Ingrese el numero de cedula: ";
    std::cin >> cedula;

    std::ifstream archivo("personas.txt");
    if (archivo.is_open()) {
        std::string dato;
        while (archivo >> dato) {
            if (dato == cedula) {
                std::string nombre, apellido, fechaNacimiento;
                archivo >> nombre >> apellido >> fechaNacimiento;

                archivo.close();

                // Crear una instancia de Persona con los datos encontrados
                Persona* persona = new Persona(cedula, nombre, apellido, fechaNacimiento);
                return persona;
            }
        }
        archivo.close();
    } else {
        std::cerr << "No se pudo abrir el archivo personas.txt para leer\n";
    }

    std::cout << "Persona no encontrada.\n";
    return nullptr;
}

/**
 * @brief Imprime la información de una persona encontrada en el archivo de texto.
 */
void GestorPersonas::imprimirPersona() {
    Persona* persona = buscarPersona();
    if (persona != nullptr) {
        std::cout << "Cedula: " << persona->getCedula() << std::endl;
        std::cout << "Nombre: " << persona->getNombre() << std::endl;
        std::cout << "Apellido: " << persona->getApellido() << std::endl;
        std::cout << "Fecha de nacimiento: " << persona->getFecha().getDia() << "/"
                  << persona->getFecha().getMes() << "/" << persona->getFecha().getAnio() << std::endl;
    }
}

/**
 * @brief Elimina una persona del archivo de texto y actualiza el archivo.
 */
void GestorPersonas::eliminarPersona() {
    std::string cedula;
    std::cout << "Ingrese el numero de cedula: ";
    std::cin >> cedula;
    std::cout << "Persona eliminada correctamente de la lista." << std::endl;

    // Actualizar el archivo personas.txt eliminando la persona
    std::ifstream archivoEntrada("personas.txt");
    if (!archivoEntrada) {
        std::cerr << "No se pudo abrir el archivo personas.txt para leer\n";
        return;
    }

    std::ofstream archivoSalida("personas_temp.txt");
    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo personas_temp.txt para escribir\n";
        return;
    }

    std::string cedulaArchivo, nombre, apellido, fechaNacimiento;
    while (archivoEntrada >> cedulaArchivo >> nombre >> apellido >> fechaNacimiento) {
        if (cedulaArchivo != cedula) {
            archivoSalida << cedulaArchivo << " ";
            archivoSalida << nombre << " ";
            archivoSalida << apellido << " ";
            archivoSalida << fechaNacimiento << "\n";
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    // Eliminar el archivo original
    if (std::remove("personas.txt") != 0) {
        std::cerr << "Error al eliminar el archivo personas.txt\n";
        return;
    }

    // Renombrar el archivo temporal a personas.txt
    if (std::rename("personas_temp.txt", "personas.txt") != 0) {
        std::cerr << "Error al renombrar el archivo personas_temp.txt a personas.txt\n";
    }
}

/**
 * @brief Ordena las cédulas de las personas en el archivo de texto utilizando el algoritmo Shell Sort.
 */
void GestorPersonas::ordenamientoShellSort() {
    // Leer el archivo de texto
    std::ifstream inputFile("personas.txt");
    std::vector<std::string> cedulas;
    std::string cedula;

    while (std::getline(inputFile, cedula)) {
        cedulas.push_back(cedula);
    }

    // Ordenar las cédulas usando shellsort
    int n = cedulas.size();
    int gap = n / 2;

    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            std::string temp = cedulas[i];
            int j = i;

            while (j >= gap && cedulas[j - gap] > temp) {
                cedulas[j] = cedulas[j - gap];
                j -= gap;
            }

            cedulas[j] = temp;
        }

        gap /= 2;
    }

    // Mostrar las cédulas ordenadas
    std::cout << "Cedulas ordenadas:" << std::endl;
    for (const std::string& cedula : cedulas) {
        std::cout << cedula << std::endl;
    }

    // Cerrar el archivo
    inputFile.close();
}
