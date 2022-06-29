#include "Herpestidae.hpp"
#include "Ursidae.hpp"

using namespace std;

int main(){

    Cuidador* cuid01 = new Cuidador("Ana Maria Rodrigues Lopes", 1234567799, "10/10/2000", "(31) 99876-6923", "R$ 3000");
    Cuidador* cuid02 = new Cuidador("Fernanda Silva Santos", 9472567121, "08/02/1995", "(31) 99123-8970", "R$ 4000");
    Alimentacao* alimentacao01 = new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje");
    Alimentacao* alimentacao02 = new Alimentacao(1, "Ração especial", "Catita comeu direitinho");
    Alimentacao* alimentacao03 = new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto");
    Alimentacao* alimentacao04 = new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby");

    Ursidae animal01("Bobby", 13, "", *alimentacao01, *cuid01); 
    animal01.printInformacoesAnimal();

    Ursidae animal02("Jorge", 1);
    animal02.printInformacoesAnimal();

    Herpestidae animal03("Bonina", 7);
    animal03.printInformacoesAnimal();

    Ursidae animal04("Felício", 3);
    animal04.printInformacoesAnimal();

    Ursidae animal05("Tony", 9, "Urso Pardo", *alimentacao04, *cuid01);
    animal05.printInformacoesAnimal();

    Ursidae animal06("Wanda", 10, "Urso Polar");
    animal06.printInformacoesAnimal();

    Herpestidae animal07("Catita", 2, "Suricato", *alimentacao02, *cuid02);
    animal07.printInformacoesAnimal();

    Herpestidae animal08("Carolina", 2, "Suricato", *alimentacao03, *cuid02);


    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
    animal01.printAlimentacao();
    animal07.printAlimentacao();
    animal08.printAlimentacao();
    animal05.printAlimentacao();

    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    int quantidadeRacaoConsumida = animal07.getConsumo() + animal08.getConsumo();
    cout << "Kg consumidos: " <<quantidadeRacaoConsumida<<endl;
    
    cout << "\nTipo de comida: " << "Peixe" << endl;
    int quantidadePeixeConsumido = animal01.getConsumo() + animal05.getConsumo();
    cout << "Kg consumidos: "<<quantidadePeixeConsumido<<endl;


    delete cuid01;
    delete cuid02;
    delete alimentacao01;
    delete alimentacao02;
    delete alimentacao03;
    delete alimentacao04;


    return 0;
}
