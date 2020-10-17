//Programa de Busqueda Binaria capaz de indicar al usuario cuando los arreglos estan desordenados y ordenados, ademas de indicalse si los valores buscados se encuentran en el arreglo y en dicha posicion o si no se encuentran en el arreglo 
#include <iostream>
#include "Numeros.h"

using namespace std;

int main()
{

    Numeros *num = new Numeros();

    //Mostramos el arreglo antes de ordenar, y luego ordenado. Buscando el número 4.7f
    cout << "Arreglo desordenado";
    num ->imprimirArreglo();

    num ->algoritmoBurbuja();

    //Aplicamos algoritmo burbuja
    cout << "Arreglo ordenado";
    num ->imprimirArreglo();

    // Buscamos el número
    int resultadoBusquedaBinaria = num ->busquedaBinaria(4.7f);

    // Si el valor existe lo imprimios, si no, le indicanso al usuario que no se encuentra
    if(resultadoBusquedaBinaria != -1)
        cout << "El valor buscado si está en el arreglo en la posición " << resultadoBusquedaBinaria << endl;
    else
        cout << "El valor buscado no está en el arreglo" << endl;

    //Borramos memoria
    delete num;

    return 0;
}
