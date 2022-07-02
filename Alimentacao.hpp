#include "Cuidador.hpp"
#include "Animal.hpp"

#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

class Alimentacao {
  private:
    double _porcaoComida, _quantidadePorcao;
    std::string _tipoComida, _descricao;
    Cuidador* _cuidador;
    Animal* _animal;
    
  public:
    Alimentacao(double porcao, double quantidade, std::string tipo, Cuidador* cuidador, Animal* animal): _porcaoComida(porcao), _quantidadePorcao(quantidade), _tipoComida(tipo), _cuidador(cuidador), _animal(animal) {}
    ~Alimentacao() {}
    void imprimirRelatorio();
    void setDescricao(std::string _descricao);
    double totalConsumido();
};

#endif