#include <iostream>

#include "Zoologico.hpp"

int main() {
    //Inicializa o zoológico
    Zoologico zoo;

    //Cria dois cuidadores
    Cuidador* ana = new Cuidador("Ana Maria Rodrigues Lopes");
    Cuidador* fernanda = new Cuidador("Fernanda Silva Santos");

    //Cria os animais (Note o polimorfismo)
    Animal* tomas = new Ursidae("Tomas", 18, "Urso Branco");
    Animal* tony = new Ursidae("Tony", 9, "Urso Pardo");
    Animal* bobby = new Ursidae("Bobby", 13, "Urso Polar");
    Animal* catita = new Herpestidae("Catita", 2, "Suricato");
    Animal* carolina = new Herpestidae("Carolina", 13, "Suricato");

    //Define qtde comida e descrição de alimentação (Note que o Tomas não comeu nada)
    tony->set_qtde_ingerida(10);
    tony->set_descricao("comeu um pouco da comida do Bobby");

    bobby->set_qtde_ingerida(2);
    bobby->set_descricao("só quis comer 2 porções de peixes hoje");

    catita->set_qtde_ingerida(1);
    catita->set_descricao("comeu direitinho");

    carolina->set_qtde_ingerida(3);
    carolina->set_descricao("estava com um apetite e tanto");

    //Adiciona os animais aos cuidadores
    ana->adicionar_animal(bobby);
    ana->adicionar_animal(tony);
    ana->adicionar_animal(tomas);
    fernanda->adicionar_animal(catita);
    fernanda->adicionar_animal(carolina);

    //Adiciona os cuidadores ao zoológico
    zoo.adicionar_cuidador(ana);
    zoo.adicionar_cuidador(fernanda);
    
    //Imprime as informações do zoológico
    zoo.imprimir_animais();
    zoo.imprimir_relatorio_alimentacao();
    zoo.imprimir_relatorio_comida_gasta();

    return 0;
}