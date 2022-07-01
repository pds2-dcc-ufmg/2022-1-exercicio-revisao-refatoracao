#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){
    //Inserção de animais (Sem espécie)
    int numAnimais = 4;
    Animal animais [numAnimais];
    animais[0] = Animal("Bobby", 13, "Ursidae");
    animais[1] = Animal("Jorge", 1, "Ursidae");
    animais[2] = Animal("Bonina", 7, "Herpestidae");
    animais[3] = Animal("Felício", 3, "Ursidae");

    for (auto i: animais){
        i.print();
    }

    //Inserção de ursidaes (com espécie)
    int numUrsidaes = 2;
    Ursidae ursidaes [numUrsidaes];
    ursidaes[0] = Ursidae ("Tony", 9, "Urso Pardo", 10.5);
    ursidaes[1] = Ursidae ("Wanda", 10, "Urso Polar", 7);

    for (auto i: ursidaes){
        i.print();
    }

    int numHerpestidae = 2;
    Herpestidae herpestidaes [numHerpestidae];
    herpestidaes[0] = Herpestidae ("Catita", 2, "Suricato");
    herpestidaes[1] = Herpestidae ("Carolina", 2, "Suricato");
    herpestidaes[0].print();


    int numCuidadores = 2;
    Cuidador cuidadores[numCuidadores];
    cuidadores[0] = Cuidador("Ana Maria Rodrigues Lopes", 1234567799, "(31) 99876-6923", "10/10/2000", "R$ 3000");
    cuidadores[1] = Cuidador("Fernanda Silva Santos", 9472567121, "(31) 99876-6923", "08/02/1995","R$ 4000");

    
    int numAlimentacao = 4;
    Alimentacao alimentacoes[numAlimentacao];
    alimentacoes[0]= Alimentacao (animais[0], cuidadores[0], "Bobby só quis comer 2 porções de peixes hoje", 2, "Peixes");
    alimentacoes[1]= Alimentacao (herpestidaes[0], cuidadores[1], "Catita comeu direitinho", 1, "Ração especial");
    alimentacoes[2]= Alimentacao (herpestidaes[1], cuidadores[1], "Carolina estava com um apetite e tanto", 3, "Ração");
    alimentacoes[3]= Alimentacao (ursidaes[0], cuidadores[0], "Tony comeu um pouco da comida do Bobby", 10, "Peixes");

    std::cout << std::endl << std::endl <<"--------------------------------"<< std::endl << std::endl << "Relatorio das alimentações \n" << std::endl;
    
    for (auto i : alimentacoes){
      i.print();
      std::cout << " Descricao: " << i.getDescricao() <<  std::endl << std::endl;
    }

    std::cout << std::endl << std::endl <<"--------------------------------"<< std::endl << std::endl << "Relatorio de kg de comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << herpestidaes[0].calcularRacaoConsumida(alimentacoes[1].getPorcao()) + herpestidaes[1].calcularRacaoConsumida(alimentacoes[2].getPorcao()) << std::endl;

    std::cout << std::endl << "Tipo de comida: " << "Peixe" << std::endl;
    int kgConsumidosAnimal = 5*2;
    std::cout << "Kg consumidos: " << kgConsumidosAnimal +ursidaes[0].calcularPeixesConsumidos(alimentacoes[3].getPorcao())<< std::endl;

    return 0;
}
