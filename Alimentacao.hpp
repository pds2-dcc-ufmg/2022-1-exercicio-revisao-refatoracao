
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

using namespace std;

class Alimentacao
{
    private:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuid;
    string nomeAnimal;

    public:
    Alimentacao(int _porcao, string _comida, string _descricao, Cuidador _cuid, string _nomeAnimal);
    void print();
    int getPorcao();
    void setPorcao(int _porcao);
    void setComida(std::string _comida);
    std::string getDescricao();
};

#endif



    /*void print() {

        std::cout << "Cuidador: ";
        cout << cuida;

        std::cout << " Animal: ";
        cout << alimentado;
    }*/


     //std::cout << " : ";
        //cout << ursidae;