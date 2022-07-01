#include <iostream>

#include "Alimentacao.hpp"

int main(){
    
    Animal* an1 = new Animal("Bobby", 13, "Ursidae");
    an1->infoA();
    std::cout << "" << std::endl;
    Animal* an2 = new Animal("Jorge", 1, "Ursidae");
    an2->infoA();
    std::cout << "" << std::endl;
    Animal* an3 = new Animal("Bonina", 7, "Herpestidae");
    an3->infoA();
    std::cout << "" << std::endl;
    Animal* an4 = new Animal("Felicio", 3, "Ursidae");
    an4->infoA();
    std::cout << "" << std::endl;

    Ursidae* u1 = new Ursidae("Tony", 9, "Urso Pardo");
    u1->infoU();
    std::cout << "" << std::endl;
    Ursidae* u2 = new Ursidae("Wanda", 10, "Urso Polar");
    u2->infoU();
    std::cout << "" << std::endl;

    Herpestidae* h1 = new Herpestidae("Catita", 2, "Suricato");
    h1->infoH();
    std::cout << "" << std::endl;
    Herpestidae* h2 = new Herpestidae("Carolina", 2, "Suricato");
    h2 ->infoH();
    std::cout << "" << std::endl;

    Cuidador c1;
    c1.setNome("Ana Maria Rodrigues Lopes");
    Cuidador c2;
    c2.setNome("Fernanda Silva Santos");

    Alimentacao* A1 = new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", c1, "Bobby");
    Alimentacao* A2 = new Alimentacao(1, "Racao", "Catita comeu direitinho", c2, "Catita");
    Alimentacao* A3 = new Alimentacao(3, "Racao", "Carolina estava com um apetite e tanto", c2, "Carolina");
    Alimentacao* A4 = new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", c1, "Tony");

    std::cout << "\n--------------------------------\n" << std::endl;
    std::cout << "Relatorio das alimentações\n" << std::endl;

    A1->print();
    std::cout << "" << std::endl;
    A2->print();
    std::cout << "" << std::endl;
    A3->print();
    std::cout << "" << std::endl;
    A4->print();

    std::cout << "\n--------------------------------\n" << std::endl;
    std::cout << "Relatorio de kg de comida gastos\n" << std::endl;

    std::cout << "Tipo de comida: Ração" << std::endl;
    std::cout << "Kg consumidos: " << A2->kgComidaConsumidos() + A3->kgComidaConsumidos() << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Tipo de comida: Peixes" << std::endl;
    std::cout << "Kg consumidos: " << A1->kgComidaConsumidos() + A4->kgComidaConsumidos() << std::endl;

    delete an1, an2, an3, an4, u1, u2, h1, h2, A1, A2, A3, A4;

    return 0;
}