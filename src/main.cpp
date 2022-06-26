#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main(){

  Animal animal_01{"Ursidae", "Bobby", "13"};
    animal_01.print_animal();

  Animal animal_02{"Ursidae", "Jorge", "1"};
    animal_02.print_animal();

  Animal animal_03{"Herpestidae", "Bonina", "7"};
    animal_03.print_animal();

  Animal animal_04{"Ursidae", "Felício", "3"};
    animal_04.print_animal();


  Ursidae ursidae_01{"Tony", 9, "Urso Pardo", 10.5};
    ursidae_01.print_ursidae();

  Ursidae ursidae_02{"Wanda", 10, "Urso Polar", 7};
    ursidae_02.print_ursidae();

  Herpestidae herpestidae_01{"Herpestidae", "Catita", "2", "Suricato"};
    herpestidae_01.print_herpestidae();

  Herpestidae herpestidae_02{"Herpestidae", "Carolina", "2", "Suricato"};

  
  Cuidador cuidador_01{"Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000"};

  Cuidador cuidador_02{"Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000"};


  Alimentacao alimento_animal_01{2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidador_01, "Bobby"};
  double kg_Peixe_Consumidos_Animal_01 = 0;
  kg_Peixe_Consumidos_Animal_01 = 5*2;

  Alimentacao alimento_herpestidae_01{1, "Ração especial", "Catita comeu direitinho", cuidador_02, "Catita"};
  double kg_Racao_Consumidos_Herpestidae_01 = 0;
  kg_Racao_Consumidos_Herpestidae_01 += herpestidae_01.kgConsumidosDeRacao(alimento_herpestidae_01.porcao);

  Alimentacao alimento_herpestidae_02{3, "Ração", "Carolina estava com um apetite e tanto", cuidador_02, "Carolina"};
  double kg_Racao_Consumidos_Herpestidae_02 = 0;
  kg_Racao_Consumidos_Herpestidae_02 += herpestidae_02.kgConsumidosDeRacao(alimento_herpestidae_02.porcao);

  Alimentacao alimento_ursidae_01{10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidador_01, "Tony"};
  double kg_Peixe_Consumidos_Ursidae_01 = 0;
  kg_Peixe_Consumidos_Ursidae_01 = ursidae_01.calcula_PEIXES_CONSUMIDOS(10);


  cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  alimento_animal_01.print_alimentacao();
  cout << " Descricao: " << alimento_animal_01.getDescricao << endl << endl;

  alimento_herpestidae_01.print_alimentacao();
  cout << " Descricao: " << alimento_herpestidae_01.getDescricao << endl <<endl;

  alimento_herpestidae_02.print_alimentacao();
  cout << " Descricao: " << alimento_herpestidae_02.getDescricao << endl << endl;

  alimento_ursidae_01.print_alimentacao();
  cout << " Descricao: " << alimento_ursidae_01.getDescricao << endl << "\n";


  cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kg_Racao_Consumidos_Herpestidae_01+kg_Racao_Consumidos_Herpestidae_02 << endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kg_Peixe_Consumidos_Animal_01+kg_Peixe_Consumidos_Ursidae_01 << endl;

  return 0;
}
