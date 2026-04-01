#include <iostream>

int contator(int numero, int indice = 0);

int main()
{
    // Função recursiva é uma função que se chama N vezes, sendo necessário um controle para interromper a chamada. Elas são utilizadas para resolver problemas complexos em mini problemas que se repetem.

    // Por exemplo: Criar uma função contadora que mostra até o numero digitado.

    contator(10);

    // A Funcão funciona da seguinte maineira:

        // contador(10, 0)
        // contador(10, 1)
        // contador(10, 2)
        // contador(10, 3)
        // contador(10, 4)
        // contador(10, 5)
        // contador(10, 6)
        // contador(10, 7)
        // contador(10, 8)
        // contador(10, 9)
        // contador(10, 10)

        // Depois dessa chamada, ela finaliza todas as outras de uma vez só
        
    return 0;
}

int contator(int numero, int indice)
{
    std::cout << indice << '\n';

    if(numero > indice)
    {
        return contator(numero, ++indice);
    }

    return indice; // Retorno caso erro.
}