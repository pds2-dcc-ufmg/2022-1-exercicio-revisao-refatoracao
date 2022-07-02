#include <iostream>
#include <vector>
#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){

    std::vector<Animal> ANIMAL;
    std::vector<Ursidae> URSIDAE;
    std::vector<Herpestidae> HERPESTIDAE;
    std::vector<Cuidador> CUIDADOR;
    std::vector<Alimentacao> ALIMENTACAO;

    // animal 1
    Animal animal1("Bobby",13,"Ursidae");
    ANIMAL.push_back(animal1);
    // animal 2
    Animal animal2("Jorge",1,"Ursidae");
    ANIMAL.push_back(animal2);
    // animal 3
    Animal animal3("Bonina",7,"Herpestidae");
    ANIMAL.push_back(animal3);
    // animal 4
    Animal animal4("Felício",3,"Ursidae");
    ANIMAL.push_back(animal4);

    
    // ursidae 1
    Ursidae ursidae1("Tony",9,"Ursidae","Urso Pardo",10.5);
    URSIDAE.push_back(ursidae1);
    // ursidae 2
    Ursidae ursidae2("Wanda",10,"Ursidae", "Urso Polar", 7);
    URSIDAE.push_back(ursidae2);

    // herpestidae 1
    Herpestidae herpestidae1("Catita", 2, "Herpestidae", "Suricato");
    HERPESTIDAE.push_back(herpestidae1);
    // herpestidae 2
    Herpestidae herpestidae2("Carolina", 2, "Herpestidae", "Suricato");
   
    //cuidador 1
    Cuidador cuidador1("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", 3000);
    //cuidador 2
    Cuidador cuidador2("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", 4000);

    // Alimentação 1
    Alimentacao alimentacao1(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidador1, "Bobby");
    alimentacao1.alimenta_animal();
    
    ALIMENTACAO.push_back(alimentacao1);
    // Alimentação 2
    Alimentacao alimentacao2(1, "Ração especial", "Catita comeu direitinho", cuidador2, "Catita");
    alimentacao2.alimenta_animal();
    ALIMENTACAO.push_back(alimentacao2);
    // Alimentação 3
    Alimentacao alimentacao3(3, "Ração", "Carolina estava com um apetite e tanto", cuidador2, "Carolina");
    alimentacao3.alimenta_animal();
    ALIMENTACAO.push_back(alimentacao3);
    // Alimentação 4
    Alimentacao alimentacao4(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidador1, "Tony");
    alimentacao4.alimenta_animal();
    ALIMENTACAO.push_back(alimentacao4);
    
    // PRINTS 

    for (int i = 0; i < (int)ANIMAL.size(); i++){
        ANIMAL[i].print();
        std::cout << std::endl;
    }

    for (int i = 0; i < (int)URSIDAE.size(); i++){
        URSIDAE[i].print();
        std::cout << std::endl;
    }

    for (int i = 0; i < (int)HERPESTIDAE.size(); i++){
        HERPESTIDAE[i].print();
        std::cout << std::endl;
    }
    
    std::cout <<"\n--------------------------------\n"<< std::endl;
    std::cout <<"Relatorio das alimentações\n" << std::endl;
    
    for (int i = 0; i < (int)ALIMENTACAO.size(); i++){
        ALIMENTACAO[i].print();
        ALIMENTACAO[i].Get_descricao();
    }

    std::cout << "\n-----------------------------------------------\n" << std::endl;

    alimentacao1.total_consumido();
    
    return 0;
}