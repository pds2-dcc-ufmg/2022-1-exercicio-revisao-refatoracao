#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"


int main()
{

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

  Animal animal1 = Animal(13, "Ursidae", "Bobby");
  animal1.print();

  Animal animal2 = Animal(1, "Ursidae", "Jorge");
  animal2.print();

  Animal animal3 = Animal(7, "Herpestidae", "Bonina");
  animal3.print();

  Animal animal4 = Animal(3, "Ursidae", "Felício");
  animal4.print();

  Ursidae e02 = Ursidae("Urso Pardo", 10.5, 9, "Tony");
  e02.print();

  Ursidae e03 = Ursidae("Urso Polar", 7, 10, "Wanda");
  e03.print();

  Herpestidae g01 = Herpestidae("Suricato", 2, "Catita");
  g01.print();

  Herpestidae g02 = Herpestidae("Suricato", 2, "Carolina");

  Cuidador cuid01 = Cuidador("R$ 3000", "Ana Maria Rodrigues Lopes", 1234567799, "(31) 99876-6923", "10/10/2000");

  Cuidador cuid2 = Cuidador("R$ 4000", "Fernanda Silva Santos", 9472567121, "(31) 99123-8970", "08/02/1995");

  Alimentacao v01 = Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuid01, animal1);

  kgPeixeConsumidos01 = 5 * 2;

  Alimentacao v02 = Alimentacao(1, "Ração especial", "Catita comeu direitinho", cuid2, g01);

  kgRacaoConsumidos01 += g01.racao_consumida(v02.get_porcao());

  Alimentacao v03 = Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuid2, g02);

  kgRacaoConsumidos02 += g02.racao_consumida(v03.get_porcao());

  Alimentacao v04 = Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuid01, e02);

  v02.set_porcao(2);
  v03.set_comida("Ração");

  kgPeixeConsumidos03 = e02.peixes_consumidos(10);

  std::cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n"
       << std::endl;

  v01.print();
  std::cout << " Descricao: " << v01.get_descricao() << std::endl
       << std::endl;

  v02.print();
  std::cout << " Descricao: " << v02.get_descricao() << std::endl
       << std::endl;

  v03.print();
  std::cout << " Descricao: " << v03.get_descricao() << std::endl
       << std::endl;

  v04.print();
  std::cout << " Descricao: " << v04.get_descricao() << std::endl
       << "\n";

  std::cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n"
       << std::endl;

  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << std::endl;
  std::cout << "\nTipo de comida: "<< "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << std::endl;

  return 0;
}
