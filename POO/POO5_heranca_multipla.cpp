#include <iostream>
#include "POO5.h"
// Herança múltipla é quando uma classe herda métodos e propriedades de outra classe.

int main()
{
    Base1 *a = new Base1();
    Base2 *b = new Base2();
    Primaria *c = new Primaria();

    
    a ->showBase1(); // Mostrando Base 1.
    b -> showBase2(); // Mostrando Base 2.

    std::cout << '\n';
    
    c -> showBase1(); c -> showBase2(); // Repare que em C, ela pode exibir ambas as bases, por que ela possui herança de ambas.

    return 0;
}