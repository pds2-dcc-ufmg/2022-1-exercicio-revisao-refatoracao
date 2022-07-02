#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Alimentacao.hpp"

#include <iostream>

int main()
{

     Animal *bobby = new Ursidae("Bobby", "13");
     bobby->print();

     Animal *jorge = new Ursidae("Jorge", "1");
     jorge->print();

     Animal *bonina = new Herpestidae("Bonina", "7");
     bonina->print();

     Animal *felicio = new Ursidae("Felício", "3");
     felicio->print();

     Ursidae *tony = new Ursidae("Tony", "9", "Urso Pardo");
     tony->print();

     Ursidae *wanda = new Ursidae("Wanda", "10", "Urso Polar");
     wanda->print();

     Herpestidae *catita = new Herpestidae("Catita", "2", "Suricato");
     catita->print();

     Herpestidae *carolina = new Herpestidae("Carolina", "2", "Suricato");

     std::cout << " \n \n--------------------------------\n\nRelatorio das ";
     std::cout << "alimentações \n"
               << std::endl;

     std::string ana = "Ana Maria Rodrigues Lopes";
     std::string descricao =
         "Bobby só quis comer 2 porções de peixes hoje";
     bobby->setAlimentacao(2, ana, descricao);

     std::string fernanda = "Fernanda Silva Santos";
     descricao = "Catita comeu direitinho";
     catita->setAlimentacao(1, fernanda, descricao);

     descricao = "Carolina estava com um apetite e tanto";
     carolina->setAlimentacao(3, fernanda, descricao);

     descricao = "Tony comeu um pouco da comida do Bobby";
     tony->setAlimentacao(10, ana, descricao);

     std::cout << " \n \n--------------------------------\n\nRelatorio de kg de "
               << "comida gastos \n"
               << std::endl;

     std::cout << "Tipo de comida: Ração" << std::endl;

     std::cout << "Kg consumidos: "
               << catita->getComidaConsumida() + carolina->getComidaConsumida()
               << std::endl;

     std::cout << "\nTipo de comida: Peixe" << std::endl;
     std::cout << "Kg consumidos: "
               << bobby->getComidaConsumida() + tony->getComidaConsumida()
               << std::endl;

     return 0;
}