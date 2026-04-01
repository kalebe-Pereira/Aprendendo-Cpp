#include <iostream>


int main()
{
    // O switch case é um meio de condicional utilizado para verificações rápidas e que exigem uma resposta expecífica. Muito utilizado para padrões pré-definidos, como para ações do usuário (aperta botões e essas coisas). A condição é feita em cima de uma variável.

    // A estrutura é composta po um switch e logo após se aplica os casos.

    // Exemplo de utilização do switch caso:
    char opcao;

    std::cout << "Você gosta de batata [s/n]: ";
    std::cin >> opcao;

    switch (opcao) 
    {
        case 's':
            std::cout << "Meus Parabéns! Você gosta de batata :)" << '\n';
            break;
        case 'n':
            std::cout << "Por que você não gosta de batatas :(" << '\n';
            break;
        default:
            std::cout << "Opção Inválida." << std::endl;
    };

    // Da para adicionar várias switch cases com múltiplas respostas. Exemplo:

    std::cout << "[1] CARRO [2] MOTO [3] LANCHA [4] NAVIO [5] AVIÃO [6] HELICÓPTERO" << "\n\n";

    int op;

    std::cout << "Selecione sua opção: ";
    std::cin >> op;

    switch (op) 
    {
        case 1:
        case 2:
            std::cout << "Transporte Terrestre." << '\n';
            break;
        case 3:
        case 4:
            std::cout << "Veículo Aquático" << '\n';
            break;
        case 5:
        case 6:
            std::cout << "Veículo Aéreo" << '\n';
            break;
        default:
            std::cout << "Veículo selecionado Inválido." << '\n';
    };
    
    return 0;
}
