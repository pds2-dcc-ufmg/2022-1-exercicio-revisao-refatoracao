#include <iostream>
#include <vector>
#include <iterator>

#include "include/Animal.hpp"
#include "include/Herpestidae.hpp"
#include "include/Ursidae.hpp"
#include "include/Cuidador.hpp"
#include "include/Alimentacao.hpp"

using namespace std;

int main(){
  double kgPeixeConsumidos[2] {0,0};
  double kgRacaoConsumidos[2] {0,0};

  vector<Animal*> vectorAnimal;
  
  vectorAnimal.push_back(new Animal("Bobby", 13 , "Ursidae"));
  vectorAnimal.push_back(new Animal("Jorge", 1 , "Ursidae"));
  vectorAnimal.push_back(new Animal("Bonina", 7 , "Herpestidae"));
  vectorAnimal.push_back(new Animal("Felício", 3 , "Ursidae"));
  vectorAnimal.push_back(new Ursidae("Tony", 9 , "Urso Pardo", 10.5));
  vectorAnimal.push_back(new Ursidae("Wanda", 10 , "Urso Polar", 7));
  vectorAnimal.push_back(new Herpestidae("Catita", 2 , "Suricato"));
  vectorAnimal.push_back(new Herpestidae("Carolina", 2 , "Suricato"));
  auto iteratorvectorAnimal = vectorAnimal.begin();
  
  for(; (iteratorvectorAnimal + 1) != vectorAnimal.end(); iteratorvectorAnimal++){
    (*iteratorvectorAnimal)->print();
  } 

  vector<Cuidador*> vectorCuidador;

  vectorCuidador.push_back(new Cuidador("Ana Maria Rodrigues Lopes", 3000, 1234567799, "(31) 99876-6923", "10/10/2000"));
  vectorCuidador.push_back(new Cuidador("Fernanda Silva Santos", 4000, 9472567121, "(31) 99123-8970", "08/02/1995"));
    
  vector<Alimentacao*> vectorAlimentacao;

  vectorAlimentacao.push_back(new Alimentacao(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", vectorAnimal[0]->getnome(), vectorCuidador[0]));
  vectorAlimentacao.push_back(new Alimentacao(1, "Ração especial", "Catita comeu direitinho", vectorAnimal[6]->getnome(), vectorCuidador[1]));
  vectorAlimentacao.push_back(new Alimentacao(3, "Ração", "Carolina estava com um apetite e tanto", vectorAnimal[7]->getnome(), vectorCuidador[1]));
  vectorAlimentacao.push_back(new Alimentacao(10, "Peixes", "Tony comeu um pouco da comida do Bobby", vectorAnimal[4]->getnome(), vectorCuidador[0]));

  kgPeixeConsumidos[0] = vectorAnimal[0]->kgComidaConsumida(vectorAlimentacao[0]->getPorcao());
  kgRacaoConsumidos[0] = vectorAnimal[6]->kgComidaConsumida(vectorAlimentacao[1]->getPorcao());
  kgRacaoConsumidos[1] = vectorAnimal[7]->kgComidaConsumida(vectorAlimentacao[2]->getPorcao());
  kgPeixeConsumidos[1] = vectorAnimal[4]->kgComidaConsumida(vectorAlimentacao[3]->getPorcao());

  vectorAlimentacao[1]->setPorcao(2);
  vectorAlimentacao[2]->setComida("Ração");

  cout << " " << endl << " " << endl << "--------------------------------" << endl << endl << "Relatorio das alimentações " << endl << endl;

  for(auto iteratorvectorAlimentacao = vectorAlimentacao.begin(); (iteratorvectorAlimentacao + 1) != vectorAlimentacao.end(); iteratorvectorAlimentacao++){
    (*iteratorvectorAlimentacao)->print();
  } 

  cout <<" " << endl << " " << endl << "--------------------------------" << endl << endl << "Relatorio de kg de comida gastos " << endl << endl;

  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos[0] + kgRacaoConsumidos[1] <<endl;

  cout << endl << "Tipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos[0] + kgPeixeConsumidos[1] <<endl;

  return 0;
}
