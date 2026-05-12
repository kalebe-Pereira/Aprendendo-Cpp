#include <iostream>
#include <stdlib.h>

int main()
{
    // O system é uma função que retorna algum comando do systema operacional. Executando o comando dentro do parênteses:

    system("dir"); // -> mostra o diretorio de arquivos dentro da pasta do arquivo 

    system("clear"); // -> Limpa o terminal.
        // no windows, é system("cls");
    
    system("color 4d"); // Não funciona no Linux :(
        /*
                COLOR (WINDOWS)

            Troca a cor do terminal, pode-se trocar com as seguintes escala de cores:

            COR DE FUNDO            COR DO TEXTO
            0 = Preto               8 = Cinza
            1 = Azul                9 = Azul Claro
            2 = Verde               A = Verde Claro
            3 = Verde-água          B = Verde-água Claro
            4 = Vermelho            C = Vermelho Claro
            5 = Roxo                D = Lilás
            6 = Amarelo             E = Amarelo Claro
            7 = Branco              F = Branco Brilhante
        */

        /*
                COLOR (LINUX)
            
            Precisa utilizar o printf junto com a sequência antes do texto '\033[Xm' na qual X pode ser substituído pelos seguintes números:

            30 = Branco
            31 = Vermelho
            32 = Verde
            33 = Amarelo
            34 = Azul
            35 = Lilás
            36 = Azul Claro
            37 = Cinza

            Para voltar a cor normal do texto, basta digitar '\033[m' após o final do texto colorido.
        */

    system("pause"); // Serve para criar uma pausa na execução, será necessário apertar uma tecla para continuar com a execução.
        /*
            No Linux não possui o pause do system, uma das opções para se efetuar isso seria utilizando o getchar():  

                printf("Pressione ENTER para continuar...\n");
                getchar();
        */
        

    return 0;
}