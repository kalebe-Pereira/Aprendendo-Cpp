#include "iostream"
#include <ostream>

void texto(std::string txt = "Player");
// A omissão de valor é feita na prototipagem da função, caso a função seja feita antes da função main, faz a omissão no parâmetro de entrada.

int main()
{
    // Omissão de argumentos é o ato de poder ou não passar algum argumento de entrada de uma função, tornado o argumento extra opcional. Podendo criar uma função que possui 3 argumentos e 1 deles é opcional.

    texto();
    texto("Kalebe");

    // Observe que a função exibe uma resposta, mesmo sem passar nenhum argumento.
    
    return 0;
}

void texto(std::string txt)
{
    std::cout << "Bem vindo, " << txt << std::endl;
}