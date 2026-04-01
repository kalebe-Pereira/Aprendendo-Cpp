#include <iostream>

int main()
{
    // Em C++ temos os seguintes tipos de variáveis:

    /*
    Int -> Inteiro.
    Char -> Caracteres.
    Float -> Tipo fracionado (Real).
    double -> Tipo fracionado com mais casas decimais.
    bool -> Boleano.
    String -> Cadeia de caracteres.
    */

    // Sendo declaradas desse modo:
    // <tipo> <nome_da_variavel>

    int numero;
    double valor_fracionado;
    char caracteres;
    bool boleano;
    float reais;
    std::string cadeiaDeCaracteres;
    
    // Pode-se criar uma variável e já inici-la com algum valor. Exemplo:
    // PS.: Após a criação de uma variáveis, não é necessário utilizar o tipo dele

    numero = 123;
    valor_fracionado = 3.1415;
    caracteres = 'A';
    boleano = true;
    reais = 2.4;
    cadeiaDeCaracteres = "Insira o texto aqui: ";
    
    std::cout << numero << '\n';
    std::cout << valor_fracionado << '\n';
    std::cout << caracteres << '\n';
    std::cout << boleano << '\n';
    std::cout << reais << '\n';
    std::cout << cadeiaDeCaracteres << '\n';
    
    return 0;
}