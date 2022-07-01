#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

#include <iostream>

int main() {
    
    Ursidae animal1("Bobby", 13);
    animal1.print();

    double kgPeixeConsumidos01 = 0;

    Ursidae animal2("Jorge", 1);
    animal2.print();
    
    Herpestidae animal3("Bonina", 7);
    animal3.print();

    Ursidae animal4("Felício", 3);
    animal4.print();


    Ursidae e02("Tony", 9, "Urso Pardo");
    e02.setKgPeixePorDia(10.5);

    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.print();



    Ursidae e03("Wanda", 10, "Urso Polar");
    e03.setKgPeixePorDia(7);

    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.print();


    Herpestidae g01("Catita", 2, "Suricato");
    g01.print();

    Herpestidae g02("Carolina", 2, "Suricato");
    double bonificacao01 = 0;
    

    double kgPeixeConsumidos02 = 0;
    double kgPeixeConsumidos03 = 0;
    double kgPeixeConsumidos04 = 0;
    double kgPeixeConsumidos05 = 0;

    double kgRacaoConsumidos01 = 0;
    double kgRacaoConsumidos02 = 0;
    double kgRacaoConsumidos03 = 0;
  
    Cuidador cuid01("Ana Maria Rodrigues Lopes", 1234567799, "(31) 99876-6923", "10/10/2000", "R$ 3000");

    Cuidador cuid2("Fernanda Silva Santos", 9472567121, "(31) 99123-8970", "08/02/1995", "R$ 4000");


    Alimentacao v01(2, "Peixes", &animal1, &cuid01);
    v01.adicionarDescricao("Bobby só quis comer 2 porções de peixes hoje");
    kgPeixeConsumidos01 = 5*2;

    Alimentacao v02(1, "Ração especial", &g01, &cuid2);
    v02.adicionarDescricao("Catita comeu direitinho");
    kgRacaoConsumidos01 += g01.calcularKgConsumidosDeRacao(1);
    //kgRacaoConsumidos01 += g01.calcularKgConsumidosDeRacao(v02.porcao);

    Alimentacao v03(3, "Ração", &g02, &cuid2);
    v03.adicionarDescricao("Carolina estava com um apetite e tanto");
    kgRacaoConsumidos02 += g02.calcularKgConsumidosDeRacao(3);
    //kgRacaoConsumidos02 += g02.calcularKgConsumidosDeRacao(v03.porcao);

    Alimentacao v04(10, "Peixes", &e02, &cuid01);
    v04.adicionarDescricao("Tony comeu um pouco da comida do Bobby");
    kgPeixeConsumidos03 = e02.calcularPeixesConsumidos(10);



    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();



    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<std::endl;

    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<std::endl;

    return 0;
}
