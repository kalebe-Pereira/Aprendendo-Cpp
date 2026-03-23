#include <iostream>

int main()
{
    // Os operadores lógicos servem para comparações dentro das condições dos métodos (dentro dos parênteses). Eles são categorizados por AND, OR, NOT.

    // AND -> O operador and (o operador "e" em português), é uma condicional que retorna verdadeiro somente se as duas condições forem verdadeiras. Pode-se declarar-lo como &&.
        // Exemplo: if(Acordar && levantar da cama) -> Vou para o trabalho.

    // OR -> O operador or(o operador "ou" em português), é uma condicional que retorna verdadeira se uma das condições forem verdadeiras. Pode-se declarar-lo como ||.
        // Exemplo: if(ir de ônibus || ir de carro) -> chego no trabalho.

    // NOT -> O operador not, ao contrário dos outros, ele retorna o valor oposto do resultado. Se o valor for verdadeiro, ele retorna falso. Pode-se declarar-lo como !.
        // Exemplo: if(!sair de casa) -> Vou para algum lugar.

    // EXEMPLOS PRÁTICOS

    int numero = 10;

    if(numero == 10 || numero < 0)
    {
        std::cout << "O numero ou é 10, ou é negativo" << '\n';
    }
    if (numero > 0 && numero != 6) 
    {
        std::cout << "O número é maior que 0 e diferente de 6" << '\n';
    }
    if (!(numero == 8)) 
    {
        std::cout << "Número NÃO é igual a 8" << '\n';
    }

    // Perceba que todas as condições retornaram verdadeira.
    
    return 0;
}