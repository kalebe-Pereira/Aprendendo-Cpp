#include <iostream>
#include "Classes.h"

int main()
{
    // A classe está no arquivo Classes.h

    Veiculo *v1= new Veiculo(1); // Tipo do veiculo.
    
    v1->setVel_max(400); // No arquivo Classes, possui uma verificação caso o valor digitado ultrapasse o valor máximo.
    std::cout << "Nome: " << v1->getNome() << '\n';
    std::cout << "Velocidade máxima: " << v1->getVel_max() << std::endl;
    std::cout << "Ligado: " << v1->getLigado() << '\n';

    
    Veiculo *v2 = new Veiculo(2);
    
    std::cout << '\n';
    std::cout << "Nome: " << v2->getNome() << '\n';
    std::cout << "Velocidade máxima: " << v2->getVel_max() << '\n';
    std::cout << "Ligado: " << v2->getLigado() << '\n';

    Veiculo *v3 = new Veiculo(3);

    std::cout << '\n';
    std::cout << "Nome: " << v3->getNome() << '\n';
    std::cout << "Velocidade máxima: " << v3->getVel_max() << '\n';
    std::cout << "Ligado: " << v3->getLigado() << '\n';

    return 0;
}