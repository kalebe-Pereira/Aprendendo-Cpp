#include <iostream>

int main()
{
    // Neste arquivo, será explorada a utilizadção de ponteiros para os elementos de um array.

    int *ponteiro;
    int array[10];
    
    ponteiro = array; // Ao fazer o ponteiro receber o vetor, ele associa o endereço de memória do primeiro elemento do vetor.

    // Pode-se fazer a atribuição do mesmo modo do arquivo ponterio 1:
    ponteiro = &array[0]; // Eles fazem a mesma coisa.

    std::cout << ponteiro << '\n';

    // Para arrays, o endereço de memória são sequenciais.

    ponteiro = &array[1];
    std::cout << ponteiro << '\n';
    // Essa difereça de 4 bytes é porque o tipo inteiro possui 4 bytes cada.

    // No ponteiro, tem como encrementar uma posição de forma mais fácil, sendo:
    *(++ponteiro); // Ou *(ponteiro+=1);
    std::cout << ponteiro << '\n'; // Posição do array[2].

    // -----------------------------------------------------------------------------------

    // Para incluir valores no ponteiro de uma array, basta fazer da seguinte forma:

    ponteiro = array; // Puxando a posição 0 do array;
    *ponteiro = 10; // Incluíndo 10 ao array na posição 0.

    std::cout << array[0] << '\n';
    
    // Desse modo, adicionado o valor 20 na posição 1:

    ponteiro = &array[1];

    *ponteiro = 20;
    std::cout << array[1] << '\n';
    
    return 0;
}