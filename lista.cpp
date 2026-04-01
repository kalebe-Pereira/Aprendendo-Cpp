#include <iostream>
#include <iterator>
#include <list>
// Para utilizar listas, precisa-se importar a biblioteca list

int main()
{
    // A lista em as características das anteriores, mas a lista permite adicionar um valor em uma posição sem ser início ou fim.

    // Lista, como os anteriores, ela é declarada de forma padrão:

    // list < <tipo_da_lista> >  <nome_da_lista>;

    // A lista pode se adicionar um tamanho:

    // list< <tipo_da_lista> >  <nome_da_lista> (<tamanho_da_lista>);

    // Exemplo:

    std::list<std::string> carros(5);

    std::list<int> tamanho;



    // pode-se declarar mais de uma lista ao mesmo tempo:
    std::list<char> nome, sobrenome, nomeFinal;

    // Ela possui os mesmos argumentos do queue:

        /*
        SIZE -> Retorna o tamanho.
        EMPTY -> Verifica se tá vazio.
        PUSH -> Adicona valores.
        POP -> Apaga os valores. (retira o primeiro valor )

        FRONT -> Retorna o valor que está na frente da fila (ele não remove, só mostra).
        BACK -> Retorna o valor que está em último da fila (também não remove).
        
        Comandos Novos:

        INSERT -> Insere algum valor na lista, utilizando o iterador e o valor. Ela é um objeto da lista.
        
        BEGIN -> Retorna a lista dês do primeiro valor até o último, passando pela ordem em que eles foram adicionados.

        Esse não é objetos, é uma função.
            ADVANCE -> Serve para avança alguma posição, precisa do iteration e a quantidade de posições que deseja avançar.

        */

    // Para adicionar coisas na lista, utiliza o push

    carros.push_front("Lamborguini");

    // Da pra adicionar em um for.

    for(int i = 0; i < 5; i++)
    {
        tamanho.push_front(i);
    }

    // Exibindo:

    std::cout << "Tamanho da lista: " << tamanho.size() << "\n\n";

    for(int i = 0; i < 5; i++)
    {
        std::cout << tamanho.front() << ' ';
        tamanho.pop_front(); // Retira o elemento da frente
    }

    // Tem como adicionar pela última posição:
    for(int i = 0; i < 5; i++)
    {
        tamanho.push_back(i);
    }
    
    // Exibindo:

    for(int i = 0; i < 5; i++)
    {
        std::cout << tamanho.back() << '\n';
        tamanho.pop_back();
    };

    // Além disso, tem mais duas funções para organizar a lista, que são SORT E REVERSE:
    for(int i = 0; i < 5; i++)
    {
        tamanho.push_front(i);
    }
    
    tamanho.reverse(); // Organiza de trás pra frente.

    tamanho.sort(); // Organiza da frente pra trás.

    std::cout << '\n';
    
    // --------------------------------------------------------
    // Para adicionar um valor em uma posição desejada, é necessário um iteratior, para criar-lo se faz da seguinte forma:

    using namespace std;

    std::list<int>::iterator interador;

    // <list>< tipo_da_lista >::interator <nome_do_interador>

    interador = tamanho.begin(); // recebe a lista dês do início.

    advance(interador, 3); // Serve para avançar posição, utilizando o iterador e a posição.

    tamanho.insert(interador, 10); // Adiciona o conteúdo na posição, utilizando o interador e o dados que deseja adicionar.


    return 0;
}