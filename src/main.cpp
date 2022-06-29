#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{

  Animal animal1 = Animal("Ursidae",13,"Bobby");
  Animal animal2 = Animal("Ursidae", 1, "Jorge");
  Animal animal3 = Animal("Herpestidae", 7, "Bonina");
  Animal animal4 = Animal("Ursidae", 3, "Felício");
  Ursidae e02 = Ursidae("Tony", "Urso Pardo", 9, 10.5);
  Ursidae e03 = Ursidae("Wanda", "Urso Polar", 10, 7);
  Herpestidae g01 = Herpestidae("Herpestidae", "Catita", 2, "Suricato");
  Herpestidae g02 = Herpestidae("Herpestidae", "Carolina", 2, "Suricato");
  Cuidador cuid01 = Cuidador("R$ 3000","Ana Maria Rodrigues Lopes",1234567799,"(31) 99876-6923","10/10/2000");
  Cuidador cuid2= Cuidador("R$ 4000","Fernanda Silva Santos",9472567121,"(31) 99123-8970","10/10/2000");
  Alimentacao v01 = Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje",cuid01, "Bobby");
  Alimentacao v02 = Alimentacao(2, "Ração especial", "Catita comeu direitinho",cuid2, "Catita");
  Alimentacao v03  = Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto",cuid2, "Carolina");
  Alimentacao v04 = Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby",cuid01, "Tony");
  double kgPeixeConsumidos01 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  animal1.print();
  animal2.print();
  animal3.print();
  animal4.print();
  e02.print();
  e03.print();
  g01.print();
  kgPeixeConsumidos01 = 5*2;
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.getPorcao());
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.getPorcao());
  kgPeixeConsumidos03 = e02.calcula_PEIXES_CONSUMIDOS(10);
  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
  v01.print();
  cout << " Descricao: " << v01.getdescricao() << endl << endl;
  v02.print();
  cout << " Descricao: " << v02.getdescricao() << endl<<endl;
  v03.print();
  cout << " Descricao: " << v03.getdescricao() << endl<< endl;
  v04.print();
  cout << " Descricao: " << v04.getdescricao() << endl << "\n";
  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;
  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;

  return 0;
}
