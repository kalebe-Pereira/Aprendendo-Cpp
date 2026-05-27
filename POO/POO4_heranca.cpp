#include <iostream>
#include "POO4.h"

int main()
{
    // A herança é a possibilidade de uma classe efetuar os métodos de outra classe.

    // Verificar o arquivo POO4.h para mais detalhes.

    Moto *v1 = new Moto();

    v1 -> ShowInfo();

    Carro *v2 = new Carro();

    v2 -> ShowInfo(); 

    Tank *v3 = new Tank();

    v3 -> ShowInfo();

    return 0;
}