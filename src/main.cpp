#include "../include/Ursidae.hpp"
#include "../include/Herpestidae.hpp"
#include "../include/Alimentacao.hpp"

int main() {
  
  double kgPeixeConsumidos = 10;

  double kgRacaoConsumidos = 0;
  
  Animal Animal_1("Bobby", 13, "Ursidae");
  Animal_1.print();

  Animal Animal_2("Jorge", 1, "Ursidae");
  Animal_2.print();
  
  Animal Animal_3("Bonina", 7, "Herpestidae");
  Animal_3.print();

  Animal Animal_4("Felício", 3, "Ursidae");
  Animal_4.print();

  Ursidae Ursidae_1("Tony", 9, "Urso Pardo", 10.5);
  Ursidae_1.print();

  Ursidae Ursidae_2("Wanda", 10, "Urso Polar", 7);
  Ursidae_2.print();

  Herpestidae Herpestidae_1("Catita", 2, "Suricato");
  Herpestidae_1.print();

  Herpestidae Herpestidae_2("Carolina", 2, "Suricato");
  Herpestidae_2.print();

  Cuidador Cuidador_1("Ana Maria Rodrigues Lopes", 1234567799, "10/10/2000", "(31) 99876-6923", 3000);

  Cuidador Cuidador_2("Fernanda Silva Santos", 9472567121, "08/02/1995", "(31) 99123-8970", 4000);
  
  Alimentacao Alimentacao_1(2, "Peixes", "Bobby", Cuidador_1);
  Alimentacao_1.setDescricao("Bobby só quis comer 2 porções de peixes hoje");

  Alimentacao Alimentacao_2(1, "Ração especial", "Catita", Cuidador_2);
  Alimentacao_2.setDescricao("Catita comeu direitinho");

  Alimentacao Alimentacao_3(3, "Ração", "Carolina", Cuidador_2);
  Alimentacao_3.setDescricao("Carolina estava com um apetite e tanto");

  Alimentacao Alimentacao_4(10, "Peixes", "Tony", Cuidador_1);
  Alimentacao_4.setDescricao("Tony comeu um pouco da comida do Bobby");
  
  kgRacaoConsumidos += Herpestidae_1.getConsumoDeRacao(Alimentacao_2.getPorcao());
  
  kgRacaoConsumidos += Herpestidae_2.getConsumoDeRacao(Alimentacao_3.getPorcao());

  Alimentacao_2.setPorcao(2);

  kgPeixeConsumidos += Ursidae_1.getConsumoDePeixe(Alimentacao_4.getPorcao());

  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  Alimentacao_1.printAlimentacao();
  Alimentacao_2.printAlimentacao();
  Alimentacao_3.printAlimentacao();
  Alimentacao_4.printAlimentacao();

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
  
  std::cout << "Tipo de comida: " << "Ração" << std::endl
    << "Kg consumidos: " << kgRacaoConsumidos << std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl
    << "Kg consumidos: " << kgPeixeConsumidos << std::endl;

  return 0;

}
