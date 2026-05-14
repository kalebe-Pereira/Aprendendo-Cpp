#include <iostream>
#include <string>

// Structs são coleções de propriedades e métodos, podendo utilizar-los do mesmo modo de uma variável.
struct Carro
{
    // Na struct, pode-se declarar variáveis normalmente
    std::string nome;
    std::string cor;
    std::string descricao;
    int potencia;
    int velocidade_maxima;
    
};

int main()
{
    // Na função main, se declara uma struct
    Carro car; //Seria como criar uma variável chamada car do tipo Carro.

    // Agora podemos definir os valores de Car1 de acordo com as variáveis declaradas na struct:

    car.nome = "Pegeuot";
    car.cor = "Branco";
    car.potencia = 80;
    car.velocidade_maxima = 180;
    car.descricao = "Bom para manter sustentar a família do mecânico";

    // Agora para mostrar os valores, utiliza-se o mesmo princípio:

    std::cout << "Nome: " << car.nome << '\n';
    std::cout << "Cor" << car.cor << '\n';
    std::cout << "Potência: " << car.potencia << '\n';
    std::cout << "Velocidade Máxima: " << car.velocidade_maxima << '\n';
    std::cout << "Descrição: " << car.descricao << '\n';
    
    std::cout << "\n\n";

    // Tem como declarar quantos carros desejar na mesma struct:
    
    Carro car2;
    
    car2.nome = "Astra";
    car2.cor = "vermelho";
    car2.potencia = 120;
    car2.velocidade_maxima = 200;
    car2.descricao = "Compensa na maioria das vezes, se o cambio tiver bom.";
    
    // Da mesma forma, pode-se exibir os valores pro  usuário: 
    
    std::cout << "Nome: " << car2.nome << '\n';
    std::cout << "Cor" << car2.cor << '\n';
    std::cout << "Potência: " << car2.potencia << '\n';
    std::cout << "Velocidade Máxima: " << car2.velocidade_maxima << '\n';
    std::cout << "Descrição: " << car2.descricao << '\n';

    // Os valores de cada struct são únicas, elas não se interferem.
    
    return 0;
}