/*Se agrego un metodo a la clase lista, ingresando un dato como paramatro se recorre la lista hasta encontrarlo y lo
 * lo lleva al final.*/

#include "Lista.h"

int main(){
    Lista<int > lis;
    lis.insertar(0,3);
    lis.insertar(1,2);
    lis.insertar(2,4);
    lis.insertar(3,6);
    lis.insertar(4,7);

    lis.print();

    lis.alFinal(2);

    lis.print();
}

