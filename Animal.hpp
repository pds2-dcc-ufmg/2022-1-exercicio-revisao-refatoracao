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
    void setFamilia(std::string);
    void setEspecie(std::string);
    std::string getEspecie();
    std::string getFamilia();
    void setNome(std::string);
    std::string getNome();

private:
    int idade;
    std::string especie;
    std::string familia;
    std::string nome;
};

#endif
