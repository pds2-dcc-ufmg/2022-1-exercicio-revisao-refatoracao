#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main()
{

    Animal animal1(13, "Ursidae", "Bobby");
    animal1.print();

    Animal animal2(1, "Ursidae", "Jorge");
    animal2.print();

    Animal animal3(7, "Herpestidae", "Bonina");
    animal3.print();

    Animal animal4(3, "Ursidae", "Felício");
    animal4.print();

    Ursidae e02(9, "Ursidae", "Tony", "Urso Pardo");
    e02.print();

    Ursidae e03(10, "Ursidae", "Wanda", "Urso Polar");
    e03.print();

    Herpestidae g01(3, "Herpestidae", "Catita", "Suricato");
    g01.print();

    Herpestidae g02(2, "Herpestidae", "Carolina", "Suricato");

    double kgPeixeConsumidos01 = 0;
    double kgPeixeConsumidos03 = 0;

    double kgRacaoConsumidos01 = 0;
    double kgRacaoConsumidos02 = 0;

    Cuidador cuid01("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", 3000);
    Cuidador cuid2("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", 4000);

    Alimentacao v01;

    v01.porcao = 2;
    v01.comida = "Peixes";
    v01.descricao = "Bobby só quis comer 2 porções de peixes hoje";
    v01.cuidador = cuid01;
    v01.nomeAnimal = "Bobby";
    kgPeixeConsumidos01 = 5 * 2;
    Alimentacao v02;
    v02.porcao = 1;
    v02.comida = "Ração especial";
    v02.descricao = "Catita comeu direitinho";
    v02.cuidador = cuid2;
    v02.nomeAnimal = "Catita";
    kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.porcao);

    Alimentacao v03;
    v03.porcao = 3;
    v03.comida = "Ração";
    v03.descricao = "Carolina estava com um apetite e tanto";
    v03.cuidador = cuid2;
    v03.nomeAnimal = "Carolina";
    kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.porcao);

    Alimentacao v04;
    v04.porcao = 10;
    v04.comida = "Peixes";
    v04.descricao = "Tony comeu um pouco da comida do Bobby";
    v04.cuidador = cuid01;
    v04.nomeAnimal = "Tony";
    v02.porcao = 2;
    v03.comida = "Ração";
    kgPeixeConsumidos03 =
        e02.calculoPeixesConsumidos(10);

    std::cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n"
              << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01.descricao << std::endl
              << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02.descricao << std::endl
              << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03.descricao << std::endl
              << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04.descricao << std::endl
              << "\n";

    std::cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n"
              << std::endl;
    std::cout << "Tipo de comida: "
              << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << std::endl;

    std::cout << "\nTipo de comida: "
              << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << std::endl;

    return 0;
}
