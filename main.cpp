#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){

  // Criação de Animais
  Ursidae bobbyU = Ursidae("Bobby", 13);
  bobbyU.Animal::print();

  Ursidae jorgeU = Ursidae("Jorge", 1);
  jorgeU.Animal::print();

  Herpestidae boninaH = Herpestidae("Bonina", 7);
  boninaH.Animal::print();

  Ursidae felicioU = Ursidae("Felício", 3);
  felicioU.Animal::print();

  Ursidae tonyU = Ursidae("Tony", 9, "Urso Pardo", 10.5);
  tonyU.print();

  Ursidae wandaU = Ursidae("Wanda", 10, "Urso Polar", 7);
  wandaU.print();

  Herpestidae catitaH = Herpestidae("Catita", 2, "Suricato");
  catitaH.print();

  Herpestidae carolinaH = Herpestidae("Carolina", 2, "Suricato");
  
  // Criação de Cuidadores
  Cuidador anaC = Cuidador("Ana Maria Rodrigues Lopes", 1234567799, 3000, "(31) 99876-6923", "10/10/2000");

  Cuidador fernandaC = Cuidador("Fernanda Silva Santos", 9472567121, 4000, "(31) 99123-8970", "08/02/1995");
  
  // Criação de dietas (Alimentação)
  double kgPeixeConsumidos = 0;
  double kgRacaoConsumidos = 0;
  
  Alimentacao alim1 = Alimentacao(2, "Peixes", &anaC, &bobbyU);
  alim1.setDescricao("Bobby só quis comer 2 porções de peixes hoje");
  kgPeixeConsumidos += bobbyU.calculaPeixesConsumidos(alim1.getPorcao());
  
  Alimentacao alim2 = Alimentacao(1, "Ração especial", &fernandaC, &catitaH);
  alim2.setDescricao("Catita comeu direitinho");
  kgRacaoConsumidos += catitaH.kgConsumidosDeRacao(alim2.getPorcao());
  alim2.setPorcao(2);

  Alimentacao alim3 = Alimentacao(3, "Ração", &fernandaC, &carolinaH);
  alim3.setDescricao("Carolina estava com um apetite e tanto");
  kgRacaoConsumidos += carolinaH.kgConsumidosDeRacao(alim3.getPorcao());

  Alimentacao alim4 = Alimentacao(10, "Peixes", &anaC, &tonyU);
  alim4.setDescricao("Tony comeu um pouco da comida do Bobby");
  kgPeixeConsumidos += tonyU.calculaPeixesConsumidos(10);


  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  alim1.print();
  cout << " Descricao: " << alim1.getDescricao() << endl << endl;

  alim2.print();
  cout << " Descricao: " << alim2.getDescricao() << endl<<endl;

  alim3.print();
  cout << " Descricao: " << alim3.getDescricao() << endl<< endl;

  alim4.print();
  cout << " Descricao: " << alim4.getDescricao() << endl << "\n";

  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos << endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos << endl;

  return 0;
}