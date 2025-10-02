# README: Introducción a C++

## ¿Qué es C++?
C++ es un lenguaje de programación de propósito general, ampliamente utilizado en el desarrollo de software, sistemas operativos, videojuegos y aplicaciones de alto rendimiento. Se caracteriza por ser un lenguaje compilado, tipado estáticamente y soportar múltiples paradigmas de programación, como la programación orientada a objetos, la programación estructurada y la programación genérica. C++ permite a los desarrolladores tener un control detallado sobre los recursos del sistema, lo que lo hace ideal para aplicaciones donde la eficiencia y el rendimiento son críticos.

Además, C++ es conocido por su flexibilidad y potencia, permitiendo la creación de programas complejos y robustos. Su sintaxis y estructura están diseñadas para facilitar la reutilización de código y la creación de bibliotecas, lo que lo convierte en una herramienta fundamental para ingenieros y programadores que buscan desarrollar soluciones escalables y eficientes.

## Historia de C++
C++ fue creado por Bjarne Stroustrup en 1979 en los laboratorios Bell, como una extensión del lenguaje C. Su objetivo era añadir características de programación orientada a objetos a C, manteniendo la eficiencia y el acceso directo a hardware. Desde entonces, C++ ha evolucionado constantemente, incorporando nuevas funcionalidades y estándares, como C++11, C++14, C++17 y C++20, que han mejorado su capacidad y facilidad de uso.

## Diferencias entre C y C++
Aunque C y C++ comparten muchas similitudes en su sintaxis y estructura, existen diferencias fundamentales entre ambos. C es un lenguaje procedural, enfocado en la programación estructurada y el manejo directo de memoria. Por otro lado, C++ introduce la programación orientada a objetos, permitiendo la creación de clases, objetos, herencia y polimorfismo, lo que facilita la organización y reutilización del código.

Otra diferencia importante es que C++ ofrece características avanzadas como plantillas (templates), manejo de excepciones y sobrecarga de operadores, que no están presentes en C. Estas funcionalidades permiten a los desarrolladores escribir código más seguro, flexible y reutilizable, adaptándose mejor a proyectos grandes y complejos.

## Ejemplos para estudiantes de tercer semestre de ingeniería

### 1. Hola Mundo
```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hola Mundo" << endl;
    return 0;
}
```

### 2. Suma de dos números
```cpp
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    cout << "La suma es: " << a + b << endl;
    return 0;
}
```

### 3. Uso de clases
```cpp
#include <iostream>
using namespace std;
class Persona {
public:
    string nombre;
    int edad;
    void mostrar() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};
int main() {
    Persona p;
    p.nombre = "Ana";
    p.edad = 20;
    p.mostrar();
    return 0;
}
```

### 4. Arreglos y bucles
```cpp
#include <iostream>
using namespace std;
int main() {
    int notas[5];
    cout << "Ingrese 5 notas: ";
    for(int i = 0; i < 5; i++) {
        cin >> notas[i];
    }
    cout << "Notas ingresadas: ";
    for(int i = 0; i < 5; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
    return 0;
}
```

---

## Instrucciones para compilar y ejecutar los ejercicios

Para compilar y ejecutar cada ejercicio en Linux, abre una terminal y navega a la carpeta del ejercicio. Por ejemplo:

```bash
cd ejercicios/strings
g++ ejercicio1.cpp -o ejercicio1
./ejercicio1
```

Repite el proceso para cada archivo cambiando el nombre y la carpeta según corresponda.

### Para crear un archivo .exe (Windows)

Si deseas crear un ejecutable para Windows (.exe), puedes usar MinGW en Windows o agregar la extensión al compilar:

```bash
g++ ejercicio1.cpp -o ejercicio1.exe
```

Luego ejecuta el archivo en Windows:

```bash
ejercicio1.exe
```

En Linux, el ejecutable se llama `ejercicio1` y se ejecuta con `./ejercicio1`.
