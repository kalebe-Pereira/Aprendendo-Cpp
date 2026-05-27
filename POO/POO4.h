#ifndef POO4_H_DEFINED
#define POO4_H_DEFINED

#include <iostream>
#include <algorithm>
#include <cctype>

class Veiculo
{
    private:
        unsigned int speed_max;
        bool blindagem;
        std::string type = "undefined";

    public:
        unsigned int speed;
        unsigned int quantidade_rodas;

        void setType(std::string t);
        std::string getType();

        void setBlindagem(bool a);
        bool getblindagem();

        void setSpeed_max(int s);
        int getSpeed_max();
        
        void ShowInfo();
};

// Para desenvolver uma classe a partir da classe mãe, como por exemplo a Veículo, pode se definir da seguinte maneira:

class Moto:public Veiculo
{
    // A partir de agora, a classe moto possui todas as variáveis da classe Veiculo.
    public:
        Moto();
};

Moto::Moto()
{
    // Perceba que agora a classe Moto possui seus métodos já definidos, mesmo que elas sejam herdadas da classe mãe
    quantidade_rodas = 2;
    speed = 0;
    setType("moto");
    setBlindagem(false);
    setSpeed_max(250);
}

class Carro:public Veiculo
{
    public:
        Carro();
};

Carro::Carro() // Agora a classe Carro tem as mesmas propriedades da classe moto e Veiculo, mas com valores alterados.
{
    quantidade_rodas = 4;
    speed = 0;
    setType("carro");
    setBlindagem(false);
    setSpeed_max(400);
}

class Tank:public Veiculo
{
    public:
        Tank();
};

Tank::Tank()
{
    quantidade_rodas = 0;
    speed = 0;
    setType("tank");
    setBlindagem(true);
    setSpeed_max(80);
}

void Veiculo::setType(std::string t) // Adiciona o tipo
{
    std::transform(t.begin(), t.end(), t.begin(), ::tolower);

    std::string types[] = {"moto", "carro", "tank"};

    for(int i = 0; i < 3; i++)
    {
        if(t == types[i])
        {
            type = t;
        }
        
    }
}

std::string Veiculo::getType() // Retorna o tipo
{
    return type;
}

void Veiculo::setBlindagem(bool a ) // Adiciona a blindagem
{
    blindagem = a;
}

bool Veiculo::getblindagem() // Retorna a blindagem
{
    return blindagem;
}

void Veiculo::setSpeed_max(int s) // Adiciona a velocidade máxima
{
    speed_max = s; 
}

int Veiculo::getSpeed_max() // Retorna a velocidade máxima
{
    return speed_max;
}

void Veiculo::ShowInfo() // Mostra as informações.
{
    std::cout << '\n';
    std::cout << "Tipo: " << getType() << '\n';
    std::cout << "Velocidade Máxima: " << getSpeed_max() << '\n';
    std::cout << "blindagem: " << getblindagem() << '\n';
    std::cout << '\n';
}

#endif