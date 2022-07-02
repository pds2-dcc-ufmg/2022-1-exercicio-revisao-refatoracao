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
  animal1.setFamilia("Ursidae");
  animal1.setNome("Bobby");
  animal1.setIdade("13");
  animal1.print();
  double kgPeixeConsumidos01 = 0;
  Animal animal2;
  animal2.setFamilia("Ursidae");
  animal2.setNome("Jorge");
  animal2.setIdade("1");
  animal2.print();

  Animal animal3;
  animal3.setFamilia("Herpestidae");
  animal3.setNome("Bonina");
  animal3.setIdade("7");
  animal3.print();

  Animal animal4;
  animal4.setFamilia("Ursidae");
  animal4.setNome("Felicio");
  animal4.setIdade("3");
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
  catita.setFamilia("Herpestidae");
  catita.setNome("Catita");
  catita.setIdade("2");
  catita.setEspecie("Suricato");
  catita.print();
  
  Herpestidae carolina;
  double bonificacao01 = 0;
  carolina.setFamilia("Herpestidae");
  carolina.setNome("Carolina");
  carolina.setIdade("2");
  carolina.setEspecie("Suricato");

  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;

  Cuidador cuidador1;
  cuidador1.setNome("Ana Maria Rodrigues Lopes");
  cuidador1.setCpf("1234567799");
  cuidador1.setTelefone("(31) 99876-6923");
  cuidador1.setNascimento("10/10/2000");
  cuidador1.setSalario("R$ 3000");

  Cuidador cuidador2;
  cuidador2.setNome("Fernanda Silva Santos");
  cuidador2.setCpf("9472567121");
  cuidador2.setTelefone("(31) 99123-8970");
  cuidador2.setNascimento("08/02/1995");
  cuidador2.setSalario("R$ 4000");

  Alimentacao alimentacao1;
  alimentacao1.setPorcao(2);
  alimentacao1.setComida("Peixes");
  alimentacao1.setDescricao("Bobby so quis comer 2 porcoes de peixes hoje");
  alimentacao1.setCuidador(cuidador1);
  alimentacao1.setnomeAnimal("Bobby");
  kgPeixeConsumidos01 = 5 * 2;

  Alimentacao alimentacao2;
  alimentacao2.setPorcao(1);
  alimentacao2.setComida("Ração especial");
  alimentacao2.setDescricao("Catita comeu direitinho");
  alimentacao2.setCuidador(cuidador2);
  alimentacao2.setnomeAnimal("Catita");
  kgRacaoConsumidos01 += catita.kgConsumidosDeRacao(alimentacao2.getPorcao());

  Alimentacao alimentacao3;
  alimentacao3.setPorcao(3);
  alimentacao3.setComida("Ração");
  alimentacao3.setDescricao("Carolina estava com um apetite e tanto");
  alimentacao3.setCuidador(cuidador2);
  alimentacao3.setnomeAnimal("Carolina");
  kgRacaoConsumidos02 += carolina.kgConsumidosDeRacao(alimentacao3.getPorcao());

  Alimentacao alimentacao4;
  alimentacao4.setPorcao(10);
  alimentacao4.setComida("Peixes");
  alimentacao4.setDescricao("Tony comeu um pouco da comida do Bobby");
  alimentacao4.setCuidador(cuidador1);
  alimentacao4.setnomeAnimal("Tony");
  alimentacao2.setPorcao(2);
  alimentacao3.setComida("Ração");
  kgPeixeConsumidos03 =
      tony.calculaPeixesConsumidos(10);

  cout << " \n \n--------------------------------\n\nRelatorio das alimentacoes \n"
       << endl;

  alimentacao1.print();
  cout << " Descricao: " << alimentacao1.getDescricao() << endl
       << endl;

  alimentacao2.print();
  cout << " Descricao: " << alimentacao2.getDescricao() << endl
       << endl;

  alimentacao3.print();
  cout << " Descricao: " << alimentacao3.getDescricao() << endl
       << endl;

  alimentacao4.print();
  cout << " Descricao: " << alimentacao4.getDescricao() << endl
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
