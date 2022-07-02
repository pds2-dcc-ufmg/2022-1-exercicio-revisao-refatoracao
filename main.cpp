#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){

    Animal Bobby = Animal("Bobby",13,"","Ursidae");
    Bobby.imprimirDados();

    Animal Jorge = Animal("Jorge",1,"","Ursidae");
    Jorge.imprimirDados();

    Animal Bonina = Animal("Bonina",7,"","Herpestidae");
    Bonina.imprimirDados();

    Animal Felicio = Animal("Felício",3,"","Ursidae");
    Felicio.imprimirDados();

    Ursidae Tony = Ursidae(10.5,Animal("Tony",9,"Urso Pardo","Ursidae"));
    Tony.imprimirDados();

    Ursidae Wanda = Ursidae(7,Animal("Wanda",10,"Urso Polar","Ursidae"));
    Wanda.imprimirDados();

    Herpestidae Catita = Herpestidae(Animal("Catita",2,"Suricato","Herpestidae"));
    Catita.imprimirDados();

    Herpestidae Carolina = Herpestidae(Animal("Carolina",2,"Suricato","Herpestidae"));
  
    Cuidador cuidadoraAnaMaria = Cuidador("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000");

    Cuidador cuidadoraFernandaSilva = Cuidador("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000");

    Alimentacao alimentacaoBob = Alimentacao(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje",cuidadoraAnaMaria,"Bobby");
    
    double kgPeixeConsumidos01 = 5*2;

    Alimentacao alimentacaoCatita = Alimentacao(1, "Ração especial", "Catita comeu direitinho", cuidadoraFernandaSilva, "Catita");
    double kgRacaoConsumidos01 = Catita.calcularQtdAlimentos(alimentacaoCatita.getPorcao());

    Alimentacao alimentacaoCarolina = Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", cuidadoraFernandaSilva, "Carolina");
    double kgRacaoConsumidos02 = Carolina.calcularQtdAlimentos(alimentacaoCarolina.getPorcao());

    Alimentacao alimentacaoTony = Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidadoraAnaMaria, "Tony");
    
    double kgPeixeConsumidos03 = Tony.calcularQtdAlimentos(10);

    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    alimentacaoBob.imprimirDadosAlimentacao();
    std::cout << " Descricao: " << alimentacaoBob.getDescricao() << std::endl << std::endl;

    alimentacaoCatita.imprimirDadosAlimentacao();
    std::cout << " Descricao: " << alimentacaoCatita.getDescricao() << std::endl << std::endl;

    alimentacaoCarolina.imprimirDadosAlimentacao();
    std::cout << " Descricao: " << alimentacaoCarolina.getDescricao() << std::endl<< std::endl;

    alimentacaoTony.imprimirDadosAlimentacao();
    std::cout << " Descricao: " << alimentacaoTony.getDescricao() << std::endl << "\n";

    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02 << std::endl;

    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03 << std::endl;

    return 0;
}