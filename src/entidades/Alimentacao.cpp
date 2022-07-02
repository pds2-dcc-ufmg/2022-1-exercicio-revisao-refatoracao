#include "Alimentacao.hpp"

Alimentacao::Alimentacao (int _porcao, std::string _comida, std::string _descricao, 
                          Cuidador _cuidador, Animal _animal) :
                          porcao(_porcao), comida(_comida), descricao(_descricao), 
                          cuidador(_cuidador), animal(_animal)
{}

void Alimentacao::print(){
    std::cout << "Animal:" << this->animal.getNome()<< std::endl;;
    std::cout << " Cuidador: " << cuidador.getNome() << std::endl;
    std::cout << " Descrição: " << this->descricao << std::endl;
    std::cout << std::endl;
}
