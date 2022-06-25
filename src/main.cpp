#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{

  Animal animal1 = Animal("13", "Ursidae", "Bobby");
  animal1.print();

  double kgPeixeConsumidos01 = 0;
  Animal animal2 = Animal("1", "Ursidae", "Jorge");
  animal2.print();

  Animal animal3 = Animal("7", "Herpestidae", "Bonina");
  animal3.print();

  Animal animal4 = Animal("3", "Ursidae", "Felício");
  animal4.print();

  Ursidae e02 = Ursidae("9", "Urso Pardo", "Tony", 10.5);

  e02.print();


  Ursidae e03 = Ursidae("10", "Urso Polar", "Wanda", 7);

  e03.print();

  Herpestidae g01 = Herpestidae("2", "Suricato", "Catita");
  g01.print();

  Herpestidae g02 = Herpestidae("2", "Suricato", "Carolina");

  double kgPeixeConsumidos03 = 0;
  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  
  Cuidador cuid01 = Cuidador("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000");

  Cuidador cuid2 = Cuidador("R$ 4000", "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995");

  Alimentacao v01 = Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixe hoje", cuid01, "Bobby");
  kgPeixeConsumidos01 = 5*2;

  Alimentacao v02 = Alimentacao(1, "Ração Especial", "Catita comeu direitinho", cuid2, "Catita");
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.getPorcao());

  Alimentacao v03 = Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuid2, "Carolina");
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.getPorcao());

  Alimentacao v04 = Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuid01, "Tony");

  v02.setPorcao(2);
  kgPeixeConsumidos03 = e02.calculaPeixesConsumidos(10);

  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  v01.print();
  cout << " Descricao: " << v01.getDescricao() << endl << endl;

  v02.print();
  cout << " Descricao: " << v02.getDescricao() << endl << endl;

  v03.print();
  cout << " Descricao: " << v03.getDescricao() << endl << endl;

  v04.print();
  cout << " Descricao: " << v04.getDescricao() << endl << "\n";

  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;

  return 0;
}