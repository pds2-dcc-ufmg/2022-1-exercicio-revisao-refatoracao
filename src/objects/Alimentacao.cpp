#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador& _cuid, Animal* _animal)
: porcao(_porcao), comida(_comida), descricao(_descricao), cuid(_cuid), animal(_animal) {}

Alimentacao::~Alimentacao() {}

int Alimentacao::getPorcao() {
    return this->porcao;
}

void Alimentacao::print() {
    std::cout << "Animal: " << this->animal->getNome() << std::endl;
    std::cout << " Cuidador: " << this->cuid.getNome() << std::endl;
    std::cout << " Descricao: " << this->descricao << std::endl << "\n";
}