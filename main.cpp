#include <iostream>
#include <vector>
#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "RelatorioDeAlimentacao.hpp"
using namespace std;

int main()
{

    vector<Animal> animais;
    vector<Ursidae> ursidaes;
    vector<Herpestidae> herpestidaes;
    Ursidae ursidae01("13","Bobby");
    animais.push_back(ursidae01);
    ursidaes.push_back(ursidae01);
    Ursidae ursidae02("1","Jorge");
     animais.push_back(ursidae02);
    ursidaes.push_back(ursidae02);
    Herpestidae herpestidae01("7", "Bonina");
    animais.push_back(herpestidae01);
    herpestidaes.push_back(herpestidae01);
    Ursidae ursidae03("3","Felício");
    animais.push_back(ursidae03);
    ursidaes.push_back(ursidae03);
    Ursidae ursidae04("9","Tony","Urso Pardo",10.5);
    animais.push_back(ursidae04);
    ursidaes.push_back(ursidae04);
    Ursidae ursidae05("10","Wanda","Urso Polar",7);
     animais.push_back(ursidae05);
    ursidaes.push_back(ursidae05);




    Herpestidae herpestidae02("2","Catita","Suricato");
    animais.push_back(herpestidae02);
    herpestidaes.push_back(herpestidae02);
    for(Animal animal: animais){
      animal.imprimirDados();
    }
    Herpestidae herpestidae03("2","Carolina","Suricato");
    animais.push_back(herpestidae03);
    herpestidaes.push_back(herpestidae03);



    Cuidador cuid01("Ana Maria Rodrigues Lopes","1234567799", "(31) 99876-6923","10/10/2000","R$ 3000");
    Cuidador cuid02("Fernanda Silva Santos","9472567121","(31) 99123-8970","08/02/1995","R$ 4000");

    vector<RelatorioDeAlimentacao> relatorios;
    relatorios.push_back(RelatorioDeAlimentacao(2,"Peixes", "Bobby só quis comer 2 porções de peixes hoje",cuid01,ursidaes[0]));
    relatorios.push_back(RelatorioDeAlimentacao(1,"Ração especial","Catita comeu direitinho",cuid02,herpestidaes[1]));
    relatorios.push_back(RelatorioDeAlimentacao(3,"Ração","Carolina estava com um apetite e tanto",cuid02,herpestidaes[2]));
    relatorios.push_back(RelatorioDeAlimentacao(10,"Peixes","Tony comeu um pouco da comida do Bobby",cuid01,ursidaes[3]));
   


    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
    for(RelatorioDeAlimentacao relatorio : relatorios){
      relatorio.imprimirDados();
    }
    double kgPeixeConsumidos = 0;
    for(Ursidae ursidae : ursidaes){
        kgPeixeConsumidos += ursidae.calcularConsumo();
    } 
    double kgRacaoConsumidos = 0;
    for(Herpestidae herpestidae : herpestidaes){
      kgRacaoConsumidos += herpestidae.calcularConsumo();
    }

    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << kgRacaoConsumidos<<endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << kgPeixeConsumidos<<endl;

    return 0;
} 
