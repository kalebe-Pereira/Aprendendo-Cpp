#ifndef CLASSES_H_DEFINED
#define CLASSES_H_DEFINED

#include <iostream>

class Veiculo
{
    private:
        // Os tipos privados possuiem uma propriedade especial, que elas não podem ser alteradas pelo usuário, somente na própria classe.
        // Para fazer essas alterações é necessário criar uma função set(altera o valor) e a função get(retorna o valor).
        std::string nome;
        int vel_max;
        bool ligado = true;
        
        public:
        Veiculo(int type); // Classe construtora, serve para determinar alguns parâmetros ao declarar a classe.
        int velocidade;
        int tipo;   

        void setVel_max(int v);
        int getVel_max();
        
        bool getLigado();
        void setLigado(bool l);

        std::string getNome();
        void setNome(std::string n);
    };
    
Veiculo::Veiculo(int type)
{
    /*
        1 - Carro
        2 - Avião
        3 - Navio
    */
    if(type == 1)
    {
        nome = "Carro";
        setVel_max(200);
    }
    else if(type == 2)
    {
        nome = "Avião";
        setVel_max(300);
    }
    else if(type == 3)
    {
        nome = "Navio";
        setVel_max(500);
    }
}

void Veiculo::setVel_max(int v) // Adiciona a velocidade máxima 
{
    if(v > 0)
    {
        vel_max = v;
    }
}

int Veiculo::getVel_max()
{
    return vel_max;
}

bool Veiculo::getLigado()
{
    return ligado;
}

void Veiculo::setLigado(bool l)
{
    ligado = l;
}

std::string Veiculo::getNome()
{
    return nome;
}

void Veiculo::setNome(std::string n)
{
    nome = n;
}
 
#endif