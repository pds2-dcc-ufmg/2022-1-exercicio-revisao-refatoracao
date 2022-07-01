#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

#include <iostream>

int main() {
    
    //Inicializacao e impressao dos dados dos Animais

    Ursidae bobby("Bobby", 13);
    bobby.print();

    Ursidae jorge("Jorge", 1);
    jorge.print();
    
    Herpestidae bonina("Bonina", 7);
    bonina.print();

    Ursidae felicio("Felício", 3);
    felicio.print();

    Ursidae tony("Tony", 9, "Urso Pardo");
    tony.setKgPeixePorDia(10.5);
    tony.print();

    Ursidae wanda("Wanda", 10, "Urso Polar");
    wanda.setKgPeixePorDia(7);
    wanda.print();

    Herpestidae catita("Catita", 2, "Suricato");
    catita.print();

    Herpestidae carolina("Carolina", 2, "Suricato");
    

    //Inicializacao dos Cuidadores
  
    Cuidador cuid01("Ana Maria Rodrigues Lopes", 1234567799, "(31) 99876-6923", "10/10/2000", "R$ 3000");

    Cuidador cuid2("Fernanda Silva Santos", 9472567121, "(31) 99123-8970", "08/02/1995", "R$ 4000");


    //Inicializacao das Alimentacoes

    Alimentacao v01(2, "Peixes", &bobby, &cuid01);
    v01.adicionarDescricao("Bobby só quis comer 2 porções de peixes hoje");

    Alimentacao v02(1, "Ração especial", &catita, &cuid2);
    v02.adicionarDescricao("Catita comeu direitinho");

    Alimentacao v03(3, "Ração", &carolina, &cuid2);
    v03.adicionarDescricao("Carolina estava com um apetite e tanto");

    Alimentacao v04(10, "Peixes", &tony, &cuid01);
    v04.adicionarDescricao("Tony comeu um pouco da comida do Bobby");


    //Impressao das Alimentacoes

    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();


    //Impressao da quantidade de comida consumida

    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << v02.getKgConsumidos()+v03.getKgConsumidos()<<std::endl;

    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << v01.getKgConsumidos()+v04.getKgConsumidos()<<std::endl;

    return 0;
}
