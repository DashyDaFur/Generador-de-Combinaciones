# 🦊 Generador de combinaciones

[![Licencia MIT](https://img.shields.io/badge/Licencia-MIT-blue.svg)](LICENSE) ![C++](https://img.shields.io/badge/C++-20-%2300599C?logo=c%2B%2B)

Este proyecto en C++ genera todas las r-combinaciones posibles de un conjunto de n elementos en orden lexicográfico. El resultado se guarda en un archivo `.csv`.

### Explicación del algoritmo

El algoritmo genera las r-combinaciones de manera iterativa. Comienza con la combinación más baja posible (por ejemplo, `[1, 2, ..., r]`) y, en cada paso, calcula la siguiente combinación en orden lexicográfico. Para lograrlo, se busca el primer índice desde la derecha que se pueda incrementar sin violar la condición `c[i] < n - r + i + 1`, y luego se ajustan los elementos siguientes. Este proceso continúa hasta alcanzar la combinación final.

### Orden lexicográfico

El orden lexicográfico es una forma de ordenar combinaciones como si fueran palabras en un diccionario. Por ejemplo, para `n = 4` y `r = 2`, las combinaciones generadas serían:

```
1 2
1 3
1 4
2 3
2 4
3 4
```

El algoritmo implementado garantiza este orden durante la generación, sin necesidad de ordenar posteriormente.

### Validación de entrada

El programa verifica que los valores ingresados por el usuario cumplan las siguientes condiciones:

- `n >= 1`
- `r >= 0`
- `r <= n`

Si no se cumplen, se muestra un mensaje de error y se vuelve a solicitar la entrada.

### Formato de salida

El programa genera un archivo llamado `combinaciones.csv` que contiene todas las combinaciones generadas. Cada combinación aparece en una línea separada, con sus elementos separados por comas. Ejemplo de salida:

```
1,2
1,3
1,4
2,3
...
```

Este archivo puede abrirse directamente con Excel o cualquier otro editor de hojas de cálculo.

### Verificación de C(n, r)

El programa también calcula el valor de `C(n, r)`, que representa la cantidad total de combinaciones posibles. Este valor se compara con la cantidad real de combinaciones generadas para validar que el algoritmo funciona correctamente. La fórmula utilizada es:

```
C(n, r) = n! / (r! * (n - r)!)
```


## 👨‍💻 Autor

Nombre del estudiante: Daniel Leinad Dominguez Calvario.


## 📋 Requisitos

- **C++20**
- **g++ Compiler 10.2 o superior**
- **CMake** (opcional)

## 🔽 Compilación y Ejecución

### Compilación Manual
1. Clona el repositorio:
   ```bash
   git clone https://github.com/DashyDaFur/Generador-de-Combinaciones.git
   cd Generador-de-Combinaciones
   ```
2. Compila el código:
   ```bash
   g++ -o combinaciones src/main.cpp src/aux.cpp src/combinatoria.cpp -std=c++20
   ```
3. Ejecuta el programa:
   ```bash
   ./combinaciones
   ```

### Uso de CMake
1. Clona el repositorio:
   ```bash
   git clone https://github.com/DashyDaFur/Generador-de-Combinaciones.git
   cd Generador-de-Combinaciones
   ```

2. Crea un directorio de compilación y compila el proyecto:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```
3. Ejecuta el programa:
   ```bash
   ./combinaciones
   ```
	

## 🌳 Estructura del Proyecto  
- **Carpeta `src`**: Contiene los archivos de codigo fuente.  
- **Carpeta `include`**: Contiene los archivos de cabezera.  
- **`README.md`**: Contiene una descripción general del proyecto.
- **`LICENSE`**: Contiene la licencia MIT.
- **`CMakeLists.txt`**: Contiene la configuracion en caso del uso de CMake
- **`.gitignore`**: Excluye archivos generados.

## 📜 Licencia  
Este proyecto está bajo la licencia [MIT](LICENSE).
