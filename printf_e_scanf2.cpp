#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

int main()
{
    // Na continuação do printf e scanf.

    // no printf, pode-se imprimir valor com casas decimais formatadas. Como por exemplo, o valor de pi.

    float pi = M_PI;

    printf("%f\n", pi); //Neste caso, é o valor completo.

    // agora para formatar as casas decimais, faz da seguinte maneira:
    printf("%.2f\n", pi);

    // --------------------------------------------------------------------------

    // Outra forma de modiciação é adicionar zeros na frente de um número, como por exemplo ao digitar 1, apareça 001.
    std::cout << '\n';

    int num = 1;

    printf("%03d\n", num); // % ( 0 + número total de casas + tipo da variável).

    // ---------------------------------------------------------------------------------------------------------------

    // Para o cout, tem algumas conversões também:

    int numero = 10;

    std::cout << std::endl;

    std::cout << std::hex << numero << '\n'; // Converte para a base hexadecimal
    std::cout << std::oct << numero << '\n'; // Converte para a base octal
    std::cout << std::dec << numero << '\n'; // Converte para a base decimal

    // ---------------------------------------------------------------------------------------------------------------

    // Para o cout, também tem como alterar a quantidade de casas decimais:

    std::cout.precision(3); // Define a precisa, precisa de outro cout para imprimir. 
    std::cout << "O valor de PI é: " << pi << '\n';

    // Para voltar o cout sem precisão, faz da seguinte maneira:
    std::cout.precision(-1);

    // e para imprimir algum valor em notação científica, pode-se fazer da seguinte maneira:
    std::cout << "Notação cintífica de pi: " << std::scientific << pi << '\n';

    // No cout, tem como alterar a quantidade de casas antes da impressão de uma variável. Ela é feita da seguinte maneira:
    std::cout << std::setw(10) << num << '\n'; // Precisa da biblioteca iomanip

    // Também pode-se preencher os espaços definidos com alguma coisa:
    std::cout << std::setw(10) << std::setfill('~') << num << '\n';
    
    return 0;
}