#include <iostream>
#include <vector>
#include <memory>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main()
{   double kgPeixeConsumidos = 0;
    double kgRacaoConsumidos = 0;

    std::shared_ptr<Animal> animal1(new Animal("Bobby", "Ursidae", 13));
    animal1->print();

    std::shared_ptr<Animal> animal2(new Animal("Jorge", "Ursidae", 1));
    animal2->print();

    std::shared_ptr<Animal> animal3(new Animal("Bonina", "Herpestidae", 7));
    animal3->print();

    std::shared_ptr<Animal> animal4(new Animal("Felício", "Ursidae", 3));
    animal4->print();

    std::shared_ptr<Animal> ursidae1(new Ursidae("Tony", "Urso Pardo", 9));
    ursidae1->print();

    std::shared_ptr<Animal> ursidae2(new Ursidae("Wanda", "Urso Polar", 10));
    ursidae2->print();

    std::shared_ptr<Animal> herpesticidae1(new Herpestidae("Catita", "Suricato", 2));
    herpesticidae1->print();

    std::shared_ptr<Animal> herpesticidae2(new Herpestidae("Carolina", "Suricato", 2));
    herpesticidae2->print();

    std::shared_ptr<Cuidador> cuid01(new Cuidador("Ana Maria Rodrigues Lopes", "R$ 3000", 1234567799, 31998766923, "10/10/2000"));

    std::shared_ptr<Cuidador> cuid02(new Cuidador("Fernanda Silva Santos", "R$ 4000", 9472567121, 31991238970, "08/02/1995"));

    Alimentacao alim1(cuid01, animal1,"Peixes", 2);
    alim1.setDesc("Bobby só quis comer 2 porções de peixes hoje");
    kgPeixeConsumidos += alim1.calcKgConsumido();

    Alimentacao alim2(cuid02, herpesticidae1, "Ração especial", 2);
    alim2.setDesc("Catita comeu direitinho");
    kgRacaoConsumidos += alim2.calcKgConsumido();

    Alimentacao alim3(cuid02, herpesticidae2, "Ração", 3);
    alim3.setDesc("Carolina estava com um apetite e tanto");
    kgRacaoConsumidos += alim3.calcKgConsumido();

    Alimentacao alim4(cuid01, ursidae1, "Peixes", 10);
    alim4.setDesc("Tony comeu um pouco da comida do Bobby");
    kgPeixeConsumidos += alim4.calcKgConsumido();

    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    alim1.print();
    std::cout << " Descricao: " << alim1.getDesc() << std::endl << std::endl;

    alim2.print();
    std::cout << " Descricao: " << alim2.getDesc() << std::endl<<std::endl;

    alim3.print();
    std::cout << " Descricao: " << alim3.getDesc() << std::endl<< std::endl;

    alim4.print();
    std::cout << " Descricao: " << alim4.getDesc() << std::endl << "\n";

    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de _comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos<<std::endl;

    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos<<std::endl;

    return 0;    
}