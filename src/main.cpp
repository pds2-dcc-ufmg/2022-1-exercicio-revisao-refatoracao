#include <iostream>
#include <vector>
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Alimentacao.hpp"


int main()
{
//Animais
  Ursidae Bobby("Bobby",13);
  Bobby.print();

  Ursidae Jorge("Jorge",1);
  Jorge.print();

  Herpestidae Bonina("Bonina",7);
  Bonina.print();

  Ursidae Felicio("Felício",3);
  Felicio.print();

  Ursidae Tony("Tony",9,"Urso Pardo");
  Tony.print();

  Ursidae Wanda("Wanda",10,"Urso Polar");
  Wanda.print();

  Herpestidae Catita("Catita",2,"Suricato");
  Catita.print();

  Herpestidae Carolina("Carolina",2,"Suricato");


//Cuidadores
  Cuidador Ana("Ana Maria Rodrigues Lopes", "R$ 3000", "1234567799", "(31) 99876-6923", "10/10/2000");
  
  Cuidador Fernanda("Fernanda Silva Santos", "R$ 4000", "9472567121", "(31) 99123-8970", "08/02/1995");
  

//Relatório alimentações
  std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

  std::vector<Alimentacao> Peixes;
  std::vector<Alimentacao> Racao;

  Alimentacao Bobby_Ana(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje", Ana, &Bobby);
  Peixes.push_back(Bobby_Ana);
  Bobby_Ana.print();

  Alimentacao Catita_Fernanda(1,"Ração especial","Catita comeu direitinho", Fernanda, &Catita);
  Catita_Fernanda.print();
  Racao.push_back(Catita_Fernanda);

  Alimentacao Carolina_Fernanda(3,"Ração","Carolina estava com um apetite e tanto", Fernanda, &Carolina);
  Racao.push_back(Carolina_Fernanda);
  Carolina_Fernanda.print();

  Alimentacao Tony_Ana(10,"Peixes","Tony comeu um pouco da comida do Bobby",Ana, &Tony);
  Tony_Ana.print();
  Peixes.push_back(Tony_Ana);





//Relatório kg de comida gastos
  int KgTotalRacao = 0;
  for(auto i : Racao){
    KgTotalRacao += i.get_KgRacaoConsumido();
  }

  int KgTotalPeixe = 0;
  for(auto i : Peixes){
    KgTotalPeixe += i.get_PeixeConsumido();
  }

  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
  std::cout << "Tipo de comida: " << "Ração" << std::endl;
  std::cout << "Kg consumidos: " << KgTotalRacao << std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
  std::cout << "Kg consumidos: " << KgTotalPeixe << std::endl;

  return 0;
}
