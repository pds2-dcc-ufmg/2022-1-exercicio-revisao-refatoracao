#include <iostream>
#include <memory>

#include "./classes/Animal/Animal.hpp"
#include "./classes/Herpestidae/Herpestidae.hpp"
#include "./classes/Ursidae/Ursidae.hpp"
#include "./classes/Cuidador/Cuidador.hpp"
#include "./classes/Alimentacao/Alimentacao.hpp"

int main() {
  std::unique_ptr<Animal> animal1(new Ursidae());
  animal1->setName("Bobby");
  animal1->setAge(13);
  animal1->print();

  std::unique_ptr<Animal> animal2(new Ursidae());
  animal2->setName("Jorge");
  animal2->setAge(1);
  animal2->print();

  std::unique_ptr<Animal> animal3(new Herpestidae());
  animal3->setName("Bonina");
  animal3->setAge(7);
  animal3->print();

  std::unique_ptr<Animal> animal4(new Ursidae());
  animal4->setName("Felício");
  animal4->setAge(3);
  animal4->print();

  Ursidae ursidae1;
  ursidae1.setName("Tony");
  ursidae1.setAge(9);
  ursidae1.setSpecies("Urso Pardo");
  ursidae1.setAmountFishPerDayInKg(10.5);
  ursidae1.print();

  Ursidae ursidae2;
  ursidae2.setName("Wanda");
  ursidae2.setAge(10);
  ursidae2.setSpecies("Urso Polar");
  ursidae2.setAmountFishPerDayInKg(7);
  ursidae2.print();

  Herpestidae herpestidae1;
  herpestidae1.setName("Catita");
  herpestidae1.setAge(2);
  herpestidae1.setSpecies("Suricato");
  herpestidae1.print();

  Herpestidae herpestidae2;
  herpestidae2.setName("Carolina");
  herpestidae2.setAge(2);
  herpestidae2.setSpecies("Suricato");
  herpestidae2.print();

  Cuidador careTaker1;
  careTaker1.setName("Ana Maria Rodrigues Lopes");
  careTaker1.setCpf("1234567799");
  careTaker1.setPhone("(31) 99876-6923");
  careTaker1.setBirthday("10/10/2000");
  careTaker1.setWage(3000);

  Cuidador careTaker2;
  careTaker2.setName("Fernanda Silva Santos");
  careTaker2.setCpf("9472567121");
  careTaker2.setPhone("(31) 99123-8970");
  careTaker2.setBirthday("08/02/1995");
  careTaker2.setWage(4000);

  Comida comida1("Peixes", 2);
  Alimentacao alimentacao1(careTaker1, comida1, "Bobby", "Bobby só quis comer 2 porções de peixes hoje");
  
  double kgPeixeConsumidos01 = 0;
  kgPeixeConsumidos01 = 5 * 2;

  Comida comida2("Ração especial", 2);
  Alimentacao alimentacao2(careTaker2, comida2, "Catita", "Catita comeu direitinho");

  double kgRacaoConsumidos01 = 0;
  kgRacaoConsumidos01 += herpestidae1.getDeit().calcConsumedPortionsInKg(alimentacao1.getFood()->getConsumedAmount());

  Comida comida3("Ração", 3);
  Alimentacao alimentacao3(careTaker2, comida3, "Carolina", "Carolina estava com um apetite e tanto");

  double kgRacaoConsumidos02 = 0;
  kgRacaoConsumidos02 += herpestidae2.getDeit().calcConsumedPortionsInKg(alimentacao3.getFood()->getConsumedAmount());

  Comida comida4("Peixes", 10);
  Alimentacao alimentacao4(careTaker1, comida4, "Tony", "Tony comeu um pouco da comida do Bobby");

  double kgPeixeConsumidos03 = 0;
  kgPeixeConsumidos03 = ursidae2.getDeit().calcConsumedPortionsInKg(10);

  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  alimentacao1.print();
  alimentacao2.print();
  alimentacao3.print();
  alimentacao4.print();

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02<< std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03<< std::endl;

  return 0;
}
