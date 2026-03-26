#include "iostream"

int main()
{
    // O While é uma estrutura de repetição, mas ao contrário do for, o While executa até que uma condição seja verdadeira. Como por exemplo, "Trabalhe enquanto não for 16h". Muito cuidado ao utilizar está estrutura, ela pode gerar loops infinitos.

    // Exemplo de uso:
    int numero = 0;

    while (numero < 10) 
    {
        std::cout << "Mensagem aqui." << '\n';
        numero++; // É necessário incrementar a variável manualmente para não da erro.
    }

    return 0;
}