#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
#include "Comida.hpp"

int main()
{
    //Inicializar classe que vai contar quantos quilos de comida foi gasto

    Comida total;

    /*
    Lista de cuidadores

    parametros: (double _salario, std::string _nome, std::string _cpf,
	std::string _telefone, std::string _nascimento)
    */

    Cuidador Ana(3000.0, "Ana Maria Rodrigues Lopes", "1234567799",
    "(31) 99876-6923", "10/10/2000");

    Cuidador Fernanda(4000.0, "Fernanda Silva Santos", "9472567121",
    "(31) 99123-8970", "08/02/1995");

    /*
    Lista de Animais

    parametros: (int _idade, std::string _familia, 
        std::string _nome, std::string _especie)
    */

    Ursidae Bobby(13, "Ursidae", "Bobby", "");

    Ursidae Jorge(1, "Ursidae", "Jorge", "");

    Herpestidae Bonina(7, "Herpestidae", "Bonina", "");

    Ursidae Felicio(3, "Ursidae", "Felício", "");

    Ursidae Tony(9, "Ursidae", "Tony", "Urso Pardo");

    Ursidae Wanda(10, "Ursidae", "Wanda", "Urso Polar");

    Herpestidae Catita(2, "Herpestidae", "Catita", "Suricato");

    Herpestidae Carolina(7, "Herpestidae", "Carolina", "Suricato");

    //Peixes consumidos por dia cada animal

    Tony.peixes_por_dia(10.5);

    Wanda.peixes_por_dia(7.0);

    /*
    Lista Alimentacao 
    parametros: (std::string _comida, std::string descricao,
        Cuidador _cuidador, std::string _nome)
    */

    Alimentacao Bobby_alimentacao("Peixes", "Bobby só quis comer 2 porções de peixes hoje",
    Ana, "Bobby");
    total.adicionar_peixe_total(2);

    Alimentacao Catita_alimentacao("Ração especial", "Catita comeu direitinho",
    Fernanda, "Catita");
    total.adicionar_racao_total(1);

    Alimentacao Carolina_alimentacao("Ração", "Carolina estava com um apetite e tanto",
    Fernanda, "Carolina");
    total.adicionar_racao_total(3);

    Alimentacao Tony_alimentacao("Peixes", "Tony comeu um pouco da comida do Bobby",
    Ana, "Tony");
    total.adicionar_peixe_total(10);


    //Relatorio das alimentaçoes

    /*Prints (Como a saída tem que ser a mesma ordem não fiz uma funcao que imprime todos os
    animais)
    */

    Bobby.print();
    Jorge.print();
    Bonina.print();
    Felicio.print();
    Tony.print();
    Wanda.print();
    Catita.print();

    //Print sobre alimentacoes dos animais

    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n\n";

    Bobby_alimentacao.print();
    Catita_alimentacao.print();
    Carolina_alimentacao.print();
    Tony_alimentacao.print();

    //Print comida total gasta (racao e peixes)

    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n\n";

    std::cout << "Tipo de comida: " << "Ração" << "\n"
              << "Kg consumidos: " << total.racao_total() << "\n";

    std::cout << "\nTipo de comida: " << "Peixe" << "\n"
              << "Kg consumidos: " << total.peixe_total() << "\n";

    return 0;
}
