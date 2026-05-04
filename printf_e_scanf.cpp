#include <iostream>
#include <stdio.h>

int main()
{
    // O Scanf e printf são comandos de impressão e leitura de dados utilizados em C. O C++ por usar a mesma gnu do C, pode-se utiliar esse modelo de leitura, mas não é recomandado.

    printf("Hello, World!\n");
    

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Número: , %d\n", num);

    char nome[30];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Olá, %s\n", nome);

    // Os parâmentos para as porcentagem pode ser:

    /*
        d, i -> Inteiro
        x, X -> Hexadecimal
        u -> Unsigned (números sem sinal)
        s -> String
        f -> double 
    */
    
    return 0;
}