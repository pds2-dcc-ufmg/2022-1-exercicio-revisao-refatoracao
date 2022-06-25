#include <iostream>
#include "Zoologico.hpp"

using namespace std;

int main(){

    Zoologico zoo;

    // Como foi usado o std::unordered_map, os elementos não estão em ordem, mas poderiam facilmente serem ordenados

    // Adicionando os animais
    // PS: estão sendo inseridos em um map<std:string, Animal*>
    zoo.adicionarAnimal(new Ursidae("Bobby", 13));
    zoo.adicionarAnimal(new Ursidae("Jorge", 1));
    zoo.adicionarAnimal(new Herpestidae("Bonina", 7));
    zoo.adicionarAnimal(new Ursidae("Felício", 3));
    zoo.adicionarAnimal(new Ursidae("Tony", 9, "Urso Pardo", 10.5));
    zoo.adicionarAnimal(new Ursidae("Wanda", 10, "Urso Polar", 7));
    zoo.adicionarAnimal(new Herpestidae("Catita", 2, "Suricato"));
    zoo.adicionarAnimal(new Herpestidae("Carolina", 2, "Suricato"));

    // Imprimir as informações de todos os animais no zoológico na ordem inserida e com excecao de um animal
    zoo.printAnimaisVector("Carolina");
    
    // Adicionando os cuidadores
    zoo.adicionarCuidador(new Cuidador("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", 3000));
    zoo.adicionarCuidador(new Cuidador("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", 4000));

    // Adicionando as alimentações
    zoo.adicionarAlimentacao(new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", "Ana Maria Rodrigues Lopes", "Bobby"));
    zoo.adicionarAlimentacao(new Alimentacao(1, "Ração especial", "Catita comeu direitinho", "Fernanda Silva Santos", "Catita"));
    zoo.adicionarAlimentacao(new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", "Fernanda Silva Santos", "Carolina"));
    zoo.adicionarAlimentacao(new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", "Ana Maria Rodrigues Lopes", "Tony"));
    
    // Registrar o consumo geral de alimentos em kg no zoológico
    zoo.adicionarConsumoGeral();
    

    cout << "\n\n--------------------------------\n\nRelatorio das alimentações \n\n";

    // Imprimir as informações das alimentações
    // zoo.relatorioAlimentacao();

    zoo.relatorioAlimentacaoIndiv("Bobby");
    zoo.relatorioAlimentacaoIndiv("Catita");
    zoo.relatorioAlimentacaoIndiv("Carolina");

    cout << "\n\n--------------------------------\n\nRelatorio de kg de comida gastos\n" << endl;
    
    // Imprimir as informações do consumo de alimentos
    zoo.relatorioConsumo();

    // Deletar as variáveis alocadas dinamicamente (dentro dos vetores)
    zoo.deleteAll();

}