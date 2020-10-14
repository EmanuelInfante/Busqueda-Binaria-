//Programa de Busqueda Binaria capaz de indicar al usuario cuando los arreglos estan desordenados y ordenados, ademas de indicalse si los valores buscados se encuentran en el arreglo y en dicha posicion o si no se encuentran en el arreglo 
#include <iostream>
#include "Numeros.h"

using namespace std;

int main()
{

    Numeros *num = new Numeros();

    cout << "Arreglo desordenado";
    num ->imprimirArreglo();

    num ->algoritmoBurbuja();

    cout << "Arreglo ordenado";
    num ->imprimirArreglo();

    int resultadoBusquedaBinaria = num ->busquedaBinaria(4.7f);

    if(resultadoBusquedaBinaria != -1)
        cout << "El valor buscado si está en el arreglo en la posición " << resultadoBusquedaBinaria << endl;
    else
        cout << "El valor buscado no está en el arreglo" << endl;

    return 0;
}
