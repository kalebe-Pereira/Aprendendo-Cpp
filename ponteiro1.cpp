#include <iostream>

int main()
{
    // O ponteiro, ao contrário de outras variáveis, ela armazena o endereço de outra variável, podendo alterar a variável independente do escopo dela. O ponteiro deve possuir o mesmo tipo da variável que ela aponta.

    // Os ponteiros são declarados com um asterisco antes do nome da variável:

        int variavel = 6; // Variavel comum.
        int *poteiro; // Ponteiro.

    // Para que o ponteiro receba o endereço de uma variavel, ela é feita da seguinte forma:
        poteiro = &variavel; // Precisa ser o &(E comercial).

    // Ao tentar-se imprimir o valor de ponteiro, não sai o valor amazenado, mas sim seu endereço referente a variavel.
    std::cout << poteiro << '\n';

    // Para imprimir o valor, precisa utilizar o asterisco antes do ponteiro na impressão.
    std::cout << *poteiro << '\n';
    
    // Da para alterar o valor da variavel principal através do ponteiro:

    *poteiro = 179; // A variável que o ponteiro está apontando recebe 179

    std::cout << variavel << '\n';
    
    //Da para imprimir através do ponteiro também:

    std::cout << *poteiro << '\n';
    
    return 0;
}