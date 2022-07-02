#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"


int main(){
    std::vector<Animal> animais;
    animais.push_back(Animal("Bobby",13,"Ursidae"));
    animais.push_back(Animal("Jorge",1,"Ursidae"));
    animais.push_back(Animal("Bonina",7,"Herpestidae"));
    animais.push_back(Animal("Felício",3,"Ursidae"));

    for (auto it = animais.begin(); it!=animais.end(); it++) {
        it->print();
    }
//------------
    std::vector<Ursidae> ursidae;
    ursidae.push_back(Ursidae("Tony",9,"Urso Pardo",10.5));
    ursidae.push_back(Ursidae("Wanda",10,"Urso Polar",7));

    for (auto it = ursidae.begin(); it!=ursidae.end(); it++) {
        it->print();
    }
//------------
    std::vector<Herpestidae> herpestidae;
    Herpestidae animal06("Catita",2,"Herpestidae","Suricato");
    animal06.print();

//-------------

    std::vector<Cuidador> cuidadores;
    Cuidador cuid01("Ana Maria Rodrigues Lopes","1234567799","(31) 99876-6923","10/10/2000","R$ 3000");
    Cuidador cuid02("Fernanda Silva Santos","9472567121","(31) 99123-8970","08/02/1995","R$ 4000");
    cuidadores.push_back(cuid01);
    cuidadores.push_back(cuid02);

//-------------
    std::vector<Alimentacao> alimentacoes;
    int total_peixes = 0;
    int total_racao = 0;

    Alimentacao alimentacao01(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje",cuid01,"Bobby");
    alimentacoes.push_back(alimentacao01);
    total_peixes += alimentacao01.calcula_peixes_consumidos(2);

    Alimentacao alimentacao02(1,"Ração especial","Catita comeu direitinho",cuid02,"Catita");
    alimentacoes.push_back(alimentacao02);
    total_racao += alimentacao02.kg_consumidos_de_racao(1);

    Alimentacao alimentacao03(3,"Ração","Carolina estava com um apetite e tanto",cuid02,"Carolina");
    alimentacoes.push_back(alimentacao03);
    total_racao += alimentacao03.kg_consumidos_de_racao(3);

    Alimentacao alimentacao04(10,"Peixes","Tony comeu um pouco da comida do Bobby",cuid01,"Tony");
    alimentacoes.push_back(alimentacao04);
    total_peixes += alimentacao04.calcula_peixes_consumidos(10);

    std::cout <<"\n--------------------------------\n"<<std::endl;
    std::cout << "Relatorio das alimentações\n" << std::endl;

    for (auto it = alimentacoes.begin(); it!=alimentacoes.end(); it++) {
        it->print();
    }

    std::cout <<"--------------------------------" << std::endl;
    std::cout << "\nRelatorio de kg de comida gastos\n" << std::endl;

    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " <<  total_racao << "\n" << std::endl;

    std::cout << "Tipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << total_peixes << std::endl;

    return 0;
}
