#include "Alimentacao.hpp"

Alimentacao::Alimentacao (int _porcao, std::string _comida, std::string _descricao, 
                          Cuidador* _cuidador, Animal* _animal) :
                          porcao(_porcao), comida(_comida), descricao(_descricao), 
                          cuidador(_cuidador), animal(_animal)
{}

void Alimentacao::print(){
    cuidador->print();
    animal->print();
    std::cout << "Descrição: " << this->descricao << std::endl;
}
