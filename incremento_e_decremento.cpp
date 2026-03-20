#include <iostream>

int main()
{
    // Incremento é o ato de adicionar mais um valor a uma variável numérica.
    int variavel_numerica = 1;

    // Para incrementos, temos a opção mais segura:
    variavel_numerica = variavel_numerica + 1;

    // Este método permite incrementar qualquer valor

    std::cout << variavel_numerica << '\n';

    // Temos a versão simplificada, podendo ser pós-incremento e pré-incremento. Ambas só podem incrementar 1.

    // PRÉ-INCREMENTO
    
    // É o ato de incrementar uma variável antes de Utilizar-lo. Ela é declarada de modo:
    ++variavel_numerica;

    std::cout << variavel_numerica << '\n';

    // PÓS-INCREMENTO

    // É o ato de incrementar uma variável em seu estado atual. Exemplo:
    std::cout << variavel_numerica++ << '\n';

    //---------------------------------------------------------------------------------------------
    // O decremento é o ato inverso do incremento, retirando valor de uma variável numérica.
    
    // Para decremento, temos a opção mais segura:
    variavel_numerica = variavel_numerica - 1;

    // Este método permite decrementar qualquer valor

    std::cout << variavel_numerica << '\n';

    // Temos a versão simplificada, podendo ser pós-decremento e pré-decremento. Ambas só podem decrementam 1.

    // PRÉ-DECREMENTO
    
    // É o ato de decrementar uma variável antes de Utilizar-lo. Ela é declarada de modo:
    --variavel_numerica;

    std::cout << variavel_numerica << '\n';

    // PÓS-DECREMENTO

    // É o ato de decrementar uma variável em seu estado atual. Exemplo:
    std::cout << variavel_numerica-- << '\n';

    return 0;
}