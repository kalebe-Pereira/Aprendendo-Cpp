#include <iostream>

class Carro
{
    // Os objetos são instâncias da classe. Elas são classificadas em objetos públicos e objetos privados, os objetos públicos podem ser alterados fora da classe, já os privados é necessário um outro objeto para efetuar alteração.

    // A classe é definida como o tipo da variável, na qual elas possuiem os argumentos definidos dentro da classe.

    public:
        // Elementos públicos abaixo:
        int velocidade = 0;
        int velocidade_maxima;
        std::string type;

        void initiation(int typeSpeed); // Prototipagem da função
        
        
        private:
        // Elementos privados abaixo:

};

void Carro::initiation(int typeSpeed) // Essa declaração serve para informar que a classe carro está criando uma função chamada initiation
{
    if(typeSpeed == 1)
    {
        this -> velocidade_maxima = 100;
        this -> type = "1.0";
    }
    else if(typeSpeed == 2)
    {
        this -> velocidade_maxima = 120;
        this -> type = "1.6";
    }
    else if(typeSpeed == 3)
    {
        this -> velocidade_maxima = 160;
        this -> type = "1.8";
    }
}

int main()
{
    // POO é a sigla para Programação Orientada a Objeto.
    
    Carro *pegeout = new Carro();
    // Para definir um objeto da classe. Sendo o pegeout, eçe precisa está em ponteiro.

    // para mostrar os parametros de uma classe, faz-se da seguinte forma:
    std::cout << pegeout->velocidade << '\n';

    // Para iniciar a função no objeto, se faz da seguinte maneira:
    pegeout -> initiation(2);
    
    std::cout << "Velocidade Máxima: " << pegeout -> velocidade_maxima << std::endl;
    std::cout << "Tipo: " << pegeout -> type << '\n';
    
    return 0;
}