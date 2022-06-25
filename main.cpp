#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main(){
    Animal animal1("13","Bobby","Ursidae");
    animal1.print();

    Animal animal2("1","Jorge","Ursidae");
    animal2.print();

    Animal animal3("7","Bonina","Herpestidae");
    animal3.print();

    Animal animal4("3","Felício","Ursidae");
    animal4.print();

    Ursidae e02("9","Tony","Ursidae");
    e02.setEspecie("Urso Pardo");
    e02.setKgPeixePorDia(10.5);
    e02.print();

    Ursidae e03("10","Wanda","Ursidae");
    e03.setEspecie("Urso Polar");
    e03.setKgPeixePorDia(7.0);
    e03.print();

    Herpestidae g01("2","Catita","Herpestidae");
    g01.setEspecie("Suricato");
    g01.print();

    Herpestidae g02("2","Carolina","Herpestidae");
    g02.setEspecie("Suricato");

    double kgPeixeConsumidos01 = 0; 
    double kgPeixeConsumidos03 = 0; 

    double kgRacaoConsumidos01 = 0; 
    double kgRacaoConsumidos02 = 0; 

    Cuidador cuid01("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000");

    Cuidador cuid2("R$ 4000", "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995");

    Alimentacao v01(2,"Peixes", cuid01.getNome(), "Bobby", "Bobby só quis comer 2 porções de peixes hoje");

    kgPeixeConsumidos01 = e03.calculaPeixesConsumidos(v01.getPorcao());

    Alimentacao v02(1,"Ração especial", cuid2.getNome(), "Catita", "Catita comeu direitinho");

    kgRacaoConsumidos01 = g01.kgConsumidosDeRacao(v02.getPorcao());

    Alimentacao v03(3,"Ração", cuid2.getNome(), "Carolina", "Carolina estava com um apetite e tanto");

    kgRacaoConsumidos02 = g02.kgConsumidosDeRacao(v03.getPorcao());

    Alimentacao v04(10,"Peixes", cuid01.getNome(), "Tony", "Tony comeu um pouco da comida do Bobby");

    v02.setPorcao(2);
    v03.setComida("Ração");

    kgPeixeConsumidos03 = e02.calculaPeixesConsumidos(v04.getPorcao());

    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;
    return 0;
}
