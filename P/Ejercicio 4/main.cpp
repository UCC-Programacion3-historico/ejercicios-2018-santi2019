/*Mediante un metodo recursivo, se pretende encontrar un elemento dentro del arreglo*/

#include <iostream>

bool busqueda(int x, int v[], int tam) {
    tam = tam - 1;
    if (v[tam] == x)
        return true;
    if (tam == 0)
        return false;
    else
        busqueda(x, v, tam);
}

int main() {
    int v[7] = {1, 2, 3, 4, 5, 6, 7};
    if(busqueda(7,v,7))
        std::cout<<"El numero "<<7<<" esta en el arreglo."<<std::endl;
    else
        std::cout<<"El numero "<<7<<" no esta en el arreglo."<<std::endl;
}