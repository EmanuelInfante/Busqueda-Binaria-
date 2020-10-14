#ifndef NUMEROS_H
#define NUMEROS_H


class Numeros
{
    public:
        Numeros();
        Numeros(float *arregloNumeros);

        //Métodos
        void algoritmoBurbuja();
        void imprimirArreglo();
        int busquedaBinaria(float numeroBuscado);
        virtual ~Numeros();

    protected:

    private:
        int cantidadNumeros;
        float *arregloNumeros;
};

#endif // NUMEROS_H
