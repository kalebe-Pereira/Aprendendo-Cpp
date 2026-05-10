#include <iostream>
#include <vector> // Precisa da biblioteca para funcionar.

int main()
{
    // Vector é uma alternativa para a utilização de array. Sendo a classe vector, vector não é vetor, ela é uma estrutura mais moderna de coleção de dados.

    // Declaração: vector<tipo> nome_do_vector. Exemplo:
    std::vector<int> num;

    // O tamanho pode-se expecificar, mas não é obrigatório.
    // Declaração com tamanho: vector<tipo> nome_do_vector(tamanho);

    int tamanho;

    // Adicionando valores:

    // back
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);

    // Para verificar o tamanho do vector, é necessário de uma variável:
    tamanho = num.size();

    std::cout << "Tamanho do vector: " << tamanho << '\n';

    // Para mostrar os valores do vector:
    for(int i = 0; i < tamanho; i++) // Da para utilizar ao invés de tamanho, ser num.size().
    {
        std::cout << num[i] << ' ';
    }

    std::cout << '\n';

    // Diferente do Array, não se pode adicionasr valores utilizando o índice dela, como por exemplo: num[5] = 0; Isso retorna erro.
    // Mas, pode-se utilizar índices para alterar posições existentes.
    num[4] = 10;

    // ---------------------------------------------------------------------------------------------------

    // O Vector possibilita a troca de valores entre dois vector.

    std::vector<int> num2;

    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.push_back(10);
    
    int tamanho2 = num2.size();

    // Mostrado os valores de num2:
    for(int i = 0; i < tamanho2; i++)
    {
        std::cout << num2[i] << ' ';
    }
    std::cout << std::endl;

    // Para trocar os valores entre vector, utiliza-se o método swap.
    num.swap(num2);

    std::cout << "vector num: ";
    for(int i = 0; i < tamanho; i++)
    {
        std::cout << num[i] << ' ';
    }
    std::cout << '\n';
    
    std::cout << "Vector num2: ";
    for(int i = 0; i < tamanho2; i++)
    {
        std::cout << num2[i] << ' ';
    }
    std::cout << '\n';

    // OBS.: Os vectores precisam ser do mesmo tamanho para efetuar a troca.

    // ----------------------------------------------------------------------------------------
    
    // No vector, também possui os métodos front e back, que serve para pegar o primeiro e último valor respectivamente.

    std::cout << "Primeiro valor do num: " << num.front() << '\n';
    std::cout << "Último valor do num: " << num.back() << '\n';
    
    // Para pegar o valor de qualquer elemento, pode-se utilizar o método at:
    std::cout << "3° elemento do num: " << num.at(3) << std::endl;


    // Para inserir valorem em outro lugar, pode-se utilzar o método insert:

    // Ela é definida pela seguinte estrutura:
    // vector.insert(posição, valor)
    num.insert(num.begin(), 20);
    
    std::cout << "Inserindo na primera posição: " << num[0] << std::endl; // Adicionado um valor no início.

    // // para inserir em outras posições, basta somar o num.begin().
    num.insert(num.begin() + 3, 30);

    std::cout << "Número na 3° posição: " << num[3] << '\n';

    // O método insert é necessário um interator, mas fazendo no método acima não é necessário um interator

    // ------------------------------------------------------------------------------------------------------------

    // Como no método insert, existe um método para apagar valores, eles é o erase, ele possui a mesma estrutura do insert:,só que sem definir um valor.
    
    // vector.erase(posição)
    num.erase(num.begin() + 3); // Apagando o 30.
    num.erase(num.begin()); // Apagando o 20.

    // para apagar todos os elementos, pode-se efetuar um whlie para remoção, exemplo:
    while(!num2.empty())
    {
        num2.pop_back();
    };

    std::cout << "Tamanho do num2: " << num2.size() << '\n';

    // Ou para apagar tudo mais facilmente, pode-se utilizar o clear:
    num.clear();

    std::cout << "Tamanho do num1: " << num.size() << std::endl;
    
    return 0;
}