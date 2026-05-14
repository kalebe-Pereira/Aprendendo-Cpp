#include <iostream>

// Neste arquivo, será demonstrado como utilizar classes e funções de um arquivo externo. Para fazer isso, será necessário um arquivo de cabeçalho, ele possui a extensão de .h.

// *Olhar o arquivo CARRO.h*

// Para adicionar o arquivo, será necessário utilizar o include e o nome do arquivo entre aspas duplas. 
#include "Carro.h"

// Após a inclusão, pode-se utilizar a classe do arquivo Carro em qualquer arquivo C++ que esteja junto no diretório.

int main()
{
    Carro *corsa = new Carro();

    corsa->Self(1);

    corsa->Imprimir();

    return 0;
}