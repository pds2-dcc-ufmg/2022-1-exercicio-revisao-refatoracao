#include <iostream>
#include <iomanip> 
#include <string>
#include <vector>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

void imprimirAnimais(const std::vector<Animal*> _listaAnimal)
{
  for(int i = 0; i < _listaAnimal.size(); i++)
  {
    _listaAnimal.at(i)->print();
  }
}

void imprimirTodaAlimentacao(std::vector<Alimentacao>& _listaAlimentacao)
{
   for(int i = 0; i < _listaAlimentacao.size(); i++)
  {
    _listaAlimentacao.at(i).print();
  }
}

void alimentarTodos(std::vector<Alimentacao>& _listaAlimentacao)
{
   for(int i = 0; i < _listaAlimentacao.size(); i++)
  {
    _listaAlimentacao.at(i).alimentar();
  }
}

int main()
{ 
  std::vector<Animal*> listaAnimal;
  std::vector<Alimentacao> listaAlimentacao;
  std::vector<Cuidador> listaCuidador;
  
  Animal* animal1 = new Animal("Bobby", "13", "Ursidae");
    listaAnimal.push_back(animal1);

  Animal* animal2 = new Animal("Jorge", "1", "Ursidae");
    listaAnimal.push_back(animal2);

  Animal* animal3 = new Animal("Bonina", "7", "Herpestidae");
    listaAnimal.push_back(animal3);

  Animal* animal4 = new Animal("Felício", "3", "Ursidae");
    listaAnimal.push_back(animal4);

  Ursidae* e02 = new Ursidae("Tony", "9", "Urso Pardo");
    listaAnimal.push_back(e02);

  Ursidae* e03 = new Ursidae("Wanda", "10", "Urso Polar");
    listaAnimal.push_back(e03);

  Herpestidae* g01 = new Herpestidae("Catita", "2", "Suricato");
    listaAnimal.push_back(g01);

  Herpestidae* g02 = new Herpestidae("Carolina", "2", "Suricato");
    listaAnimal.push_back(g02);

  imprimirAnimais(listaAnimal);
  
  Cuidador cuidador01;
    cuidador01.setNome("Ana Maria Rodrigues Lopes");
	  cuidador01.setCPF("1234567799");
	  cuidador01.setTelefone("(31) 99876-6923");
	  cuidador01.setDataNascimento("10/10/2000");
    cuidador01.setSalario(3000);
    listaCuidador.push_back(cuidador01);

  Cuidador cuidador02;
    cuidador02.setNome("Fernanda Silva Santos");
	  cuidador02.setCPF("9472567121");
	  cuidador02.setTelefone("(31) 99123-8970");
	  cuidador02.setDataNascimento("08/02/1995");
    cuidador02.setSalario(4000);
    listaCuidador.push_back(cuidador02);

  Alimentacao v01;
    v01.setCuidador(cuidador01);
    v01.setAnimal(animal1);
    v01.setPorcao(2);
    v01.setComida("Peixes");
    v01.setDescricao("Bobby só quis comer 2 porções de peixes hoje");
    listaAlimentacao.push_back(v01);

  Alimentacao v02;
    v02.setCuidador(cuidador02);
    v02.setAnimal(g01);
    v02.setPorcao(1);
    v02.setComida("Ração especial");
    v02.setDescricao("Catita comeu direitinho");
    listaAlimentacao.push_back(v02);

  Alimentacao v03;
    v03.setCuidador(cuidador02);
    v03.setAnimal(g02);
    v03.setPorcao(3);
    v03.setComida("Ração");
    v03.setDescricao("Carolina estava com um apetite e tanto");
    listaAlimentacao.push_back(v03);

  Alimentacao v04;
    v04.setCuidador(cuidador01);
    v04.setAnimal(e02);
    v04.setPorcao(10);
    v04.setComida("Peixes");
    v04.setDescricao("Tony comeu um pouco da comida do Bobby");
    listaAlimentacao.push_back(v04);

  alimentarTodos(listaAlimentacao);

  std::cout << std::endl << std::endl;
  std::cout << "--------------------------------";
  std::cout << std::endl << std::endl;

  std::cout << "Relatorio das alimentações" << std::endl << std::endl;

  imprimirTodaAlimentacao(listaAlimentacao);
  
  std::cout << std::endl << std::endl;
  std::cout <<"--------------------------------";
  std::cout << std::endl << std::endl;
  
  std::cout << "Relatorio de kg de comida gastos" << std::endl << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << Alimentacao::getGastoRacao() << std::endl;

  std::cout << std::endl;
  std::cout << "Tipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << Alimentacao::getGastoPeixe() << std::endl;

  for(int i = 0; i < listaAnimal.size(); i++)
  {
    delete listaAnimal.at(i);
  }

  return 0;
}
