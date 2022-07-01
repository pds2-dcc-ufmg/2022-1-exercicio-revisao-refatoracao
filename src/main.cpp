#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include <vector>

int main(){

    Ursidae animal1 = Ursidae(13, "Bobby", "Ursidae", "Urso Polar");
    animal1.print();
    Ursidae animal2 = Ursidae(1, "Jorge", "Ursidae", "Urso Panda");
    animal2.print();
    Herpestidae animal3 = Herpestidae(7, "Bonina", "Herpestidae","Mangusto");
    animal3.print();
    Ursidae animal4 = Ursidae(3, "Felício", "Ursidae", "Urso Branco");
    animal4.print();
    Ursidae animal5 = Ursidae(9, "Tony", "Ursidae", "Urso Pardo");
    animal5.print();
    Ursidae animal6 = Ursidae(10, "Wanda", "Ursidae", "Urso Polar");
    animal6.print();
    Herpestidae animal7 = Herpestidae(2, "Catita", "Herpestidae", "Suricato");
    animal7.print();
    Herpestidae animal8 = Herpestidae(2, "Carolina", "Herpestidae","Suricato");
    animal8.print();

    Cuidador cuidador1 = Cuidador("Ana Maria Rodrigues Lopes", "(31) 99876-6923");
    Cuidador cuidador2 = Cuidador("Fernanda Silva Santos", "(31) 99123-8970");

    std::vector<Alimentacao> alimentacoesDoDia;
    alimentacoesDoDia.push_back (Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidador1, animal1));
    alimentacoesDoDia.push_back (Alimentacao(1, "Ração especial", "Catita comeu direitinho", cuidador2, animal7));
    alimentacoesDoDia.push_back (Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuidador2, animal8));
    alimentacoesDoDia.push_back (Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidador1, animal5));
    
    std::cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n"
        << std::endl;
    for (Alimentacao alimentacao: alimentacoesDoDia){
        alimentacao.print();
    }

    std::cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n"
        << std::endl;
    std::cout << "Tipo de comida: "
        << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << animal7.kgConsumidosDeRacao(1, 1.0) + animal8.kgConsumidosDeRacao(3, 1.0)<< std::endl;

    std::cout << "\nTipo de comida: "
        << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << animal1.calculaPeixesConsumidos(2, 5) + animal5.calculaPeixesConsumidos(10, 5) << std::endl;

    return 0;
}
