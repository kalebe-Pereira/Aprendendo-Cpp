#include <iostream>

// Na última parte de struct, será a utilização de structs com vetores.

// Utilizando o mesmo exemplo dos structs anteriores.
struct Carro
{
    std::string name;
    std::string color;
    int speed_max;
    int potency;
    
    void setAll(std::string stname, std::string stcolor, int stspeed_max, int stpotency)
    {
        name = stname;
        color = stcolor;
        speed_max = stspeed_max;
        potency = stpotency;
    }


    void show()
    {
        std::cout << "\n\nNome.............: " << name << '\n';
        std::cout << "Cor..............: " << color << '\n';
        std::cout << "Pontência........: " << potency << '\n';
        std::cout << "Velocidade Máxima: " << speed_max << "\n\n";
    }
};

int main()
{
    // Para criar um Array de struct. Pode-se fazer da seguinte forma:
    Carro *carros = new Carro[5]; // A variável precisa ser um ponteiro.

    // Depois, precisa criar a quantidade de struct necessária:
    Carro car1, car2, car3, car4, car5;

    // Logo após, os adicione no array:
    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    // Para adicionar os valores, utiliza-se o array carro com o indice da struct que deseja adicionar:
    carros[0].setAll("Astra", "Azul", 120, 200);
    carros[1].setAll("Pegeot", "Amarelo", 80, 100);
    carros[2].setAll("Uno com escada", "Cinza", 400, 1000);
    carros[3].setAll("Civic", "Vemelho", 130, 120);
    carros[4].setAll("Gol Bola", "Preto", 110, 100);

    // Agora, para mostrar os valores, pode-se utilizar o for para mais praticidade.
    for(int i = 0; i < 5; i++)
    {
        carros[i].show();
    }

    return 0;
}