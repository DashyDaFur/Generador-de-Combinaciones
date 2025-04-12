#include <iostream>
#include <limits>

template <typename T>
void CapturarNumero(T &n, const char seleccion[])
{
    std::cout << seleccion;
    std::cin >> n;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "ERROR: Se espera un numero" << std::endl;
        std::cout << seleccion;
        std::cin >> n;
    }
}
