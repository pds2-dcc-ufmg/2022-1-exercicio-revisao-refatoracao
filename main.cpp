#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{

  Animal animal1;
  animal1.familia = "Ursidae";
  animal1.nome = "Bobby";
  animal1.idade = "13";
  animal1.print();
  double kgPeixeConsumidos01 = 0;
  Animal animal2;
  animal2.familia = "Ursidae";
  animal2.nome = "Jorge";
  animal2.idade = "1";
  animal2.print();

  Animal animal3;
  animal3.familia = "Herpestidae";
  animal3.nome = "Bonina";
  animal3.idade = "7";
  animal3.print();

  Animal animal4;
  animal4.familia = "Ursidae";
  animal4.nome = "Felicio";
  animal4.idade = "3";
  animal4.print();

  Ursidae tony;
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  tony.nome = "Tony";
  tony.idade = 9;
  tony.especie = "Urso Pardo";
  tony.kgPeixePorDia = 10.5;
  tony.print();

  Ursidae wanda;
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  wanda.nome = "Wanda";
  wanda.idade = 10;
  wanda.especie = "Urso Polar";
  wanda.kgPeixePorDia = 7;
  wanda.print();

  Herpestidae catita;
  catita.familia = "Herpestidae";
  catita.nome = "Catita";
  catita.idade = "2";
  catita.especie = "Suricato";
  catita.print();
  
  Herpestidae carolina;
  double bonificacao01 = 0;
  carolina.familia = "Herpestidae";
  carolina.nome = "Carolina";
  carolina.idade = "2";
  carolina.especie = "Suricato";

  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;

  Cuidador cuidador1;
  cuidador1.nome = "Ana Maria Rodrigues Lopes";
  cuidador1.cpf = "1234567799";
  cuidador1.telefone = "(31) 99876-6923";
  cuidador1.nascimento = "10/10/2000";
  cuidador1.salario = "R$ 3000";

  Cuidador cuidador2;
  cuidador2.nome = "Fernanda Silva Santos";
  cuidador2.cpf = "9472567121";
  cuidador2.telefone = "(31) 99123-8970";
  cuidador2.nascimento = "08/02/1995";
  cuidador2.salario = "R$ 4000";

  Alimentacao alimentacao1;
  alimentacao1.porcao = 2;
  alimentacao1.comida = "Peixes";
  alimentacao1.descricao = "Bobby so quis comer 2 porcoes de peixes hoje";
  alimentacao1.cuid = cuidador1;
  alimentacao1.nomeAnimal = "Bobby";
  kgPeixeConsumidos01 = 5 * 2;

  Alimentacao alimentacao2;
  alimentacao2.porcao = 1;
  alimentacao2.comida = "Ração especial";
  alimentacao2.descricao = "Catita comeu direitinho";
  alimentacao2.cuid = cuidador2;
  alimentacao2.nomeAnimal = "Catita";
  kgRacaoConsumidos01 += catita.kgConsumidosDeRacao(alimentacao2.porcao);

  Alimentacao alimentacao3;
  alimentacao3.porcao = 3;
  alimentacao3.comida = "Ração";
  alimentacao3.descricao = "Carolina estava com um apetite e tanto";
  alimentacao3.cuid = cuidador2;
  alimentacao3.nomeAnimal = "Carolina";
  kgRacaoConsumidos02 += carolina.kgConsumidosDeRacao(alimentacao3.porcao);

  Alimentacao alimentacao4;
  alimentacao4.porcao = 10;
  alimentacao4.comida = "Peixes";
  alimentacao4.descricao = "Tony comeu um pouco da comida do Bobby";
  alimentacao4.cuid = cuidador1;
  alimentacao4.nomeAnimal = "Tony";
  alimentacao2.porcao = 2;
  alimentacao3.comida = "Ração";
  kgPeixeConsumidos03 =
      tony.calculaPeixesConsumidos(10);

  cout << " \n \n--------------------------------\n\nRelatorio das alimentacoes \n"
       << endl;

  alimentacao1.print();
  cout << " Descricao: " << alimentacao1.descricao << endl
       << endl;

  alimentacao2.print();
  cout << " Descricao: " << alimentacao2.descricao << endl
       << endl;

  alimentacao3.print();
  cout << " Descricao: " << alimentacao3.descricao << endl
       << endl;

  alimentacao4.print();
  cout << " Descricao: " << alimentacao4.descricao << endl
       << "\n";

  cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n"
       << endl;
  cout << "Tipo de comida: "
       << "Racao" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << endl;

  cout << "\nTipo de comida: "
       << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << endl;

  return 0;
}
