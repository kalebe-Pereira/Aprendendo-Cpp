#include <iostream>
#include <stack>
// para declarar o uso das planilhas, será necessário importar a biblioteca stack 

int main()
{
    // Stack, ou mais conhecido como plilha. São estruturas parecida com os vetoresm mas ela só acessa em ordem.

    // A pilha possui a propriedade de LIFO - Last in firt out. Ou seja, o último a entrar na pilha será o primeiro a ser removido, e logicamente, o primeiro item a entrar na pilha será o último a ser inserido

    // para criar a pilha deve ter a declaração "stack" <<tipo>> <nome_da_stack>. Exemplo:

    std::stack <std::string> cartas;
    
    // para criar algo nas pilhas será necessário utilizar o método push. Exemplo:

    cartas.push("A"); // Adicione o que deseja dentro do parenteses
    cartas.push("K");
    cartas.push("Q");
    cartas.push("J"); //Está carta é o topo da lista, por ser a última adicionada.

 
    // Para ver a quantidade, pode-se utilizar o método size. Exemplo: 
    std::cout << "Tamanho da Pilha: " << cartas.size() << std::endl;
    
    // Para retirar algum elemento da pilha, utiliza-se o método POP. Exemplo:
    
    cartas.pop();

    std::cout << "Tamanho da Pilha: " << cartas.size() << std::endl;
    // O POP só retira o elemento DO TOPO da pilha

    // para visualizar qual é o elemento do topo, utiliza-se o método TOP. Exemplo:
    std::cout << "A carta do topo e: " << cartas.top() << std::endl;

    
    // Para verificar se a pilha está vazia, utilizamos o método EMPTY, que é um método que retorna um valor boleano. Podendo ser utilizado com IF para verificação da pilha.Exemplo:

    if(cartas.empty())
    {
        std::cout << "A lista está vazia" << std::endl;
    }
    else
    {
        std::cout << "A lista possui " << cartas.size() << " itens." << std::endl;
    }

    // para excluir todos os valores de uma pilha, pode-se utilizar o método empty mais o loop while. Exemplo: 
    while(!cartas.empty())
    {
        cartas.pop();
    }

    if(cartas.empty())
    {
        std::cout << "Não existe nada na pilha" << std::endl;
    }
    else
    {
        std::cout << "Ainda existe algo na lista." << std::endl;
    }

    return 0;
}