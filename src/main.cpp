#include <iostream>
#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){

  double kgPeixeConsumidos = 0;
  double kgRacaoConsumidos = 0;

  Animal::Ursidae* Bobby = new Animal::Ursidae("Bobby", 13);
  Bobby->print();

  Animal::Ursidae* Jorge = new Animal::Ursidae("Jorge", 1);
  Jorge->print();

  Animal::Herpestidae* Bonina = new Animal::Herpestidae("Bonina", 7);
  Bonina->print();

  Animal::Ursidae* Felicio = new Animal::Ursidae("Felicio", 3);
  Felicio->print();

  Animal::Ursidae* Tony = new Animal::Ursidae("Tony", 9);
  Tony->setEspecie("Urso Pardo");
  Tony->setkgPeixePorDia(10.5);
  Tony->print();
  
  Animal::Ursidae* Wanda = new Animal::Ursidae("Wanda", 10);
  Wanda->setEspecie("Urso Polar");
  Wanda->setkgPeixePorDia(7);
  Wanda->print();

  Animal::Herpestidae* Catita = new Animal::Herpestidae("Catita", 2);
  Catita->setEspecie("Suricato");
  Catita->print();

  Animal::Herpestidae* Carolina = new Animal::Herpestidae("Carolina", 2);
  Carolina->setEspecie("Suricato");
  Carolina->print();

  Cuidador::Cuidador* Ana = new Cuidador::Cuidador("Ana Maria Rodrigues Lopes", 123456779, "(31) 99876-6923", "10/10/2000", "R$ 3000");
  Ana->print();

  Cuidador::Cuidador* Fernanda = new Cuidador::Cuidador("Fernanda Silva Santos", 9472567121, "(31) 99123-8970", "08/02/1995", "R$ 4000");
  Fernanda->print();

  Alimentacao::Alimentacao alimentacao1(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", Ana, Bobby);
  kgPeixeConsumidos += Bobby->quantidadeDeAlimentoConsumida(alimentacao1.getPorcao());

  Alimentacao::Alimentacao alimentacao2(1, "Ração especial", "Catita comeu direitinho", Fernanda, Catita);
  kgRacaoConsumidos += Catita->quantidadeDeAlimentoConsumida(alimentacao2.getPorcao());

  Alimentacao::Alimentacao alimentacao3(3, "Ração", "Carolina estava com um apetite e tanto", Fernanda, Carolina);
  kgRacaoConsumidos += Carolina->quantidadeDeAlimentoConsumida(alimentacao3.getPorcao());

  Alimentacao::Alimentacao alimentacao4(10, "Peixes", "Tony comeu um pouco da comida do Bobby", Ana, Tony);
  kgPeixeConsumidos = Tony->quantidadeDeAlimentoConsumida(alimentacao4.getPorcao());



    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    alimentacao1.print();
    alimentacao2.print();
    alimentacao3.print();
    alimentacao4.print();

    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;

    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos << std::endl;

    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos << std::endl;

  delete Bobby;
  delete Jorge;
  delete Bonina;
  delete Felicio;
  delete Tony;
  delete Wanda;
  delete Catita;
  delete Carolina;
  delete Ana;
  delete Fernanda;

    return 0;
}
