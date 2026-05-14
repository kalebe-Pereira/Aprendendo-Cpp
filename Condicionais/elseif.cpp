#include <iostream>

int main()
{
    // O elif, ao contrário da estrutura do if, ela só é executada se o if for falso. Exemplo:

    int variável = 10;

    if (variável > 10) // Verifica se a variável é maior que 10.
    {
        std::cout << "A variável não é maior que 10." << '\n';
    }
    else if (variável == 10) // Se o valor não é maior que 10, ele verifica essa condição.
    {
        std::cout << "A variável é 10" << '\n';
    }
    else // Se o valor não é maior ou igual a 10, ele verifica essa condição.
    {
        std::cout << "A variável é menor que 10." << '\n';
    }

    // O ELSE IF só entre em condição caso o if for falso e a condicional do else if for verdadeira. 
    
    return 0;
}