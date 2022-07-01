#include <iostream>
#include <vector>
const std::string especieIndefinida = "";

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){

    Cuidador ana = Cuidador("Ana Maria Rodrigues Lopes");
    Cuidador fernanda = Cuidador("Fernanda Silva Santos");

    std::vector<Animal*> animais;

    /*
    declarar por referencia para acessar os 
    metodos virtuais das classes polimorficas 
    */

    Animal* bobby = new Ursidae("Bobby", 13, especieIndefinida);
    Animal* jorge = new Ursidae("Jorge", 1, especieIndefinida);
    Animal* bonina = new Herpestidae("Bonina", 7, especieIndefinida, "Ração"); 
    Animal* felicio = new Ursidae("Felício", 3, especieIndefinida);
    Animal* tony= new Ursidae("Tony", 9, "Urso Pardo");
    Animal* wanda = new Ursidae("Wanda", 10, "Urso Polar");
    Animal* catita = new Herpestidae("Catita", 2, "Suricato", "Ração especial");
    Animal* carolina = new Herpestidae("Carolina", 2, especieIndefinida, "Ração"); //herpestidae come ração, então carolina é herpestidae


    animais.push_back(bobby);
    animais.push_back(jorge);
    animais.push_back(bonina);
    animais.push_back(felicio);
    animais.push_back(catita);
    animais.push_back(wanda);
    animais.push_back(carolina);
    animais.push_back(tony);

    for(int i = 0; i<animais.size(); i++){

        if(animais[i]->getNomeAnimal()!="Carolina"){
            animais[i]->printDados();
        }
    }

    bobby->alimentar("Bobby só quis comer 2 porções de peixes hoje", 2, ana);
    catita->alimentar("Catita comeu direitinho", 1, fernanda);
    carolina->alimentar("Carolina estava com um apetite e tanto", 3, fernanda);
    tony->alimentar("Tony comeu um pouco da comida do Bobby", 10, ana);

    std::cout << std::endl << "--------------------------------" << std::endl;

    std::cout << "\nRelatorio das alimentações\n" << std::endl;

    for(int i = 0; i<animais.size(); i++){
        
        if(animais[i]->getAlimentacao()!=nullptr){

            std::cout << "Animal: " << animais[i]->getNomeAnimal() << std::endl;

            Alimentacao* a = animais[i]->getAlimentacao();
            a->printRelatorio();
        }
    }

    std::cout << std::endl << "--------------------------------" << std::endl;

    std::cout << "\nRelatorio de kg de comida gastos\n" << std::endl;

    Alimentacao* b = animais[0]->getAlimentacao();

    std::cout << "Tipo de comida: Ração" << std::endl;
    std::cout << "Kg consumidos: " << b->getTotalRacao() << std::endl;

    std::cout << "Tipo de comida: Peixe" << std::endl;
    std::cout << "Kg consumidos: " << b->getTotalPeixes() << std::endl;

    animais.clear();

    return 0;
}
