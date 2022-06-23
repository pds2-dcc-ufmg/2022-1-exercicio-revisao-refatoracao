#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{
  //variaveis perdidas
  double kgPeixeConsumidos01 = 0;
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  double bonificacao01 = 0;

  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;


  Animal ursidaeBobbyAnimal(13, "Ursidae", "Bobby");
  ursidaeBobbyAnimal.print();

  Animal ursidaeJorgeAnimal(1, "Ursidae", "Jorge");
  ursidaeJorgeAnimal.print();

  Animal harpestidaeBoninaAnimal(7, "Herpestidae", "Bonina");
  harpestidaeBoninaAnimal.print();

  Animal ursidaeFelicioAnimal(3, "Ursidae", "Felício");
  ursidaeFelicioAnimal.print();

  Ursidae ursidaeTony(9, "Tony", "Urso Pardo", 10.5);
  ursidaeTony.print();


  Ursidae ursidaeWanda(10, "Wanda", "Urso Polar", 7);
  ursidaeWanda.print();

  Herpestidae herpestidaeCatita(2, "Catita", "Suricato");
  herpestidaeCatita.print();

  Herpestidae herpestidaeCarolina(2, "Carolina", "Suricato");

  
  Cuidador cuid01;
  cuid01.NOME = "Ana Maria Rodrigues Lopes";
	cuid01.cpf = "1234567799";
	cuid01.Telefone = "(31) 99876-6923";
	cuid01.BIRTH = "10/10/2000";
  cuid01.salario = "R$ 3000";

  Cuidador cuid2;
  cuid2.NOME = "Fernanda Silva Santos";
	cuid2.cpf = "9472567121";
	cuid2.Telefone = "(31) 99123-8970";
	cuid2.BIRTH = "08/02/1995";

  cuid2.salario = "R$ 4000";
  Alimentacao v01;
  v01.porcao= 2;
  v01.comida = "Peixes";
  v01.descricao = "Bobby só quis comer 2 porções de peixes hoje";
  v01.cuid = cuid01;
  v01.nomeAnimal = "Bobby";
  kgPeixeConsumidos01 = 5*2;
  Alimentacao v02;
  v02.porcao= 1;
  v02.comida = "Ração especial";
  v02.descricao = "Catita comeu direitinho";
  v02.cuid = cuid2;
  v02.nomeAnimal = "Catita";
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.porcao);

  Alimentacao v03;
  v03.porcao= 3;
  v03.comida = "Ração";
  v03.descricao = "Carolina estava com um apetite e tanto";
  v03.cuid = cuid2;
  v03.nomeAnimal = "Carolina";
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.porcao);

  Alimentacao v04;
  v04.porcao= 10;
  v04.comida = "Peixes";
  v04.descricao = "Tony comeu um pouco da comida do Bobby";
  v04.cuid = cuid01;
  v04.nomeAnimal = "Tony";
  v02.porcao = 2;
  v03.comida = "Ração";
  kgPeixeConsumidos03 = 
  e02.calcula_PEIXES_CONSUMIDOS(10);

  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  v01.print();
  cout << " Descricao: " << v01.descricao << endl << endl;

  v02.print();
  cout << " Descricao: " << v02.descricao << endl<<endl;

  v03.print();
  cout << " Descricao: " << v03.descricao << endl<< endl;

  v04.print();
  cout << " Descricao: " << v04.descricao << endl << "\n";

  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;

  return 0;
}
