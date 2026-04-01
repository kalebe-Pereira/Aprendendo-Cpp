#include <iostream>

void helloWord(); // Prototipagem
void soma(int n1, int n2); // Prototipagem
int somaInteiros(int n1, int n2); // Prototipagem

// Para que a função funcione, é necessário adicionar o início dela antes da função main, este método é chamado de prototipagem

int main()
{
    // As funções são comandos que parâmetros que permite a reutilização de código de forma simplificada. Ela também é utilizada para execução de um trecho de forma mais isolada, sem que seja alterada no código principal.

    // As funções são declaradas de forma:

    // <tipo_de_retorno> <nome_da_funcao>( <tipo_argumento_de_entrada> <argumentos_de_entrada> )

    //Para as funções, existe o tipo especial "void", que não retorna nada. Os argumentos são opcionais.

    helloWord();
    
    // Elas  podem ser chamadas quanto quiser:

    helloWord();
    helloWord();
    helloWord();
  
    // elas também podem ser usadas em outros lugares, como no for:

    for (int i = 0; i < 5; i ++)
    {
        helloWord();
    }

    // As funções também podem receber argumetnos de entrada. Exemplo:
    soma(16, 26);
    
    // as funções podem retornar valores, neste retorno será necessário de uma variável para receber o valor
    int resultado;

    resultado = somaInteiros(10, 20);

    std::cout << "Resultado função somaInteiros: " << resultado << '\n';
    
    return 0;
}

void helloWord()
{
    std::cout << "Hello, Word!" << '\n';
}

void soma(int n1, int n2)
{
    int resultado = n1 + n2;

    std::cout << "A soma entre " << n1 << " e " << n2 << "é igual a " << resultado << '\n';
}

int somaInteiros(int n1, int n2)
{
    return n1 + n2;
}