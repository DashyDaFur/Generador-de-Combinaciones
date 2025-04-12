#include "../include/aux.hpp"
#include <iostream>
#include <fstream>

void ImprimirArreglo(const std::vector<int> &A)
{
    for (size_t i = 0; i < A.size(); i++){
        std::cout << A[i];
        if (i < A.size() - 1) std::cout << ",";
    }
    std::cout << std::endl;
}

void Pause()
{
    std::cout << "Presiona Enter para finalizar el programa...";
    std::cin.ignore();
    std::cin.get();
}

void ExportarCSV(const std::vector<std::vector<int>> &combinaciones, const std::string &nombre)
{
    std::ofstream archivo(nombre);
    if (!archivo.is_open()){
        std::cerr << "Error al abrir/crear el archivo: " << nombre << std::endl;
        return;
    }

    for (int i = 0; i < combinaciones.size(); i++){
        for (int j = 0; j < combinaciones[i].size(); j++){
            archivo << combinaciones[i][j] << (j < combinaciones[i].size() - 1 ? "," : "");
        }
        archivo << std::endl;
    }
    archivo.close();
}
