#include "../include/combinatoria.hpp"
#include <vector>

unsigned long long CalcularCombinaciones(int n, int r)
{
    if (r == 0 || r == n) return 1;

    unsigned long long resultado = 1;
    for (int i = 1; i <= r; i++){
        resultado *= (n - r + i);
        resultado /= i;
    }

    return resultado;
}

std::vector<std::vector<int>> GenerarCombinaciones(int n, int r)
{
    std::vector<std::vector<int>> resultado;
    std::vector<int> s(r);

    for (int i = 0; i < r; i++){
        s[i] = i + 1;
    }

    if (r == 0){
        resultado.push_back({});
        std::cout << "{}" << std::endl;
        return resultado;
    }

    resultado.push_back(s);
    ImprimirArreglo(s);

    while(true){
        int m = r - 1;
        while (m >= 0 && s[m] == n - r + m + 1) m--;
        if (m < 0) break;

        s[m]++;
        for (int j = m + 1; j < r; j++){
            s[j] = s[j - 1] + 1;
        }

        resultado.push_back(s);
        ImprimirArreglo(s);
    }

    return resultado;
}
