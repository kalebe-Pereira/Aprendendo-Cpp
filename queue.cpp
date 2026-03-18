#include "iostream"
#include <ostream>
#include "queue"
// Para o método funcionar, precisa-se importar a biblioteca queue

int main()
{
    // Queue, ou Fila. É parecido com as propriedades do Stack, só que a ordem dos valores é normal, mas possui a atribuição de que o primeiro a entrar é o primeiro a sair.

    /*
        O QUEUE possui os mesmos métodos da pilha, sendo:

        SIZE -> Retorna o tamanho.
        EMPTY -> Verifica se tá vazio.
        PUSH -> Adicona valores.
        POP -> Apaga os valores. (retira o primeiro valor )

        Mas, a Fila possui mais 2 métodos.

        FRONT -> Retorna o valor que está na frente da fila (ele não remove, só mostra).
        BACK -> Retorna o valor que está em último da fila (também não remove).

    */

    std::queue <std::string> cartas;

    cartas.push("A");
    cartas.push("K");
    cartas.push("Q");
    cartas.push("J");

    std::cout << "Tamanho da Fila: " << cartas.size() << std::endl;

    // para mostrar a primeira carta, utiliza-se o método FROTN. Exemplo:
    std::cout << "Primeira carta: " << cartas.front() << std::endl;
    
    // para mostrar a última carta, utiliza-se o método BACK. Exemplo:
    std::cout << "Última carta: " << cartas.back() << std::endl;

}