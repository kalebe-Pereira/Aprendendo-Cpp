#ifndef CARRO_H_INCLUDED // Estrutura: #ifndef <NOME DO AQUIVO>_H_INCLUDED
#define CARRO_H_INCLUDED // Estrutura: #define <NOME DO AQUIVO>_H_INCLUDED
#include <stdio.h>

class Carro
{
    public:
        int velocidade = 0;
        int velocidade_maxima;
        std::string type;
        
        void Self(int type_speed);
        void Imprimir();
};

void Carro::Self(int type_speed)
{
    if(type_speed == 1)
    {
        velocidade_maxima = 100;
        type = "1.0";
    }
    else if(type_speed == 2)
    {
        velocidade_maxima = 120;
        type = "1.6";
    }
    else if(type_speed == 3)
    {
        velocidade_maxima = 160;
        type = "1.8";
    }
}

void Carro::Imprimir()
{
    std::cout << '\n';
    std::cout << "Velocidade Máxima: " << velocidade_maxima << std::endl;
    std::cout << "Tipo.............: " << type << std::endl;
    std::cout << '\n';
}

#endif // Final do ifndef, obrigatório.