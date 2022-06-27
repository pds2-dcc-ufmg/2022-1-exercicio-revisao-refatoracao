#ifndef Herpestidae_HPP
#define Herpestidae_HPP
#define QUANTIDADE 1

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:

    std::string especie;

    public:

    Herpestidae();
    Herpestidae(std::string _nome, std::string _idade, std::string _especie);
    double consumoRacao(int numeroPorcoes);
    void print() override;
    ~Herpestidae();
};

#endif
