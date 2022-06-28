#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include "Herpestidae.hpp"

#include <vector>


template<typename T>
T* encontre(std::vector<T*> vec, std::string nome) {

  for(auto it : vec) {
    if(it->getAtributo("nome") == nome) return it;
  }

  return nullptr;
}

template<typename T>
void limpaHeap(std::vector<T> vec) {

  for(auto it : vec) {
    delete it;
  }
  
  vec.clear();
}

//Código refatorado da função main

int main() {

  std::vector<Animal*> animais;
  std::vector<Herpestidae*> suricatas;
  std::vector<Ursidae*> ursos;
  std::vector<Alimentacao*> alimentos;
  std::vector<Cuidador*> cuidadores;

  animais.push_back(new Animal("Bobby", 13, "Ursidae"));
  animais.push_back(new Animal("Jorge", 1, "Ursidae"));
  animais.push_back(new Animal("Bonina", 7, "Herpestidae"));
  animais.push_back(new Animal("Felício", 3, "Ursidae"));

  ursos.push_back(new Ursidae("Tony", 9, "Urso Pardo"));
  ursos.push_back(new Ursidae("Wanda", 10, "Urso Polar"));

  suricatas.push_back(new Herpestidae("Catita", 2, "Suricato"));
  suricatas.push_back(new Herpestidae("Carolina", 2, "Suricato"));

  cuidadores.push_back(new Cuidador("Ana Maria Rodrigues Lopes", "(31) 9999", "10/10/2000", "1234567799", 3000));
  cuidadores.push_back(new Cuidador("Fernanda Silva Santos", "(31) 9999", "08/02/1965", "1239243299", 4000));
  
  encontre(animais, "Bobby")->print();
  encontre(ursos, "Tony")->print();

  Alimentacao* a01 = new Alimentacao();
  a01->setCuidador(encontre(cuidadores, "Fernanda Silva Santos"));
  a01->setAnimal(encontre(animais, "Bobby"));
  a01->setAtributo("comida", "Peixes");
  a01->setAtributo("descricao", "Bobby só quis comer duas porções hoje");
  a01->print();

  encontre(animais, "Bobby")->setAtributo("kgConsumidos", "10");
  encontre(animais, "Bobby")->setAtributo("kgPorcao", "1.125");

  std::cout << encontre(animais, "Bobby")->somaKgConsumidos(5) << std::endl;
  
  limpaHeap(animais);
  limpaHeap(suricatas);
  limpaHeap(ursos);
  limpaHeap(cuidadores);
  //limpaHeap(alimentacao); -> se for usar!

  return 0;
}
