#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main(){

  Animal animal1 = Animal("Bobby", 13, "Ursidae");
  animal1.print();
  
  double kgPeixeConsumidos01 = 0;
  
  Animal animal2 = Animal("Jorge", 1, "Ursidae");
  animal2.print();

  Animal animal3 = Animal("Bonina", 7, "Herpestidae");
  animal3.print();

  Animal animal4 = Animal("Felício", 3, "Ursidae");
  animal4.print();

  Ursidae ursidae1 = Ursidae("Tony", 9, "Urso Pardo", 10.5);
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  ursidae1.print();

  Ursidae ursidae3 = Ursidae("Wanda", 10, "Urso Polar", 7);
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  ursidae3.print();

  Herpestidae herpestidae1 = Herpestidae("Catita", 2, "Suricato");
  herpestidae1.print();

  Herpestidae herpestidae2 = Herpestidae("Carolina", 2, "Suricato");
  double bonificacao01 = 0;

  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;

  Cuidador cuid1 = Cuidador("Ana Maria Rodrigues Lopes", 1234567799, 3000, "(31) 99876-6923", "10/10/2000");

  Cuidador cuid2 = Cuidador("Fernanda Silva Santos", 9472567121, 4000, "(31) 99123-8970", "08/02/1995");
  
  Alimentacao alim1 = Alimentacao(2, "Peixes", &cuid1, "Bobby");
  alim1.setDescricao("Bobby só quis comer 2 porções de peixes hoje");
  kgPeixeConsumidos01 = 5*2;
  
  Alimentacao alim2 = Alimentacao(1, "Ração especial", &cuid2, "Catita");
  alim2.setDescricao("Catita comeu direitinho");
  kgRacaoConsumidos01 += herpestidae1.kgConsumidosDeRacao(alim2.porcao);

  Alimentacao alim3 = Alimentacao(3, "Ração", &cuid2, "Carolina");
  alim3.setDescricao("Carolina estava com um apetite e tanto");
  kgRacaoConsumidos02 += herpestidae2.kgConsumidosDeRacao(alim3.porcao);

  Alimentacao alim4 = Alimentacao(10, "Peixes", &cuid1, "Tony");
  alim4.setDescricao("Tony comeu um pouco da comida do Bobby");

  alim2.porcao = 2;
  alim3.comida = "Ração";
  kgPeixeConsumidos03 = ursidae1.calcula_PEIXES_CONSUMIDOS(10);

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
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;

  return 0;
}
