#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal 
{
private:
    std::string idade;
    std::string familia;
    std::string nome;

public:

    void print();

    void printOi();


    void setIdade(std::string _idade);
    std::string getIdade();


    void setFamilia(std::string _familia);
    std::string getFamilia();


    void setNome(std::string _nome);
    std::string getNome();


};

#endif