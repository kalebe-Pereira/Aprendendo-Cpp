#include <iostream>
#include <string>

struct Carro
{
    std::string nome;
    std::string cor;
    int pontuacao;
    int velocidade_maxima;
    int vel;

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
        std::cout << "Nome.............: " << nome << '\n';
        std::cout << "Cor..............: " << cor << '\n';
        std::cout << "Pontuação........: " << pontuacao << '\n';
        std::cout << "Velocidade máxima: " << velocidade_maxima << "\n\n";

        // A função retorna os valores da struct.
    }

    // Perceba-se que os métodos são uma versão mais simplificada do get e set de POO.
    // Por isso, da para adicionar set's nas variáveis:

    void setVelocidade_Maxima(int stvelocidade_maxima)
    {
        int vel = stvelocidade_maxima;
        if(vel < 0)
        {
            vel = 0;

        }
        else
        {

            velocidade_maxima = vel;
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

    void setPontuacao(int stpontuacao)
    {
        pontuacao = stpontuacao;
    }
};

int main()
{
    Carro car1;

    // Para adicionar os valores dessa vez, pode-se utilizar o setAll:

    car1.setAll("Astra", "Vermelho", 70, 120);

    car1.show(); // Mostra o resultado.

    // Ou pode adicionar um por um

    Carro car2;

    car2.setNome("Pegeout");
    car2.setCor("Azul");
    car2.setPontuacao(-1);
    car2.setVelocidade_Maxima(80);

    car2.show();


    return 0;
}