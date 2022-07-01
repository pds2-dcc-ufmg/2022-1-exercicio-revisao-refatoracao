
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
    private:
    double _porcao;
    string _comida;
    string _descricao;
    Cuidador* _cuid;
    string _nomeAnimal;
    public:
    Alimentacao(int porcao, string comida, string descricao,string nomeanimal,Cuidador* cuid){
        this->_porcao = porcao;
        this->_comida = comida;
        this->_descricao= descricao;
        this->_cuid = cuid;
        this->_nomeAnimal = nomeanimal;
    }
    void print() {
        std::cout << "Animal: ";
        cout << _nomeAnimal << "\n";
        std::cout << " Cuidador: ";
        cout << _cuid->getnome() << "\n";
    }
    double getPorcao(){return _porcao;}
    void setPorcao(int porcao){this->_porcao = porcao;}
    void setComida(string comida){this->_comida = comida;}

};
#endif