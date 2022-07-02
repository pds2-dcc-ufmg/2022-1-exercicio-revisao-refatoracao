#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main()
{
  Ursidae animal1 = Ursidae(13, "Bobby");
  animal1.print();
  Ursidae animal2 = Ursidae(1, "Jorge");
  animal2.print();
  Herpestidae animal3 = Herpestidae(7, "Bonina");
  animal3.print();
  Ursidae animal4 = Ursidae(3, "Felício");
  animal4.print();

  Ursidae e02 = Ursidae(9, "Tony");
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  e02.setEspecie("Urso Pardo");
  e02.setKgPeixePorDia(10.5);
  e02.print();

  Ursidae e03 = Ursidae(10, "Wanda");
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  e03.setEspecie("Urso Polar");
  e03.setKgPeixePorDia(7);
  e03.print();

  Herpestidae g01 = Herpestidae(2, "Catita");
  g01.setEspecie("Suricato");
  g01.print();

  Herpestidae g02 = Herpestidae(2, "Carolina");
  double bonificacao01 = 0;
  g02.setEspecie("Suricato");


  double kgPeixeConsumidos[5];
  for(int i = 0; i < 5; i++)
  {
    kgPeixeConsumidos[i] = 0;
  }

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;
  
  Cuidador cuid01 = Cuidador("Ana Maria Rodrigues Lopes", "1234567799",
  "(31) 99876-6923","10/10/2000", "R$ 3000");

  Cuidador cuid2 = Cuidador("Fernanda Silva Santos", "9472567121"
  ,"(31) 99123-8970", "08/02/1995", "R$ 4000");
  
  Alimentacao v01 = Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje"
  , cuid01, "Bobby");

  kgPeixeConsumidos[0] = 10;

  Alimentacao v02 = Alimentacao(1, "Ração especial", "Catita comeu direitinho", cuid2, "Catita");
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.getPorcao());

  Alimentacao v03 = Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuid2,  "Carolina");
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.getPorcao());

  Alimentacao v04 = Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby"
  , cuid01, "Tony");

  v02.setPorcao(2);
  v03.setComida("Ração");
  e02.calculaPeixesConsumidos(10);



  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  v01.print();
  cout << " Descricao: " << v01.getDescricao() << endl << endl;

  v02.print();
  cout << " Descricao: " << v02.getDescricao() << endl<<endl;

  v03.print();
  cout << " Descricao: " << v03.getDescricao() << endl<< endl;

  v04.print();
  cout << " Descricao: " << v04.getDescricao() << endl << "\n";






  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos[0]+kgPeixeConsumidos[2]<<endl;

  return 0;
}
