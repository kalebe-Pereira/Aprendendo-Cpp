#include <iostream>
#include <stdlib.h>


#define TAMANHO_VETOR 30

int main()
{
    char palavra[TAMANHO_VETOR]; //Palavra digitada pelo usuário
    char palavraSecreta[TAMANHO_VETOR]; // Palavra do usuário criptografada
    char letra;
    int tamanhoPalavra = 0;
    int chances = 6;
    int verificador = 0;
    bool acerto = false;

    std::cout << "-------------------------------" << '\n';
    std::cout << "         JOGO DA FORCA         " << '\n';
    std::cout << "-------------------------------" << '\n';
    
    std::cout << "Digite a palavra secreta: ";
    std::cin >> palavra;

    
    system("clear");
    
    while(palavra[tamanhoPalavra] != '\0')
    {
        tamanhoPalavra++;
    }
    
    for(int i = 0; i < tamanhoPalavra; i++)
    {
        palavraSecreta[i] = '-';
    }
    
    while((chances > 0) && (verificador < tamanhoPalavra))
    {
        std::cout << "-------------------------------" << '\n';
        std::cout << "         JOGO DA FORCA         " << '\n';
        std::cout << "-------------------------------" << '\n';
        
        std::cout << "\n\nChances: " << chances << '\n';

    
        std::cout << "\nPalavra: " << palavraSecreta << "\n\n";
        
        std::cout << "Digite uma letra: ";
        std::cin >> letra;

        acerto = false;

        for(int i = 0; i < tamanhoPalavra; i++)
        {
            if(letra == palavra[i])
            {
                palavraSecreta[i] = letra;
                verificador++;
                acerto = true;
            }
        }

        if(acerto == true)
        {
            std::cout << "\nA letra " << letra << " EXISTE na palavra." << std::endl;
        }
        else 
        {
            chances--;
            std::cout << "\nA letra " << letra << " NÃO EXISTE na palavra." << std::endl;
        }
    }

    system("clear");

    if(acerto)
    {
        std::cout << "Meus Parabens! Você venceu." << '\n';
    }
    else
    {
        std::cout << "Você perdeu." << '\n';
    }
    
    return 0;
}