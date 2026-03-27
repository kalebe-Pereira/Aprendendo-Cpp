#include "iostream"

int main()
{
    // as matrizes são um conjunto de vetores, que possuiem 2 dimensões, sendo linhas e colunas. Elas são declaradas de forma similar ao vetor, mas adicionando outro parênteses com o tamanho. Por exemplo, uma matriz de inteiro com 5 linhas e 10 colunas.

    // Exemplo:
    int matriz[5][10]; //A declaração de quantidade sempre serar por [linha] [coluna].

    // para declarar algum valor na matriz, pode ser através do valor pré-definido:
    matriz[0][0] = 1;

    std::cout << matriz[0][0] << '\n';

    // Ou de forma mais simples, utiliza-se o for. Mas, ao contrário dos vetores, a matriz é necessário utilizar outro for aninhado para acessar os valores de forma mais precisa.

    for(int i = 0; i < 5; i++)
    {   
        for(int j = 0; j < 10; j++)
        {
            matriz[i][j] = 1;
        }
    }

    // para mostrar a matriz, será necessário utilizar o for também.

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            std::cout << matriz[i][j] << ' ';
        }
        std::cout << '\n';
    }
}