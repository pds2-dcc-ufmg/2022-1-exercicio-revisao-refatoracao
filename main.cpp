#include <vector>

#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Alimentacao.hpp"

int main() {

  //Criação dos animais
  std::vector<Animal*> animais;

  Animal* animal1 = new Ursidae("Bobby", "13");
  animais.push_back(animal1);

  Animal* animal2 = new Ursidae("Jorge", "1");
  animais.push_back(animal2);

  Animal* animal3 = new Herpestidae("Bonina", "7");
  animais.push_back(animal3);

  Animal* animal4 = new Ursidae("Felício", "3");
  animais.push_back(animal4);

  Animal* animal5 = new Ursidae("Tony", "9", "Urso Pardo");
  animais.push_back(animal5);

  Animal* animal6 = new Ursidae("Wanda", "10", "Urso Polar");
  animais.push_back(animal6);

  Animal* animal7 = new Herpestidae("Catita", "2", "Suricato");
  animais.push_back(animal7);

  for (auto animal : animais)
    animal->print();

  Animal* animal8 = new Herpestidae("Carolina", "2", "Suricato");
  animais.push_back(animal8);

  //Criação dos cuidadores
  Cuidador cuid1("Ana Maria Rodrigues Lopes");

  Cuidador cuid2("Fernanda Silva Santos");

  //Criação das alimentações e calculo de alimentos consumidos
  double kgPeixeConsumidos = 0;
  double kgRacaoConsumidos = 0;

  Alimentacao aliment1(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje",cuid1, animal1);
  kgPeixeConsumidos += animal1->calculaKgAlimentoConsumidos(aliment1.getPorcao());

  Alimentacao aliment2(1, "Ração especial", "Catita comeu direitinho", cuid2, animal7);
  kgRacaoConsumidos += animal7->calculaKgAlimentoConsumidos(aliment2.getPorcao());

  Alimentacao aliment3(3, "Ração", "Carolina estava com um apetite e tanto",cuid2, animal8);
  kgRacaoConsumidos += animal8->calculaKgAlimentoConsumidos(aliment3.getPorcao());

  Alimentacao aliment4(10, "Peixes", "Tony comeu um pouco da comida do Bobby",cuid1, animal5);
  kgPeixeConsumidos += animal5->calculaKgAlimentoConsumidos(aliment4.getPorcao());

  //Relatorios finais
  std::cout << " \n\n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  aliment1.print();

  aliment2.print();

  aliment3.print();

  aliment4.print();

  std::cout << " \n\n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;

  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos << std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos << std::endl;

  //Desalocação de memória
  for (auto animal : animais)
    delete animal;

  return 0;
}