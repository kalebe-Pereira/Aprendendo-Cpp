#include "iostream"

void helloWord(); // Prototipagem

// Para que a função funcione, é necessário adicionar o início dela antes da função main, este método é chamado de prototipagem

int main()
{
    // As funções são comandos que parâmetros que permite a reutilização de código de forma simplificada. Ela também é utilizada para execução de um trecho de forma mais isolada, sem que seja alterada no código principal.

    // As funções são declaradas de forma:

    // <tipo_de_retorno> <nome_da_funcao>( <tipo_argumento_de_entrada> <argumentos_de_entrada> )

    //Para as funções, existe o tipo especial "void", que não retorna nada. Os argumentos são opcionais.

    helloWord();
    
    return 0;
}

void helloWord()
{
    std::cout << "Hello, Word!" << '\n';
}