/*Funcion que suma todos los elementos de una lista enlazadas mayores a un numero ingresado.*/

#include <iostream>
#include "../Ejercicio_2/Lista.h"


template<class T>
T sumar(T dato, Lista<T> *lis);

template<class T>
T sumar(T dato, Lista<T> *lis) {
    T suma = 0;
    int tam = lis->getTamanio();
    for (int i = 0; i < tam; i++) {
        if (lis->getDato(i) > dato)
            suma = suma + lis->getDato(i);
    }
    return suma;
}

int main() {
    Lista<float> lis;

    lis.insertar(0, 3.12);
    lis.insertar(1, 3.13);
    lis.insertar(2, 3.09);
    lis.insertar(3, 3.15);
    lis.insertar(4, 3.01);

    lis.print();

    auto z = sumar<float>(3.05, &lis);
    std::cout << "La suma es: " << z << std::endl;
}
