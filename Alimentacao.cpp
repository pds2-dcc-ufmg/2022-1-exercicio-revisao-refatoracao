#include "Alimentacao.hpp"
#include "Cuidador.hpp"

// arquivo cpp para implementacao do hpp criado
using namespace std;

Alimentacao::Alimentacao(string nomeAnimal, string descricao,
    string comida, int porcao, Cuidador cuid){
        _nomeAnimal = nomeAnimal;
        _descricao = descricao;
        _porcao = porcao;
        _comida = comida;
        _cuid = cuid;
}

Alimentacao::Alimentacao(){}

void Alimentacao::print(void){
    std::cout << "Animal: ";
    cout << _nomeAnimal << "\n";

    std::cout << " Cuidador: ";
    cout << _cuid.getNome() << "\n";
    return;
}

string Alimentacao::getDescricao(){return _descricao;}