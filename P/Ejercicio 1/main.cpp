/*Usando dos Pilas, el programa invierte el orden de las palabras ingresadas.(NO FUNCIONA)*/
#include <iostream>
#include "Pila.h"

int main() {
    Pila<char> p1, p2;
    char arr[100];
    std::cout << "Ingrese frase: ";
    std::cin.getline(arr, 50);
    for (int i = 0; arr[i] != '\0'; ++i) {
        p1.push(arr[i]);
    }
    while (!p1.esVacia()){
        while(!p1.esVacia() && p1.peek()!=' ' ){   //Paso a la segunda pila una palabra.
            p2.push(p1.pop());
        }
        while (!p2.esVacia()){
            std::cout<<p2.pop();
        }
        if(!p1.esVacia())
            std::cout<<p1.pop();                        //Saco el espacio de la primer pila.
    }
}

