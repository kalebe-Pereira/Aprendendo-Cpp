#include "iostream"

int main()
{
    // If e else são expressões condicionais, elas retornam alguma ação de acordo com uma determidada condição. Como por exemplo, verificar se uma variável é maior que 10. 

    int variável = 11;

    // para chamar-mos a expressão, utiliza-se o IF (<condição>)
    // Seguido por parênteses, dentro dos parenteses se coloca o algoritmo desejadose for verdadeiro.

    if (variável > 11) 
    {
        std::cout << "É maior que 10." << '\n';
    }
    
    // Nas condicionais, também possui um método caso o valor seja falso. Determinado por ELSE. É utilizado da seguinte maneiro 

    if(variável > 10)
    {
        
        std::cout << "É maior que 10." << '\n';
    }
    else 
    {
        std::cout << "Não é maior que 10";
    }
    
    return 0;
}