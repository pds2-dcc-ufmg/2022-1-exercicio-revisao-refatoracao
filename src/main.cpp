#include <iostream>
#include <memory>
#include <vector>
#include <string>

#include "./classes/Animal/Animal.hpp"
#include "./classes/Herpestidae/Herpestidae.hpp"
#include "./classes/Ursidae/Ursidae.hpp"
#include "./classes/Cuidador/Cuidador.hpp"
#include "./classes/Alimentacao/Alimentacao.hpp"

void printAnimalList(const std::vector<std::shared_ptr<Animal>>& animals);
void printRelatorioAlimentacoes(const std::vector<Alimentacao>& feedings);
void printFeedingsList(const std::vector<Alimentacao>& feedings);
void printRelatrioComidaGastos(const std::vector<std::pair<std::string, double>>& consumedFoods);
void printConsumedFood(const std::string foodType, const double consumedAmount);

int main() {
    std::shared_ptr<Animal> animalBobby(new Ursidae("Bobby", 13));
    std::shared_ptr<Animal> animalJorge(new Ursidae("Jorge", 1));
    std::shared_ptr<Animal> animalBonina(new Herpestidae("Bonina", 7));
    std::shared_ptr<Animal> animalFelicio(new Ursidae("Felício", 3));
    std::shared_ptr<Animal> animalTony(new Ursidae("Tony", 9, "Urso Pardo", 10.5));
    std::shared_ptr<Animal> animalWanda(new Ursidae("Wanda", 10, "Urso Polar", 7));
    std::shared_ptr<Animal> animalCatita(new Herpestidae("Catita", 2, "Suricato"));
    std::shared_ptr<Animal> animalCarolina(new Herpestidae("Carolina", 2, "Suricato"));

    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(animalBobby);
    animals.push_back(animalJorge);
    animals.push_back(animalBonina);
    animals.push_back(animalFelicio);
    animals.push_back(animalTony);
    animals.push_back(animalWanda);
    animals.push_back(animalCatita);
    animals.push_back(animalCarolina);
    printAnimalList(animals);

    std::shared_ptr<Cuidador> caretakerAna(new Cuidador("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", 3000));
    std::shared_ptr<Cuidador> caretakerFernanda(new Cuidador("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", 4000));

    std::vector<std::shared_ptr<Cuidador>> caretakers;
    caretakers.push_back(caretakerAna);
    caretakers.push_back(caretakerFernanda);

    std::vector<Alimentacao> feedings;

    Comida food1("Peixes", 2);
    Alimentacao feeding1(*caretakerAna, food1, animalBobby->getName(), "Bobby só quis comer 2 porções de peixes hoje");
    feedings.push_back(feeding1);

    double amountFishConsumedInKg = 0;
    amountFishConsumedInKg += animalBobby->getDeit()->calcConsumedPortionsInKg(feeding1.getFood()->getConsumedAmount());

    Comida food2("Ração especial", 2);
    Alimentacao feeding2(*caretakerFernanda, food2, animalCatita->getName(), "Catita comeu direitinho");
    feedings.push_back(feeding2);
    double amountRationConsumedInKg = 0;
    amountRationConsumedInKg += animalCatita->getDeit()->calcConsumedPortionsInKg(feeding2.getFood()->getConsumedAmount());

    Comida food3("Ração", 3);
    Alimentacao feeding3(*caretakerFernanda, food3, animalCarolina->getName(), "Carolina estava com um apetite e tanto");
    feedings.push_back(feeding3);
    amountRationConsumedInKg += animalCarolina->getDeit()->calcConsumedPortionsInKg(feeding3.getFood()->getConsumedAmount());

    Comida food4("Peixes", 10);
    Alimentacao feeding4(*caretakerAna, food4, animalTony->getName(), "Tony comeu um pouco da comida do Bobby");
    feedings.push_back(feeding4);
    amountFishConsumedInKg += animalTony->getDeit()->calcConsumedPortionsInKg(feeding4.getFood()->getConsumedAmount());

    printRelatorioAlimentacoes(feedings);

    std::vector<std::pair<std::string, double>> consumedFoods;
    consumedFoods.push_back(std::pair<std::string, double>("Ração", amountRationConsumedInKg));
    consumedFoods.push_back(std::pair<std::string, double>("Peixe", amountFishConsumedInKg));
    printRelatrioComidaGastos(consumedFoods);

    return 0;
}

void printAnimalList(const std::vector<std::shared_ptr<Animal>>& animals) {
    for(auto&& animal : animals) {
        animal->print();
    }

    return;
}

void printRelatorioAlimentacoes(const std::vector<Alimentacao>& feedings) {
    std::cout <<"\n\n--------------------------------\n\nRelatorio das alimentações" << std::endl << std::endl;
    printFeedingsList(feedings);
    
    return;
}

void printFeedingsList(const std::vector<Alimentacao>& feedings) {
    for(Alimentacao feeding : feedings) {
        feeding.print();
    }

    return;
}

void printRelatrioComidaGastos(const std::vector<std::pair<std::string, double>>& consumedFoods) {
    std::cout <<"\n\n--------------------------------\n\nRelatorio de kg de comida gastos" << std::endl << std::endl;
    for(std::pair<std::string, double> pair : consumedFoods) {
        printConsumedFood(pair.first, pair.second);
    }

    return;
}

void printConsumedFood(const std::string foodType, const double consumedAmount) {
    std::cout << "Tipo de comida: " << foodType << std::endl;
    std::cout << "Kg consumidos: " << consumedAmount << std::endl;

    return;
}
