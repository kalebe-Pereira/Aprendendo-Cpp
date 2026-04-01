#include <iostream>

void somaNumero();
void somaNumero(int n1, int n2);

int main()
{
    // A sobrecarga de funções é o ato de possui 2 ou mais funções de mesmo nome. Esta função é possível dês de que as funções possuam argumentos de entrada distintos.

    // Exemplo:
    somaNumero();
    somaNumero(10, 20);

    return 0; 
}

void somaNumero() //Está função soma não possui argumentos de entrada.
{
    int n1 = 10; int  n2 = 20;
    int resultado = n1 + n2;

    std::cout << "A soma de " << n1 << " + " << n2 << " é igual a " << resultado << '\n';
}

void somaNumero(int n1, int n2) //Está função possui argumentos de entrada.
{
    int resultado = n1 + n2;

    std::cout << "A soma de " << n1 << " + " << n2 << " é igual a " << resultado << '\n';
}