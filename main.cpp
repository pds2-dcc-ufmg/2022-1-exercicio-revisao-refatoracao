#include <iostream>
#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main(){

  double kgPeixeConsumidos = 0;
  double kgRacaoConsumidos = 0;

  Ursidae Bobby("Bobby", 13);
  Bobby.print();

  Ursidae Jorge("Jorge", 1);
  Jorge.print();

  Herpestidae Bonina("Bonina", 7);
  Bonina.print();

  Ursidae Felicio("Felicio", 3);
  Felicio.print();

  Ursidae Tony("Tony", 9);
  Tony.setEspecie("Urso Pardo");
  Tony.setkgPeixePorDia(10.5);
  Tony.print();
  
  Ursidae Wanda("Wanda", 10);
  Wanda.setEspecie("Urso Polar");
  Wanda.setkgPeixePorDia(7);
  Wanda.print();

  Herpestidae Catita("Catita", 2);
  Catita.setEspecie("Suricato");
  Catita.print();

  Herpestidae Carolina("Carolina", 2);
  Carolina.setEspecie("Suricato");
  Carolina.print();

  Cuidador Ana("Ana Maria Rodrigues Lopes", 123456779, "(31) 99876-6923", "10/10/2000", "R$ 3000");
  Ana.print();

  Cuidador Fernanda("Fernanda Silva Santos", 9472567121, "(31) 99123-8970", "08/02/1995", "R$ 4000");
  Fernanda.print();

  Alimentacao alimentacao1(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", Ana, Bobby);
  kgPeixeConsumidos += Bobby.quantidadeDeAlimentoConsumida(alimentacao1.getPorcao());

  Alimentacao alimentacao2(1, "Ração especial", "Catita comeu direitinho", Fernanda, Catita);
  kgRacaoConsumidos += Catita.quantidadeDeAlimentoConsumida(alimentacao2.getPorcao());

  Alimentacao alimentacao3(3, "Ração", "Carolina estava com um apetite e tanto", Fernanda, Carolina);
  kgRacaoConsumidos += Carolina.quantidadeDeAlimentoConsumida(alimentacao3.getPorcao());

  Alimentacao alimentacao4(10, "Peixes", "Tony comeu um pouco da comida do Bobby", Ana, Tony);
  kgPeixeConsumidos = Tony.quantidadeDeAlimentoConsumida(alimentacao4.getPorcao());



    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

    alimentacao1.print();
    alimentacao2.print();
    alimentacao3.print();
    alimentacao4.print();

    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;

    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << kgRacaoConsumidos <<endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << kgPeixeConsumidos <<endl;

    return 0;
}
