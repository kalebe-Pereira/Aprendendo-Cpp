#include "iostream"

int fatorial(int numero);

int main()
{
    int resultado = fatorial(5);

    std::cout << resultado << '\n';

    return 0;
}

int fatorial(int numero)
{
    std::string texto;

    texto = (numero > 1) ? " * " : " = ";

    std::cout << numero << texto;
    
    if(numero > 1)
    {
        return numero * fatorial(numero - 1);
    }

    return 1;
}