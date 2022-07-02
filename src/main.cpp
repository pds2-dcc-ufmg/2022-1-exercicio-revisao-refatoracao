#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

void carregarAnimais(vector<Animal*>& animais) {
  Animal animal1("13", "Ursidae", "Bobby");
  Animal animal2("1", "Ursidae", "Jorge");
  Animal animal3("7", "Herpestidae", "Bonina");
  Animal animal4("3", "Ursidae", "Felício");

  Ursidae e02(9, "Tony", "Urso Pardo", 10.5);
  Ursidae e03(10, "Wanda", "Urso Polar", 7);

  Herpestidae h01("Suricato", "2", "Catita");
  Herpestidae h02("Suricato", "2", "Carolina");

  animais.push_back(&animal1);
  animais.push_back(&animal2);
  animais.push_back(&animal3);
  animais.push_back(&animal4);

  animais.push_back(&e02);
  animais.push_back(&e03);

  animais.push_back(&h01);
  animais.push_back(&h02);
}

void carregarCuidadores(vector<Cuidador>& cuidadores) {
  Cuidador cuid01("R$ 3000", "Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000");
  Cuidador cuid02("R$ 4000", "Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995");

  cuidadores.push_back(cuid01);
  cuidadores.push_back(cuid02);
}

void printAnimais(vector<Animal*>& animais) {
  for (int i = 0; i < animais.size() - 1; i++) {
    animais[i]->print();
  }
}

void registrarAlimentacao(vector<Alimentacao>& alim, vector<Cuidador> &cuid, vector<Animal*> &animais) {
  for(int i = 0; i < animais.size(); i++) {
    if (animais[i]->getNome() == "Bobby") {
      Alimentacao v01(animais[i], cuid[0], 2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje");
      alim.push_back(v01);
    }
    if (animais[i]->getNome() == "Catita") {
      Alimentacao v02(animais[i], cuid[1], 2, "Ração especial", "Catita comeu direitinho");
      alim.push_back(v02);
    }
    if (animais[i]->getNome() == "Carolina") {
      Alimentacao v03(animais[i], cuid[1], 3, "Ração", "Carolina estava com um apetite e tanto");
      alim.push_back(v03);
    }
    if (animais[i]->getNome() == "Tony") {
      Alimentacao v04(animais[i], cuid[0], 10, "Peixes", "Tony comeu um pouco da comida do Bobby");
      alim.push_back(v04);
    }
  }
}

void printRelatorio(vector<Animal*>& animais, vector<Alimentacao> alim) {
  double kgPeixeConsumidos01 = 5*2;
  double kgPeixeConsumidos03 = alim[3].peixesConsumidos(10);

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;

  kgRacaoConsumidos01 += alim[1].kgConsumidosDeRacao();
  kgRacaoConsumidos02 += alim[2].kgConsumidosDeRacao();


  cout << " \n \n--------------------------------" << endl << endl;
  cout << "Relatorio das alimentações " <<endl << endl;

  for (int i = 0; i < alim.size(); i++) {
    alim[i].print();
  }

  cout << " \n \n--------------------------------" << endl << endl;
  cout << "Relatorio de kg de comida gastos " << endl << endl;

  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02 << endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03 << endl;
}

int main() {
  vector<Animal*> animais;
  vector<Cuidador> cuidadores;

  carregarAnimais(animais);
  carregarCuidadores(cuidadores);

  printAnimais(animais);

  vector<Alimentacao> alim;
  registrarAlimentacao(alim, cuidadores, animais);

  printRelatorio(animais, alim);

  return 0;
}
