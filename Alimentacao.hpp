#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"
#include <memory>

class Alimentacao{
private:
    int _nPorcoes;
    std::string _comida, _desc;
    std::shared_ptr<Cuidador> _cuid;
    std::shared_ptr<Animal> _animal;
public:
    Alimentacao(std::shared_ptr<Cuidador> cuid, std::shared_ptr<Animal> animal, std::string comida, int porcao);
    void print();
    void setDesc(std::string desc);
    std::string getDesc();
    int calcKgConsumido();
};

#endif