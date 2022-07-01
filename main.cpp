#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Alimentacao.hpp"
#include <vector>

void quebrar_linhas(int l){
  for(int i = 0; i<l; i++){
    std::cout << std::endl;
  }
}

void imprimir_relatorios(std::vector<Alimentacao> alimentacoes, int size){
    quebrar_linhas(2);
    std::cout << "--------------------------------"; 
    quebrar_linhas(2);
    std::cout << "Relatorio das alimentações ";
    quebrar_linhas(2);

  for(int i = 0; i<size; i++){
    alimentacoes[i].imprimirNomeAnimalCuidador();
    std::cout << " Descricao: " << alimentacoes[i].getDescricao(); 
    quebrar_linhas(2);
  }

}

void imprimir_comida_consumida(double kg_racao_consumidos, double kg_peixe_consumidos){
    quebrar_linhas(2);
    std::cout << "--------------------------------";
    quebrar_linhas(2);
    std::cout << "Relatorio de kg de comida gastos";
    quebrar_linhas(2);


    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kg_racao_consumidos;

    quebrar_linhas(2);

    std::cout <<"Tipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kg_peixe_consumidos << std::endl;
}

int main(){
    
    Animal animal_01("Bobby", 13, "Ursidae");
    Animal animal_02("Jorge", 1, "Ursidae");
    Animal animal_03("Bonina", 7, "Herpestidae");
    Animal animal_04("Felício", 3, "Ursidae");
    animal_01.imprimirDadosAnimal();
    animal_02.imprimirDadosAnimal();
    animal_03.imprimirDadosAnimal();
    animal_04.imprimirDadosAnimal();
    
    Animal *ursidae_01 = new Ursidae("Tony", 9, "Urso Pardo", 10.5);
    Animal *ursidae_02 = new Ursidae("Wanda", 10, "Urso Polar", 7);
    ursidae_01->imprimirDadosAnimal();
    ursidae_02->imprimirDadosAnimal();

    Animal *herpestidae_01 = new Herpestidae("Catita", 2, "Suricato");
    Animal *herpestidae_02 = new Herpestidae("Carolina", 2, "Suricato");
    herpestidae_01->imprimirDadosAnimal();

    Cuidador cuidador_01("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000");
    Cuidador cuidador_02("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000");

    std::vector<Alimentacao> alimentados;
    Alimentacao alimentacao_01(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", "Bobby", cuidador_01);
    Alimentacao alimentacao_02(1, "Ração especial", "Catita comeu direitinho", "Catita", cuidador_02);
    Alimentacao alimentacao_03(3, "Ração", "Carolina estava com um apetite e tanto", "Carolina", cuidador_02);
    Alimentacao alimentacao_04(10, "Peixes", "Tony comeu um pouco da comida do Bobby", "Tony", cuidador_01);

    alimentacao_02.setPorcao(2);

    alimentados.push_back(alimentacao_01);
    alimentados.push_back(alimentacao_02);
    alimentados.push_back(alimentacao_03);
    alimentados.push_back(alimentacao_04);

    double kg_peixe_consumidos = 0;
    kg_peixe_consumidos += ursidae_01->calculaConsumo(alimentacao_01.getPorcao());
    kg_peixe_consumidos += ursidae_01->calculaConsumo(alimentacao_04.getPorcao());

    double kg_racao_consumidos = 0;
    kg_racao_consumidos += herpestidae_01->calculaConsumo(alimentacao_02.getPorcao());
    kg_racao_consumidos += herpestidae_01->calculaConsumo(alimentacao_03.getPorcao());

    imprimir_relatorios(alimentados, (int)alimentados.size());
    imprimir_comida_consumida(kg_racao_consumidos, kg_peixe_consumidos);

    delete ursidae_01;
    delete ursidae_02;
    delete herpestidae_01;
    delete herpestidae_02;

    return 0;
}
