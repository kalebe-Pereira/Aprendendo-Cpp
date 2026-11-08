#ifndef  POO4_H_INCLUDED
#define POO4_H_INCLUDED

class Base1
{
    public:
        void showBase1();
};

void Base1::showBase1()
{
    std::cout << "Impressão classe 1" << '\n';
}

class Base2
{
    public:
        void showBase2();
};

void Base2::showBase2()
{
    std::cout << "Impressão classe 2" << '\n';
}

class Primaria:public Base1, public Base2  //Nessa linha, ao invés de ser 1 declaração de classe, seria a quantidade de classe que você deseja.
{

};
#endif