#include "Alimentacao.hpp"

using std::string;
using std::cout;

Alimentacao::Alimentacao(int _porcao, string _comida, string _descricao, 
    Cuidador* _cuid, string _nomeAnimal){

    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuid = _cuid;
    this->nomeAnimal = _nomeAnimal;

    }



void Alimentacao::print() {

    std::cout << "Animal: ";
    cout << this->nomeAnimal << "\n";

    std::cout << " Cuidador: ";
    cout << this->cuid->getNome() << "\n";

        
}