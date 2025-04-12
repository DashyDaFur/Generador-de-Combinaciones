#include <iostream>
#include <vector>
#include <string>
#include "combinatoria.hpp"
#include "aux.hpp"
#include "CapturaSegura.hpp"

using namespace std;

int main()
{
    int n, r;

    cout << "Este programa genera combinaciones de n en r" << endl;

    do {
        CapturarNumero(n, "Valor de n: ");
        if (n < 1 || n > 100) cout << "ERROR: Se espera un valor en el rango de [1,100]" << endl;
    } while (n < 1 || n > 100);

        do {
            CapturarNumero(r, "Valor de r: ");
            if (r < 0 || r > n) cout << "ERROR: Se espera un valor en el rango de [0," << n << ']' << endl;
        } while (r < 0 || r > n);

            unsigned long long teorico = CalcularCombinaciones(n, r);
            cout << "Numero teorico de combinaciones: C(" << n << ',' << r << ") = " << teorico << endl;

            // Genera combinaciones y las guarda en un vector
            vector<vector<int>> combinaciones = GenerarCombinaciones(n, r);

            // Exporta combinaciones a CSV
            ExportarCSV(combinaciones, "combinaciones_n" + to_string(n) + "_r" + to_string(r) + ".csv");

            cout << endl << "Total de combinaciones generadas: " << combinaciones.size() << endl;
            cout << "Numero teorico de combinaciones: " << teorico << endl;
            cout << "Coincide con el calculo teorico: " << (combinaciones.size() == teorico ? "SI" : "NO") << endl;
            cout << "Combinaciones guardadas en: " << "combinaciones_n" << n << "_r" << r << ".csv" << endl;

            Pause();
            return 0;
}
