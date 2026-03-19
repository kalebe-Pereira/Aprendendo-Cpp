#include "iostream"

int variavel_global = 1;

int main()
{
    // As variáveis possuiem 2 tipos de escopo, sendo globais e locais.

    // ----------- LOCAIS -----------

    // As de escopo local, só podem ser acessada somente em um determinada função ou em um loop. Como por exemplo, as variáveis da função main. 

    bool variavel_local = true;

    std::cout << variavel_local;
    std::cout << variavel_global;

    return 0;
}

// Ao tentar acessar a variável_local fora da main, ela retorna erro por não existir-lá.

// Mas, se tentar-mos acessar a variavel_global, ela funcionará nos dois parâmetros.