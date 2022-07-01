#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main()
{
  //Criando Classe animal
  Animal Bobby = Animal(13,"Ursidae","Bobby");
  Bobby.print();
  Animal Jorge = Animal(1,"Ursidae","Jorge");
  Jorge.print();
  Animal Bonina = Animal(7,"Herpestidae","Bonina");
  Bonina.print();
  Animal Felicio = Animal(3,"Ursidae","Felício");
  Felicio.print();

  //Criando Classe ursos
  Ursidae Tony_urso = Ursidae(10.5,"Urso Pardo",Animal(9,"Ursidae","Tony"));
  Tony_urso.print();
  Ursidae Wanda_urso = Ursidae(7,"Urso Polar",Animal(10,"Ursidae","Wanda"));
  Wanda_urso.print();
  Ursidae Bobby_urso = Ursidae(2,"Bobby o urso curioso",Bobby);

  //Criando Classe Herpestidae
  Herpestidae Catita_suricato = Herpestidae("Suricato",Animal(2,"Herpestidae","Catita"));
  Catita_suricato.print();
  Herpestidae Carolina_suricato = Herpestidae("Suricato",Animal(2,"Herpestidae","Carolina"));

  //Criando Classe Cuidador
  Cuidador Ana_cuidadora = Cuidador("Ana Maria Rodrigues Lopes","1234567799","(31) 99876-6923","10/10/2000","R$ 3000");
  Cuidador Fernanda_cuidadora = Cuidador("Fernanda Silva Santos","9472567121","(31) 99123-8970","08/02/1995","R$ 4000");
  
  //Criando CLasse Alimentacao
  Alimentacao Alimentacao_Bobby_urso = Alimentacao(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje",Ana_cuidadora, &Bobby_urso);
  Alimentacao Alimentacao_Catita_suricato = Alimentacao(1,"Ração especial","Catita comeu direitinho",Fernanda_cuidadora,&Catita_suricato);
  Alimentacao Alimentacao_Carolina_suricato = Alimentacao(3,"Ração","Carolina estava com um apetite e tanto",Fernanda_cuidadora,&Carolina_suricato);
  Alimentacao Alimentacao_Tony_urso = Alimentacao(10,"Peixes","Tony comeu um pouco da comida do Bobby",Ana_cuidadora,&Tony_urso);

  //Calculando consumo de comida
  int PeixesConsumidos_Bobby = Bobby_urso.calcula_PEIXES_CONSUMIDOS(Alimentacao_Bobby_urso.Get_porcao());
  int RacaoConsumida_Catita = Catita_suricato.kgConsumidosDeRacao(Alimentacao_Catita_suricato.Get_porcao());
  int RacaoConsumida_Carolina = Carolina_suricato.kgConsumidosDeRacao(Alimentacao_Carolina_suricato.Get_porcao());
  int PexesConsumidos_Tony = Tony_urso.calcula_PEIXES_CONSUMIDOS(Alimentacao_Tony_urso.Get_porcao());

  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
  Alimentacao_Bobby_urso.print();
  cout << " Descricao: " << Alimentacao_Bobby_urso.Get_descricao() << endl << endl;
  Alimentacao_Catita_suricato.print();
  cout << " Descricao: " << Alimentacao_Catita_suricato.Get_descricao() << endl<<endl;
  Alimentacao_Carolina_suricato.print();
  cout << " Descricao: " << Alimentacao_Carolina_suricato.Get_descricao() << endl<< endl;
  Alimentacao_Tony_urso.print();
  cout << " Descricao: " << Alimentacao_Tony_urso.Get_descricao() << endl << "\n";
  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << RacaoConsumida_Catita+RacaoConsumida_Carolina<<endl;
  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << PeixesConsumidos_Bobby + PexesConsumidos_Tony<<endl;
  return 0;
}