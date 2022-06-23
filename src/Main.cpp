#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentação.hpp"
#include <vector>

using std::cout;

int main()
{

    Animal animal01("13", "Ursidae", "Bobby");
    animal01.printAnimal();

    Animal animal02("1", "Ursidae", "Jorge");
    animal02.printAnimal();

    Animal animal03("7", "Herpestidae", "Bonina");
    animal03.printAnimal();

    Animal animal04("3", "Ursidae", "Felício");
    animal04.printAnimal();

    Ursidae ursidae01("9", "Urso Pardo", "Tony", 10.5);
    ursidae01.print();

    Ursidae ursidae02("10", "Urso Polar", "Wanda", 7);
    ursidae02.print();

    Herpestidae herpestidae01("2", "Suricato", "Catita");
    herpestidae01.printHerpestidae();

    Herpestidae herpestidae02("2", "Suricato", "Carolina");

    Cuidador cuidador01("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000");

    Cuidador cuidador02("R$ 4000", "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995");

    double kgPeixeConsumidos01 = 0;
    double kgPeixeConsumidos03 = 0;
    double kgRacaoConsumidos01 = 0;
    double kgRacaoConsumidos02 = 0;

    Alimentacao alimentacaoAnimal01 (2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidador01, "Bobby") ;
    kgPeixeConsumidos01 =  animal01.porcaoComida(alimentacaoAnimal01.getComida()) * alimentacaoAnimal01.getPorcao();

    Alimentacao alimentacaoAnimal02 (1, "Ração especial", "Catita comeu direitinho", cuidador02, "Catita") ;
    kgRacaoConsumidos01 += herpestidae01.kgConsumidosDeRacao(alimentacaoAnimal02.getPorcao());

    Alimentacao alimentacaoAnimal03 (3, "Ração", "Carolina estava com um apetite e tanto", cuidador02, "Carolina");
    kgRacaoConsumidos02 += herpestidae02.kgConsumidosDeRacao(alimentacaoAnimal03.getPorcao());

    Alimentacao alimentacaoAnimal04 (10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidador01, "Tony");
    alimentacaoAnimal02.setPorcao(2);
    alimentacaoAnimal03.setComida("Ração");
    kgPeixeConsumidos03 = ursidae01.calculaPeixesConsumidos(10);

    cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    alimentacaoAnimal01.printAlimentacao();
    cout << " Descricao: " << alimentacaoAnimal01.getDescricao() << std::endl << std::endl;

    alimentacaoAnimal02.printAlimentacao();
    cout << " Descricao: " << alimentacaoAnimal02.getDescricao() << std::endl << std::endl;

    alimentacaoAnimal03.printAlimentacao();
    cout << " Descricao: " << alimentacaoAnimal03.getDescricao() << std::endl << std::endl;

    alimentacaoAnimal04.printAlimentacao();
    cout << " Descricao: " << alimentacaoAnimal04.getDescricao() << std::endl << "\n";

    cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    cout << "Tipo de comida: " << "Ração" << std::endl;
    cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << std::endl;

    cout << "\nTipo de comida: " << "Peixe" << std::endl;
    cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << std::endl;

    return 0;
}
