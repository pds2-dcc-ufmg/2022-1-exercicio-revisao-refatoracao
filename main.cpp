#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{
    double kgPeixeConsumidos01 = 0;
    double kgPeixeConsumidos02 = 0;

    double kgRacaoConsumidos01 = 0;
    double kgRacaoConsumidos02 = 0;

    Ursidae animal1(13, "Ursidae", "Bobby", "", 0);
    animal1.print();

    Ursidae animal2(1, "Ursidae", "Jorge", "", 0);
    animal2.print();

    Herpestidae animal3(7, "Herpestidae", "Bonina", "", 0);
    animal3.print();

    Ursidae animal4(3, "Ursidae", "Felício", "", 0);
    animal4.print();

    Ursidae especieU01(9, "Ursidae", "Tony", "Urso Pardo", 10.5);
    especieU01.print();

    Ursidae especieU02(10, "Ursidae", "Wanda", "Urso Polar", 7);
    especieU02.print();

    Herpestidae especieH01(2, "Herpestidae", "Catita", "Suricato", 0);
	especieH01.print();

    Herpestidae especieH02(2, "Herpestidae", "Carolina", "Suricato", 0);
  
  	Cuidador cuidador01("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000");

  	Cuidador cuidador02("R$ 4000", "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995");

    Alimentacao alimentacao01("Peixes", "Bobby só quis comer 2 porções de peixes hoje", "Bobby", 2, cuidador01);
    kgPeixeConsumidos01 = 10;

    Alimentacao alimentacao02("Ração especial", "Catita comeu direitinho", "Catita", 1, cuidador02);
  	kgRacaoConsumidos01 += especieH01.kgConsumidosDeRacao(alimentacao02.getPorcao());

 	Alimentacao alimentacao03("Ração", "Carolina estava com um apetite e tanto", "Carolina", 3, cuidador02);
  	kgRacaoConsumidos02 += especieH02.kgConsumidosDeRacao(alimentacao03.getPorcao());

  	Alimentacao alimentacao04("Peixes", "Tony comeu um pouco da comida do Bobby", "Tony", 10, cuidador01);
    alimentacao02.setPorcao(2);
    alimentacao03.setComida("Ração");
	kgPeixeConsumidos02 = especieU01.peixesConsumidos(10);

    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

    alimentacao01.print();
    alimentacao02.print();
    alimentacao03.print();
    alimentacao04.print();

    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << endl;

    cout << "Tipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos02 << endl;

    return 0;
}
