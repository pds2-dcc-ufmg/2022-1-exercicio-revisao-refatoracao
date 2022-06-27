#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include <vector>

int main(){

    Ursidae* animal1 = new Ursidae(13, "Bobby", "Urso Polar");
    Ursidae* animal2 = new Ursidae(1, "Jorge", "Urso Panda");
    Herpestidae* animal3 = new Herpestidae(7, "Bonina", "Mangusto");
    Ursidae* animal4 = new Ursidae(3, "Felício", "Urso Branco");
    Ursidae* animal5 = new Ursidae(9, "Tony", "Urso Pardo");
    Ursidae* animal6 = new Ursidae(10, "Wanda", "Urso Polar");
    Herpestidae* animal7 = new Herpestidae(2, "Catita", "Suricato");
    Herpestidae* animal8 = new Herpestidae(2, "Carolina", "Suricato");

    Cuidador* cuidador1 = new Cuidador("Ana Maria Rodrigues Lopes", "(31) 99876-6923");
    Cuidador* cuidador2 = new Cuidador("Fernanda Silva Santos", "(31) 99123-8970");

    std::vector<Alimentacao*> alimentacoesDoDia;
    alimentacoesDoDia.push_back (new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidador1, animal1));
    alimentacoesDoDia.push_back (new Alimentacao(1, "Ração especial", "Catita comeu direitinho", cuidador2, animal7));
    alimentacoesDoDia.push_back (new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuidador2, animal8));
    alimentacoesDoDia.push_back (new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidador1, animal5));
    
    std::cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n"
        << std::endl;
    for (Alimentacao* alimentacao: alimentacoesDoDia){
        alimentacao->print();
    }

    std::cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n"
        << std::endl;
    std::cout << "Tipo de comida: "
        << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << animal7->kgConsumidosDeRacao(1, 1.0) + animal8->kgConsumidosDeRacao(3, 1.0)<< std::endl;

    std::cout << "\nTipo de comida: "
        << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << animal1->calculaPeixesConsumidos(2, 5) + animal5->calculaPeixesConsumidos(10, 5) << std::endl;

    return 0;
}
