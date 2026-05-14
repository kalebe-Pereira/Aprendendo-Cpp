#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

class Carro
{
    public:
        int velocidade = 0;
        int velocidade_maxima;
        std::string type;
        
        void self(int type_speed);
        void imprimir();
};

void Carro::self(int type_speed)
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

void Carro::imprimir()
{
    std::cout << "Velocidade Máxima: " << velocidade_maxima << std::endl;
    std::cout << "Tipo.............:" << type << std::endl;
}

#endif