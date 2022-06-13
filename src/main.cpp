#include <iostream>

#include "./classes/Animal/Animal.hpp"
#include "./classes/Herpestidae/Herpestidae.hpp"
#include "./classes/Ursidae/Ursidae.hpp"
#include "./classes/Cuidador/Cuidador.hpp"
#include "./classes/Alimentacao/Alimentacao.hpp"

int main() {
  Animal* animal1 = new Ursidae();
  animal1->setName("Bobby");
  animal1->setAge("13");
  animal1->print();

  double kgPeixeConsumidos01 = 0;
  Animal* animal2 = new Ursidae();
  animal2->setName("Jorge");
  animal2->setAge("1");
  animal2->print();

  Animal* animal3 = new Herpestidae();
  animal3->setName("Bonina");
  animal3->setAge("7");
  animal3->print();

  Animal* animal4 = new Ursidae();
  animal4->setName("Felício");
  animal4->setAge("3");
  animal4->print();

  Ursidae ursidae1;
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  ursidae1.setName("Tony");
  ursidae1.setAge("9");
  ursidae1.setSpecies("Urso Pardo");
  ursidae1.setAmountFishPerDayInKg(10.5);
  ursidae1.print();

  Ursidae ursidae2;
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  ursidae2.setName("Wanda");
  ursidae2.setAge("10");
  ursidae2.setSpecies("Urso Polar");
  ursidae2.setAmountFishPerDayInKg(7);
  ursidae2.print();

  Herpestidae herpestidae1;
  herpestidae1.setName("Catita");
  herpestidae1.setAge("2");
  herpestidae1.setSpecies("Suricato");
  herpestidae1.print();

  Herpestidae herpestidae2;
  double bonificacao01 = 0;
  herpestidae2.setName("Carolina");
  herpestidae2.setAge("2");
  herpestidae2.setSpecies("Suricato");

  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;

  Cuidador careTaker1;
  careTaker1.setName("Ana Maria Rodrigues Lopes");
  careTaker1.setCpf("1234567799");
  careTaker1.setPhone("(31) 99876-6923");
  careTaker1.setBirthday("10/10/2000");
  careTaker1.setWage("R$ 3000");

  Cuidador careTaker2;
  careTaker2.setName("Fernanda Silva Santos");
  careTaker2.setCpf("9472567121");
  careTaker2.setPhone("(31) 99123-8970");
  careTaker2.setBirthday("08/02/1995");
  careTaker2.setWage("R$ 4000");

  Alimentacao alimentacao1;
  alimentacao1.setAmount(2);
  alimentacao1.setFoodType("Peixes");
  alimentacao1.setDescription("Bobby só quis comer 2 porções de peixes hoje");
  alimentacao1.setResponsable(careTaker1);
  alimentacao1.setAnimalName("Bobby");
  kgPeixeConsumidos01 = 5 * 2;

  Alimentacao alimentacao2;
  alimentacao2.setAmount(1);
  alimentacao2.setFoodType("Ração especial");
  alimentacao2.setDescription("Catita comeu direitinho");
  alimentacao2.setResponsable(careTaker2);
  alimentacao2.setAnimalName("Catita");
  kgRacaoConsumidos01 += herpestidae1.consumedPortionsInKg(alimentacao1.getAmount());

  Alimentacao alimentacao3;
  alimentacao3.setAmount(3);
  alimentacao3.setFoodType("Ração");
  alimentacao3.setDescription("Carolina estava com um apetite e tanto");
  alimentacao3.setResponsable(careTaker2);
  alimentacao3.setAnimalName("Carolina");
  kgRacaoConsumidos02 += herpestidae2.consumedPortionsInKg(alimentacao3.getAmount());

  Alimentacao alimentacao4;
  alimentacao4.setAmount(10);
  alimentacao4.setFoodType("Peixes");
  alimentacao4.setDescription("Tony comeu um pouco da comida do Bobby");
  alimentacao4.setResponsable(careTaker1);
  alimentacao4.setAnimalName("Tony");

  alimentacao2.setAmount(2);
  alimentacao3.setFoodType("Ração");

  kgPeixeConsumidos03 = ursidae2.consumedPortionsInKg(10);

  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  alimentacao1.print();
  std::cout << " Descricao: " << alimentacao1.getDescription() << std::endl << std::endl;

  alimentacao2.print();
  std::cout << " Descricao: " << alimentacao2.getDescription() << std::endl << std::endl;

  alimentacao3.print();
  std::cout << " Descricao: " << alimentacao3.getDescription() << std::endl << std::endl;

  alimentacao4.print();
  std::cout << " Descricao: " << alimentacao4.getDescription() << std::endl << "\n";

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02<< std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03<< std::endl;

  return 0;
}
