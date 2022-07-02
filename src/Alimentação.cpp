#include "Alimentacao.hpp"

Alimentacao::Alimentacao(Animal* _animal, Cuidador& _cuidador, int _porcao, string _comida, string _descricao) {
  this->animal = _animal;
  this->cuidador = &_cuidador;
  this->porcao = _porcao;
  this->comida = _comida;
  this->descricao = _descricao;
}

string Alimentacao::getNome() {
  this->animal->getNome(); 
}

double Alimentacao::peixesConsumidos(int quantPorcao){
  Ursidae* uAnimal = dynamic_cast<Ursidae*>(animal);
  return uAnimal->getPeixesPorPorcao() * quantPorcao;
}

double Alimentacao::kgConsumidosDeRacao() {
  Herpestidae* hAnimal = dynamic_cast<Herpestidae*>(animal);
  return hAnimal->getQuantPorcao() * this->porcao;
}

void Alimentacao::print() {
  std::cout << "Animal: ";
  cout << this->getNome() << endl;

  std::cout << " Cuidador: ";
  cout << this->cuidador->getNome() << endl;

  cout << " Descricao: " << this->descricao << endl << endl;

  //std::cout << " : ";
  //cout << ursidae;
}