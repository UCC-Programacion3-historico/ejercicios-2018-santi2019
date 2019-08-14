#include <iostream>
#include "potencia.h"

int potencia(int base,int exp){
    if(exp==0)
        return 1;
    else
    return base * potencia(base, exp - 1);
}

int main() {
    int base,exp;

    cout<<"ingrese base: ";
    cin>>base;
    cout<<endl;
    cout<<"ingrese base: ";
    cin>>base;


    std::cout << "Ejercicio 01/01\n" << std::endl;
    return 0;
}