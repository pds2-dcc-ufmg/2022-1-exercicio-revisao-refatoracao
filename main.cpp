#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main(){
  
  double kgPeixeConsumidos01 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  
  Ursidae animal1(13,"Bobby","",0);
  animal1.print();
 
  Ursidae animal2(1,"Jorge","",0);
  animal2.print();

  Herpestidae animal3(7,"Herpestidae","Bonina","");
  animal3.print();

  Ursidae animal4(3,"Felício","",0);
  animal4.print();

  Ursidae e02(9,"Tony","Urso Pardo",10.5);
  e02.print();

  Ursidae e03(10,"Wanda","Urso Polar",7);
  e03.print();

  Herpestidae g01(2,"Herpestidae","Catita","Suricato");
  g01.print();
  
  Herpestidae g02(2,"Herpestidae","Carolina","Suricato");

  Cuidador cuid01("R$ 3000","Ana Maria Rodrigues Lopes","1234567799","(31) 99876-6923","10/10/2000");
  Cuidador cuid2("R$ 4000","Fernanda Silva Santos","9472567121","(31) 99123-8970","08/02/1995");

  Alimentacao v01(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje","Bobby");
  v01.cuid = cuid01;
  kgPeixeConsumidos01 = e02.calculaPeixesConsumidos(v01.getPorcao());
  
  Alimentacao v02(1,"Ração especial","Catita comeu direitinho","Catita");
  v02.cuid = cuid2;
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.getPorcao());

  Alimentacao v03(3,"Ração","Carolina estava com um apetite e tanto","Carolina");
  v03.cuid = cuid2;
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.getPorcao());

  Alimentacao v04(10,"Peixes","Tony comeu um pouco da comida do Bobby","Tony");
  v04.cuid = cuid01;
  
  v02.setPorcao(2);
  v03.setComida("Ração");
  
  kgPeixeConsumidos03 = e02.calculaPeixesConsumidos(10);

  cout <<endl<<endl<<"--------------------------------"<<endl<<endl<<"Relatorio das alimentações"<<endl<<endl;

  v01.print();
  v02.print();
  v03.print();
  v04.print();

  cout <<endl<<endl<< "--------------------------------"<<endl<<endl<<"Relatorio de kg de comida gastos"<<endl<<endl;
  cout << "Tipo de comida: "<< "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 <<endl;

  cout <<endl<< "Tipo de comida: "<< "Peixe" << endl;
  cout <<"Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 <<endl;

  return 0;
}
