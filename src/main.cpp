#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main(){

  // Animais
  Ursidae animalA;
    animalA.set_nome("Bobby");
    animalA.set_idade(13);
    animalA.set_familia();
    animalA.print();

  Ursidae animalB;
    animalB.set_nome("Jorge");
  	animalB.set_idade(1);
    animalB.set_familia();
    animalB.print();

  Herpestidae animalC;
    animalC.set_nome("Bonina");
	  animalC.set_idade(7);
    animalC.set_familia();
    animalC.print();
  
  Ursidae animalD;
    animalD.set_nome("Felício");
   	animalD.set_idade(3);    
    animalD.set_familia();
    animalD.print();

  Ursidae animalE;
    animalE.set_nome("Tony");
    animalE.set_idade(9);
    animalE.set_familia();
    animalE.set_especie("Urso Pardo");
    animalE.kg_peixe_diario = 10.5;
    animalE.print();

  Ursidae animalF;
    animalF.set_nome("Wanda");
    animalF.set_idade(10);
    animalF.set_familia();
    animalF.set_especie("Urso Polar");
    animalF.kg_peixe_diario = 7;
    animalF.print();

  Herpestidae animalG;
    animalG.set_nome("Catita");
   	animalG.set_idade(2);
    animalG.set_familia();
    animalG.set_especie("Suricato");
    animalG.print();

  Herpestidae animalH;
    animalH.set_nome("Carolina");
	  animalH.set_idade(2);
    animalH.set_familia();
    animalH.set_especie("Suricato");


  // Cuidadores
  Cuidador cuidA;
    cuidA.nome = "Ana Maria Rodrigues Lopes";

  Cuidador cuidB;
    cuidB.nome = "Fernanda Silva Santos";

  // Alimentação
  Alimentacao dietaA;
    dietaA.porcao= 2;
    animalA.set_comida();
    dietaA.descricao = "Bobby só quis comer 2 porções de peixes hoje";
    dietaA.cuid = cuidA;
    dietaA.animal = animalA;
    animalA.kg_consumida = animalA.peixes_por_porcao*2;

  Alimentacao dietaB;
    dietaB.porcao= 1;
    animalG.set_comida();
    dietaB.descricao = "Catita comeu direitinho";
    dietaB.cuid = cuidB;
    dietaB.animal = animalG;
    animalG.kg_consumida = animalG.kg_consumidos_racao(dietaB.porcao);

  Alimentacao dietaC;
    dietaC.porcao= 3;
    animalH.set_comida();
    dietaC.descricao = "Carolina estava com um apetite e tanto";
    dietaC.cuid = cuidB;
    dietaC.animal = animalH;
    animalH.kg_consumida = animalH.kg_consumidos_racao(dietaC.porcao);

  Alimentacao dietaD;
    dietaD.porcao= 10;
    animalE.set_comida();
    dietaD.descricao = "Tony comeu um pouco da comida do Bobby";
    dietaD.cuid = cuidA;
    dietaD.animal = animalE;
    dietaB.porcao = 2;
    animalA.set_comida();
    animalE.kg_consumida = animalE.calcula_peixes_consumidos(10);

   // Relatório de alimentação
    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
    dietaA.print();
    cout << " Descricao: " << dietaA.descricao << endl << endl;
    dietaB.print();
    cout << " Descricao: " << dietaB.descricao << endl<<endl;
    dietaC.print();
    cout << " Descricao: " << dietaC.descricao << endl<< endl;
    dietaD.print();
    cout << " Descricao: " << dietaD.descricao << endl << endl;

  // Relatório de pesagem de comida
    cout << endl << endl << "--------------------------------" << endl << endl << "Relatorio de kg de comida gastos" << endl << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << animalH.kg_consumida + animalG.kg_consumida << endl << endl;
    cout << "Tipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << animalA.kg_consumida + animalE.kg_consumida << endl;

   return 0;
}
