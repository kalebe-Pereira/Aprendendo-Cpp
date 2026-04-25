#include <iostream>

void soma(float valor, float valorSoma);
void soma2(float *variavel, float valorSoma);
void pontVetor(float *ponterVetor);

// Neste arquivo, veremos como utilizar os ponteiros com funções, utilizado para alterar valores da variáveis.
int main()
{
    float num = 0;

    soma(num, 6);

    std::cout << num << '\n';
    // Perceba que o retorno da variável num é 0, isso se da porque o escopo da função é diferente do escopo da variável.

    // Para resolver isso, utiliza-se um ponteiro na criação dos parâmetros de uma função
    soma2(&num, 10);
    // Desta vez funcionou devido ao se passar o endereço da variável num, podendo-a armazenar o valor da função nela.


    // Isso também funciona em vetores:
    float vetor[6];

    pontVetor(vetor);

    for(int i = 0; i < 6; i++)
    {
        std::cout << vetor[i] << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}

void soma(float variavel, float valorSoma) // Variável -> Armazena o valor digitado, valorSoma -> O valor para ser armazenado
{
    variavel+= valorSoma;
}

void soma2(float *variavel, float valorSoma)
{
    *variavel += valorSoma;
}

void pontVetor(float *ponterVetor)
{
    for(int i = 0; i < 6; i++)
    {
        ponterVetor[i] = 1;
    }
}