#include <iostream>
#include "../Ejercicio_2/Lista.h"
#include "../Ejercicio_2/nodo.h"

int main() {
    Lista<int> lis;
    Nodo<int> n;
    lis.insertarPrimero(8);
    lis.insertarPrimero(7);
    lis.insertarPrimero(6);

    std::cout << "El tamanio es: " << lis.tamanio(&n) << std::endl;
}

