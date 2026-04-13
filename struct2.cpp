#include <iostream>
#include <string>

struct Carro
{
    std::string nome;
    std::string cor;
    int pontuacao;
    int velocidade_maxima;

    // Ao continuar-mos com struct, o próximo passo é a aprender sobre métodos. Ele possibilita adicionar os valores de uma só vez.

    // Ao se utilizar um método. Ele é em forma de função:

    void setAll(std::string stnome, std::string stcor, int stpontuacao, int stvelocidade_maxima) // OS ST se refere a struct. A função set serve para adicionar os valores da struct.
    {
        nome = stnome;
        cor = stcor;
        pontuacao = stpontuacao;
        velocidade_maxima = stvelocidade_maxima;

        // Isso adiciona os valores rapidamente.
    }

    void show()
    {
        std::cout << "Nome.............:" << nome << '\n';
        std::cout << "Cor..............: " << cor << '\n';
        std::cout << "Pontuação........: " << pontuacao << '\n';
        std::cout << "Velocidade máxima: " << velocidade_maxima << "\n\n";

        // A função retorna os valores da struct.
    }

    // Perceba-se que os métodos são uma versão mais simplificada do get e set de POO.
    // Por isso, da para adicionar set's nas variáveis:

    void setVelocidade_Maxima(int stvelocidade_maxima)
    {
        if(stvelocidade_maxima < 0)
        {
            std::cout << "Velocidade Máxima inválida." << '\n';
        }
        else
        {

            velocidade_maxima = stvelocidade_maxima;
        }
    }

    void setNome(std::string stnome)
    {
        nome = stnome;
    }

    void setCor(std::string stcor)
    {
        cor = stcor; 
    }
};

int main()
{
    

}