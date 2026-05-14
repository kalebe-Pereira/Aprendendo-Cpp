#include <iostream>
#include <iterator>
#include <list>

int main()
{
    std::list<int> exemplo;
    std::list<int> lista_merge(4,5);

    for(int i = 0; i < 5; i++)
    {
        exemplo.push_front(i + 1);
    }

    std::list<int>::iterator interador;

    interador = exemplo.begin();

    std::advance(interador, 3);

    exemplo.insert(interador, 9);

    // Da mesma forma que da para inserir números em alguma posição expecífica, da para remover um dado de uma posição expecífica.

    // Para remover algum dado é necessário o interador e a função advance. Só que no passo final, ao invés de utilizar o INSERT, utiliza-se o ERASE

    // O ERASE tem uma peculiaridade, ele remove um dado depois do interador. Para ajustar isso, utiliza-se a prática de decrementar-lo para remoção mais precisa.

    interador = exemplo.begin();

    std::advance(interador, 4); // Na posição 4 tem o 9 adicionado no INSERT.
    
    exemplo.erase(--interador); // Pré-decremento para remoção.
    
    // Para remover todos os elementos de uma lista de uma só vez, utiliza-se o método CLEAR.
    
    exemplo.clear();
    
        for(int i = 0; i < 5; i++)
        {
            exemplo.push_back(i + 1);
        }
        std::cout << std::endl;
    
    std::cout << exemplo.size() << '\n';

    // ----------------------------------------------------------------------------------------------------

    // MERGE -> É um método que mescla duas listas. 
     
    // Para mesclagem, utiliza-se o método na lista que recebe os valores:
    exemplo.merge(lista_merge);

    std::cout << "Novo tamanho da lista: " << exemplo.size() << '\n';

    for(int i = 0; i < 9; i++)
    {
        std::cout << exemplo.front() << ' ';
        exemplo.pop_front();
    }

    std::cout << '\n';
    
    return 0;
}