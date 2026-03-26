#include "iostream"

int main()
{
    // O array ou vetor, é uma variável que aceita mais de uma quantidade de valores. Ela é declarada da seguinte forma.

    // <tipo> <nome_da_variavel>[<quantidade_de_valores>];

    // Exemplo:
    int vetorInteiro[5];

    // Para declarar valores após a declaração, deve-se declarar em um índice do vetor (no exemplo, o vetor tem o tamanho de 5, sendo de 0 a 4).

    // Recebe-se um valor assim:
    vetorInteiro[0] = 1; //Indice 0 recebe 1
    vetorInteiro[1] = 2; //Indice 1 recebe 2
    vetorInteiro[2] = 3; //Indice 2 recebe 3
    vetorInteiro[3] = 4; //Indice 3 recebe 4
    vetorInteiro[4] = 5; //Indice 4 recebe 5

    // Para acessar os valores, utiliza-se o loop for.
    for (int i = 0; i < 5; i++)
    {
        std::cout << vetorInteiro[i];
    }

    std::cout << '\n';


    // Tem como declarar os valores de uma array no momento em que o declara.

    int vetor[5] = {4, 3, 2 , 1, 0};

    for(int i = 0; i < 5; i++)
    {
        std::cout << vetor[i];
    }

    std::cout << '\n';

    // Para imprimir um vetor no for independente do tamanho, utiliza-se o sizeof. Como no modelo abaixo:

    for(int i = 0; i < (sizeof(vetor) / vetor[0]); i++) // sizeof do tamanho do vetor dividido pelo sizeof do primeiro valor.
    {
        std::cout << "Oi" << '\n';
    }

    
    // Da para guarda valores que o usuário digitou.

    for(int i = 0; i < 5; i++)
    {
        std::cout << "\nDigite o " << i + 1 << " numero: ";
        std::cin >> vetor[i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        std::cout << vetor[i];
    }
    std::cout << '\n';

    
    return 0;
}