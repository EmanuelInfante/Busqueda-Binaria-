#include <iostream>
#include "Numeros.h"


using namespace std;


Numeros::Numeros()
{
    //Constructor pordefecto, se inicializa el arreglo con valore spor defecto de las muestras
    this ->arregloNumeros = new float[12];
    float lista[] = {2.8, 3.2, 2.85, 3.25, 3.20, 3.9, 4.55, 4.53, 4.7, 5.25, 6.8, 7.1};

    this ->cantidadNumeros = int(sizeof(lista)/sizeof(lista[0]));

    for(int i = 0; i < this ->cantidadNumeros; i++)
        this ->arregloNumeros[i] = lista[i];

}


void Numeros::algoritmoBurbuja()
{
    /* Método que ordena con el algoritmo burbuja el arreglo this ->arregloNumeros*/

    //Variable booleana que indica si se modifico el arreglo en una vuelta
    bool seModificoArreglo = false;

    do
    {
        seModificoArreglo = false;
        for(int i = 0; i < this ->cantidadNumeros - 1; i++)
        {
            if(this ->arregloNumeros[i] > this ->arregloNumeros[i+1])
            {
                float aux = this ->arregloNumeros[i];
                this ->arregloNumeros[i] = this ->arregloNumeros[i+1];
                this ->arregloNumeros[i+1] = aux;

                seModificoArreglo = true;
            }
        }
    }while(seModificoArreglo);

}


void Numeros::imprimirArreglo()
{
     /*método que imprime por pantalla el arreglo this ->arregloNumeros*/

    cout << endl;
    for(int i = 0; i < this ->cantidadNumeros; i++)
        cout << this ->arregloNumeros[i] << " | ";

    cout << endl << endl;

}


int Numeros::busquedaBinaria(float numeroBuscado)
{
    /*Se aplica la busqueda binaria. Se retorna la posición del número si se encuentra el elemento, -1 si no se encuentra */

    //Se inicializa los valores minimos y máximos de la busqueda
    int maximo = this ->cantidadNumeros - 1, minimo = 0;

    while(true)
    {
        int auxPosicion = (maximo + minimo) / 2;

        //Se modifica la posición del rango donde puede estar el número
        if(numeroBuscado < this ->arregloNumeros[auxPosicion])
            maximo = auxPosicion - 1;
        else if(numeroBuscado > this ->arregloNumeros[auxPosicion])
            minimo = auxPosicion + 1;
        else if(arregloNumeros[minimo] > numeroBuscado || arregloNumeros[maximo] < numeroBuscado)
            return -1;
        else
            return auxPosicion;
    }

}


Numeros::~Numeros()
{
    //dtor
}
