#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{
  //Animais
  Animal* ursidaeBobbyAnimal = new Animal(13, "Ursidae", "Bobby");
  ursidaeBobbyAnimal->print();

  Animal ursidaeJorgeAnimal(1, "Ursidae", "Jorge");
  ursidaeJorgeAnimal.print();

  Animal harpestidaeBoninaAnimal(7, "Herpestidae", "Bonina");
  harpestidaeBoninaAnimal.print();

  Animal ursidaeFelicioAnimal(3, "Ursidae", "Felício");
  ursidaeFelicioAnimal.print();


  //Ursidae
  Ursidae ursidaeTony(9, "Tony", "Urso Pardo", 10.5);
  ursidaeTony.print();

  Ursidae ursidaeWanda(10, "Wanda", "Urso Polar", 7);
  ursidaeWanda.print();


  //Herpestidae
  Herpestidae herpestidaeCatita(2, "Catita", "Suricato");
  herpestidaeCatita.print();

  Herpestidae herpestidaeCarolina(2, "Carolina", "Suricato");

  
  //Cuidadores
  Cuidador cuidAna("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000");
  Cuidador cuidFernanda("R$ 4000", "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995");

  //Alimentacao
  Alimentacao peixesBobby(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", &cuidAna, "Bobby");
  Alimentacao racaoCatita(2, "Ração especial", "Catita comeu direitinho", &cuidFernanda, "Catita");
  Alimentacao racaoCarolina(3, "Ração", "Carolina estava com um apetite e tanto", &cuidFernanda, "Carolina");
  Alimentacao peixesTony(10, "Peixes", "Tony comeu um pouco da comida do Bobby", &cuidAna, "Tony");

  //Comida
  //Bobby
  Ursidae* ursidaeBobby = dynamic_cast<Ursidae*>(ursidaeBobbyAnimal);
  ursidaeBobby->calcula_peixes_consumidos(peixesBobby.getPorcao());
  //Outros
  herpestidaeCatita.kgConsumidosDeRacao(racaoCatita.getPorcao());
  herpestidaeCarolina.kgConsumidosDeRacao(racaoCarolina.getPorcao());
  ursidaeTony.calcula_peixes_consumidos(peixesTony.getPorcao());

  //Relatório alimentações
  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
  peixesBobby.print();
  racaoCatita.print();
  racaoCarolina.print();
  peixesTony.print();

  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << to_string(herpestidaeCatita.getRacaoConsumida() + herpestidaeCarolina.getRacaoConsumida()) <<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << to_string(ursidaeBobby->getKgPeixePorDia() + ursidaeTony.getKgPeixePorDia()) <<endl;

  delete ursidaeBobbyAnimal;

  return 0;
}
