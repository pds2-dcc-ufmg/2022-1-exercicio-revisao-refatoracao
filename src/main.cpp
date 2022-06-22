#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main(){
  vector<Animal*> vAnimal;

  vAnimal.push_back(new Animal("Bobby", "13", "Ursidae"));
  vAnimal.push_back(new Animal("Jorge", "1", "Ursidae"));
  vAnimal.push_back(new Animal("Bonina", "7", "Herpestidae"));
  vAnimal.push_back(new Animal("Felício", "3", "Ursidae"));
  vAnimal.push_back(new Ursidae("Tony", "9", "Urso Pardo", 10.5));
  vAnimal.push_back(new Ursidae("Wanda", "10", "Urso Polar", 7));
  vAnimal.push_back(new Herpestidae("Catita", "2", "Suricato"));

  for(Animal *&x : vAnimal) x->print();

  vAnimal.push_back(new Herpestidae("Carolina", "2", "Suricato"));

  double kgPeixeConsumidos[2] = {};
  double kgRacaoConsumidos[2] = {};

  Cuidador cuid1("Ana Maria Rodrigues Lopes", "R$ 3000", "1234567799", "(31) 99876-6923", "10/10/2000");
  Cuidador cuid2("Fernanda Silva Santos", "R$ 4000", "9472567121", "(31) 99123-8970", "08/02/1995");

  vector<Alimentacao> vAlimentacao;

  vAlimentacao.push_back(Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", vAnimal[0], cuid1));
  vAlimentacao.push_back(Alimentacao(1, "Ração especial", "Catita comeu direitinho", vAnimal[6], cuid2));
  vAlimentacao.push_back(Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", vAnimal[7], cuid2));
  vAlimentacao.push_back(Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", vAnimal[4], cuid1));

  kgPeixeConsumidos[0] = vAnimal[0]->kgComidaConsumida(vAlimentacao[0].getPorcao());
  kgRacaoConsumidos[0] = vAnimal[6]->kgComidaConsumida(vAlimentacao[1].getPorcao());
  kgRacaoConsumidos[1] = vAnimal[7]->kgComidaConsumida(vAlimentacao[2].getPorcao());
  kgPeixeConsumidos[1] = vAnimal[4]->kgComidaConsumida(vAlimentacao[3].getPorcao());

  vAlimentacao[1].setPorcao(2);
  vAlimentacao[2].setComida("Ração");

  cout << " " << endl << " " << endl << "--------------------------------" << endl << endl << "Relatorio das alimentações " << endl << endl;

  for(Alimentacao &x: vAlimentacao) x.print();
  
  cout <<" " << endl << " " << endl << "--------------------------------" << endl << endl << "Relatorio de kg de comida gastos " << endl << endl;

  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos[0] + kgRacaoConsumidos[1] <<endl;

  cout << endl << "Tipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos[0] + kgPeixeConsumidos[1] <<endl;

  //Desalocando vAnimal
  for(Animal *&x : vAnimal) delete(x);
  
  return 0;
}