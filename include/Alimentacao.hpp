#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Ursidae.hpp"
#include "Herpestidae.hpp"

using namespace std;

class Alimentacao{

  private:
    int porcao;
    string comida;
    string descricao;
    Cuidador* cuidador;
    Animal* animal;

  public:
    Alimentacao(Animal* _animal, Cuidador& _cuidador, int _porcao, string _comida, string _descricao);
    double peixesConsumidos(int quantPorcao);
    double kgConsumidosDeRacao();
    string getNome();
    void print();

  /*void print() {

    std::cout << "Cuidador: ";
    cout << cuida;

    std::cout << " Animal: ";
    cout << alimentado;
  }*/
};

#endif