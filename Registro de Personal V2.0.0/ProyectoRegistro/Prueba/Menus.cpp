#include "Menus.h"
#include "GestorPersonas.h"
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>

#define ANSI_COLOR_CYAN     "\x1b[94m"
#define ANSI_COLOR_RESET    "\x1b[0m"


Menus::Menus(int totalOpciones) : totalOpciones(totalOpciones) {
    opcionActual = 1;
}

void Menus::regresarMenu() {
    while (true) {
        if (_kbhit()) {
            char tecla = _getch();
            if (tecla == 27) {
                break;
            }
        }
    }
}

void Menus::mostrarMenu() {

    system("cls");
    std::cout << "\t\t\t=== MENU ===" << std::endl;
    for (int i = 1; i <= totalOpciones; i++) {
        if (i == opcionActual) {
            std::cout << "\t> " << ANSI_COLOR_CYAN;
        }
        else {
            std::cout << "  ";
        }
        switch (i) {
        case 1:
            std::cout << "Registrar Nuevo Empleado" << ANSI_COLOR_RESET << std::endl;
            break;
        case 2:
            std::cout << "Buscar Registro de Empleado" << ANSI_COLOR_RESET << std::endl;
            break;
        case 3:
            std::cout << "Eliminar Registro de Empleado" << ANSI_COLOR_RESET << std::endl;
            break;
        case 4:
            std::cout << "Ordenamiento shellsort" << ANSI_COLOR_RESET << std::endl;
            break;
        case 5:
            std::cout << "Cerrar Programa" << ANSI_COLOR_RESET << std::endl;
            break;
        }
    }
}

int Menus::operarMenu() {
	GestorPersonas gestorPersonas;
    while (true) {
        mostrarMenu();

        char tecla = _getch();

        switch (tecla) {
        case 72: // Flecha arriba
            opcionActual = (opcionActual > 1) ? opcionActual - 1 : totalOpciones;
            break;
        case 80: // Flecha abajo
            opcionActual = (opcionActual < totalOpciones) ? opcionActual + 1 : 1;
            break;
        case 13: // Tecla Enter
            system("cls");
            switch (opcionActual) {
            case 1:
            	{
                gestorPersonas.ingresarPersona();
                system("cls");
                Menus menus(5);
                menus.operarMenu();
                }
                break;
            case 2:
            	{
                  gestorPersonas.imprimirPersona();
                  system("pause");
                  system("cls");
                  Menus menus(5);
                  menus.operarMenu();
                }
                break;
            case 3:
            	{
                 gestorPersonas.eliminarPersona();
                 system("pause");
                system("cls");
                Menus menus(5);
                menus.operarMenu();
               }
                break;
                case 4:
            	{
                 gestorPersonas.ordenamientoShellSort();
                 system("pause");
    system("cls");
    Menus menus(5);
    menus.operarMenu();

               }
                break;
            case 5:
                std::cout << "Cerrar Programa...." << std::endl;
                return 0; 
            }
            regresarMenu();
            
            break;
        }
    }
    return opcionActual;
}

