#include <iostream>

int main()
{
    // Os operadores terminários são operadores condicionais, mas de modo simplificada. Elas podem ser usadas quando existe somente duas respostas com condicionais simples. Como por exemplo:

    // Se o numero for maior ou igual a 1, escreva positvo. Caso contrário, escreva negativo.

    // Para declarar um operdaor ternário, deve-se utilizar a seguinte estrutura:

    // (<condição) ? <variavel_para_receber_o_valor> = <resultado_caso_verdadeiro> : <resultado_caso_falso>;

    // Exemplo:
    int variavel = 10; std::string resultado;

    (variavel >= 10) ? resultado = "É maior ou igual a 10" : "Não é maior ou igual a 10";

    std::cout << resultado << std::endl;

    // Outra forma de estrutura é assim:

    // <variavel> = (condição) ? <resultado_caso_verdadeiro> : <resultado_caso_falso>;

    // Exemplo:
    int salario = 1000; float bonus;
    
    bonus = (salario > 600) ? salario * 0.60 : salario * 0.50;
    

    std::cout << "O salário é de: " << salario + bonus << '\n';

    return 0;
}