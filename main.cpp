#include <iostream>

#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main()
{
  Animal a1(13, "Bobby");
  Ursidae u1(a1);
  u1.print();

  Animal a2(1, "Jorge");
  Ursidae u2(a2);
  u2.print();

  Animal a3(7, "Bonina");
  Herpestidae h1(a3);
  h1.print();

  Animal a4(3, "Felicio");
  Ursidae u3(a4);
  u3.print();

  Animal a5(9, "Tony");
  a5.setEspecie("Urso Pardo");
  Ursidae u4(a5);
  u4.setkgPeixePorDia(10.5);
  u4.print();


  Animal a6(10, "Wanda");
  Ursidae e03(a6);
  e03.setEspecie("Urso Polar");
  e03.setkgPeixePorDia(7);
  e03.print();

  Animal a7(2, "Catita");
  Herpestidae g01(a7);
  g01.setEspecie("Suricato");
  g01.print();
    
  Animal a8(2, "Carolina");
  Herpestidae g02(a8);
  g02.setEspecie("Suricato");

  double kgPeixeConsumidos01 = 0;
  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;

  Cuidador cuid01("Ana Maria Rodrigues Lopes", "10/10/2000", "(31) 99876-6923", 3000, 1234567799);
  
  Cuidador cuid2("Fernanda Silva Santos", "08/02/1995", "(31) 99123-8970", 4000, 9472567121);

  Alimentacao v01(u1, cuid01, 2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje");
  kgPeixeConsumidos01 = 5*2;

  Alimentacao v02(g01, cuid2, 1, "Ração especial", "Catita comeu direitinho");
  
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.getPorcao());

  Alimentacao v03(g02, cuid2, 3, "Ração", "Carolina estava com um apetite e tanto");
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.getPorcao());

  Alimentacao v04(a5, cuid01, 10, "Peixes", "Tony comeu um pouco da comida do Bobby");
    
  v02.setPorcao(2);
  v03.setComida("Ração");

  kgPeixeConsumidos03 = u4.calculaPeixesConsumidos(10);

  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  v01.print();
  std::cout << " Descricao: " << v01.getDescricao() << std::endl;

  v02.print();
  std::cout << " Descricao: " << v02.getDescricao() << std::endl;

  v03.print();
  std::cout << " Descricao: " << v03.getDescricao() << std::endl;

  v04.print();
  std::cout << " Descricao: " << v04.getDescricao() << std::endl;

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << std::endl;

  return 0;
  
}
