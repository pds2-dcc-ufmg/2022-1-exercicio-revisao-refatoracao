#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal
{
public:
    void print();
    void setIdade(int);
    int getIdade();
    void setFamily(std::string);
    std::string getFamily();
    void setNome(std::string);
    std::string getNome();

private:
    int IDADE;
    std::string family;
    std::string nome;
};

#endif
