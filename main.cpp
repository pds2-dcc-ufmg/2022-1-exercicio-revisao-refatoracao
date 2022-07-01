#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Alimentacao.hpp"
#include <vector>

void quebrar_linhas(int l){
  for (int i = 0; i < l; i++){
    std::cout << std::endl;
  }
}

void imprimir_relatorios(std::vector<Alimentacao> alimentacoes, int size){
  quebrar_linhas(2);
  std::cout << "--------------------------------";
  quebrar_linhas(2);
  std::cout << "Relatorio das alimentações ";
  quebrar_linhas(2);

  for (int i = 0; i < size; i++){
    alimentacoes[i].imprimir_nome_animal_cuidador();
    std::cout << " Descricao: " << alimentacoes[i].get_descricao();
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

  std::cout << "Tipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << kg_peixe_consumidos << std::endl;
}

void imprimir_animais_genericos(std::vector<Animal> l){
  for (int i = 0; i < (int)l.size(); i++){
    l[i].imprimir_dados_animal();
  }
}

int main(){

  std::vector<Animal> animais;
  animais.push_back(Animal("Bobby", 13, "Ursidae"));
  animais.push_back(Animal("Jorge", 1, "Ursidae"));
  animais.push_back(Animal("Bonina", 7, "Herpestidae"));
  animais.push_back(Animal("Felício", 3, "Ursidae"));
  imprimir_animais_genericos(animais);

  Animal *ursidae_01 = new Ursidae("Tony", 9, "Urso Pardo", 10.5);
  Animal *ursidae_02 = new Ursidae("Wanda", 10, "Urso Polar", 7);
  ursidae_01->imprimir_dados_animal();
  ursidae_02->imprimir_dados_animal();

  Animal *herpestidae_01 = new Herpestidae("Catita", 2, "Suricato");
  Animal *herpestidae_02 = new Herpestidae("Carolina", 2, "Suricato");
  herpestidae_01->imprimir_dados_animal();

  Cuidador cuidador_01("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000");
  Cuidador cuidador_02("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000");

  std::vector<Alimentacao> alimentados;
  alimentados.push_back(Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", "Bobby", cuidador_01));
  alimentados.push_back(Alimentacao(1, "Ração especial", "Catita comeu direitinho", "Catita", cuidador_02));
  alimentados.push_back(Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", "Carolina", cuidador_02));
  alimentados.push_back(Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", "Tony", cuidador_01));

  double kg_peixe_consumidos = 0;
  kg_peixe_consumidos += ursidae_01->calcula_consumo(alimentados[0].get_porcao());
  kg_peixe_consumidos += ursidae_01->calcula_consumo(alimentados[3].get_porcao());

  double kg_racao_consumidos = 0;
  kg_racao_consumidos += herpestidae_01->calcula_consumo(alimentados[1].get_porcao());
  kg_racao_consumidos += herpestidae_01->calcula_consumo(alimentados[2].get_porcao());

  imprimir_relatorios(alimentados, (int)alimentados.size());
  imprimir_comida_consumida(kg_racao_consumidos, kg_peixe_consumidos);

  delete ursidae_01;
  delete ursidae_02;
  delete herpestidae_01;
  delete herpestidae_02;

  return 0;
}
