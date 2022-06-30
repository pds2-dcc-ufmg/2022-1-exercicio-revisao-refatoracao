#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{
  Animal Animal_01 = Animal(13,"Bobby","Ursidae");
  Animal Animal_02 = Animal(1,"Jorge","Ursidae");
  Animal Animal_03 = Animal(7,"Bonina","Herpestidae");
  Animal Animal_04 = Animal(3,"Felício","Ursidae");

  Animal_01.print();
  Animal_02.print();
  Animal_03.print();
  Animal_04.print();

  Ursidae Urso_01 = Ursidae(9,"Tony","Urso Pardo",10.5);
  Ursidae Urso_02 = Ursidae(10,"Wanda","Urso Polar",7.0);

  int numAtendimentos02 = 0;
  double comissao02 = 0;
  int numAtendimentos03 = 0;
  double comissao03 = 0;

  Urso_01.print();
  Urso_02.print();
  Herpestidae Suricato_01 = Herpestidae(2,"Catita","Suricato");
  Herpestidae Suricato_02 = Herpestidae(2,"Carolina","Suricato");
  Suricato_01.print();
  Suricato_02.print();  

  Cuidador Cuidador_01 = Cuidador("Ana Maria Rodrigues Lopes","1234567799","(31) 99876-6923","10/10/2000","R$ 3000");
  Cuidador Cuidador_02 = Cuidador("Fernanda Silva Santos","9472567121","(31) 99123-8970","08/02/1995","R$ 4000");
  
  Alimentacao Alimentacao_01 = Alimentacao(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje",Cuidador_01,Animal_01); 
  Alimentacao Alimentacao_02 = Alimentacao(1,"Ração especial","Catita comeu direitinho",Cuidador_02,Suricato_01);
  Alimentacao Alimentacao_03 = Alimentacao(3,"Ração","Carolina estava com um apetite e tanto",Cuidador_02,Suricato_02);
  Alimentacao Alimentacao_04 = Alimentacao(10,"Peixes","Tony comeu um pouco da comida do Bobby",Cuidador_01,Urso_01);

  Alimentacao_02.porcao = 2;
  Alimentacao_03.comida = "Ração";
  
  Alimentacao_01.kgComidaConsumida = (5.0*Alimentacao_01.porcao);
  Alimentacao_02.kgComidaConsumida = (Suricato_01.kgConsumidosDeRacao(Alimentacao_02.porcao));
  Alimentacao_03.kgComidaConsumida = (Suricato_02.kgConsumidosDeRacao(Alimentacao_03.porcao));
  Alimentacao_04.kgComidaConsumida = (Urso_01.calculaPeixesConsumidos(Alimentacao_04.porcao));


  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  Alimentacao_01.print();
  Alimentacao_02.print();
  Alimentacao_03.print();
  Alimentacao_04.print();

  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << Alimentacao_02.kgComidaConsumida + Alimentacao_03.kgComidaConsumida << endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << Alimentacao_01.kgComidaConsumida + Alimentacao_04.kgComidaConsumida <<endl;

    return 0;
}
