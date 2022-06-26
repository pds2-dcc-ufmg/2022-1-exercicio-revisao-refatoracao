#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main() {

  Ursidae urso_1;
  urso_1.nome = "Tony";
  urso_1.idade = 9;
  urso_1.especie = "Urso Pardo";
  urso_1.kg_peixe_diario = 10.5;
  urso_1.print();

  Ursidae urso_2;
  urso_2.nome = "Wanda";
  urso_2.idade = 10;
  urso_2.especie = "Urso Polar";
  urso_2.kg_peixe_diario= 7;
  urso_2.print();

  Herpestidae suricato_1;
  suricato_1.setFamilia("Herpestidae");
  suricato_1.setNome("Catita");
	suricato_1.setIdade("2");
  suricato_1.setEspecie("Suricato");
  suricato_1.print();

  Herpestidae suricato_2;
  suricato_2.setFamilia("Herpestidae");
  suricato_2.setNome("Carolina");
	suricato_2.setIdade("2");
  suricato_2.setEspecie("Suricato");
  suricato_2.print();

  Cuidador cuidador_1;
  cuidador_1.setNome("Ana Maria Rodrigues Lopes");
	cuidador_1.setCpf("1234567799");
	cuidador_1.setTelefone("(31) 99876-6923");
	cuidador_1.setData_nascimento("10/10/2000");
  cuidador_1.setSalario("R$ 3000");

  Cuidador cuidador_2;
  cuidador_2.setNome("Fernanda Silva Santos");
	cuidador_2.setCpf("9472567121");
	cuidador_2.setTelefone("(31) 99123-8970");
	cuidador_2.setData_nascimento("08/02/1995");
  cuidador_2.setSalario("R$ 4000");

  Alimentacao alimentacao_1;
  alimentacao_1.setPorcao(2) ;
  alimentacao_1.setComida("Peixes");
  alimentacao_1.setDescricao("Bobby só quis comer 2 porções de peixes hoje");
  alimentacao_1.setCuidador(cuidador_1);
  alimentacao_1.setNome_animal("Bobby");
    
  Alimentacao alimentacao_2;
  alimentacao_2.setPorcao(1);
  alimentacao_2.setComida("Ração especial");
  alimentacao_2.setDescricao("Catita comeu direitinho");
  alimentacao_2.setCuidador(cuidador_2);
  alimentacao_2.setNome_animal("Catita");
  
  Alimentacao alimentacao_3;
  alimentacao_3.setPorcao(3);
  alimentacao_3.setComida("Ração");
  alimentacao_3.setDescricao("Carolina estava com um apetite e tanto");
  alimentacao_3.setCuidador(cuidador_2);
  alimentacao_3.setNome_animal("Carolina");
  alimentacao_3.setComida("Ração");
 
  Alimentacao alimentacao_4;
  alimentacao_4.setPorcao(10);
  alimentacao_4.setComida("Peixes");
  alimentacao_4.setDescricao("Tony comeu um pouco da comida do Bobby");
  alimentacao_4.setCuidador(cuidador_1);
  alimentacao_4.setNome_animal("Tony");
  

  double kg_Peixe_Consumidos_01 = 0; //urso_1
  kg_Peixe_Consumidos_01 = 5*2;

  double kg_Peixe_Consumidos_02 = 0; //urso_2
  kg_Peixe_Consumidos_02 = urso_1.peixesConsumidos(10);

  double kg_Racao_Consumidos_01 = 0;  //suricato_1
  kg_Racao_Consumidos_01 += suricato_1.kgConsumidos(alimentacao_2.getPorcao());

  double kg_Racao_Consumidos_02 = 0;  //suricato_2
  kg_Racao_Consumidos_02 += suricato_2.kgConsumidos(alimentacao_3.getPorcao());

  
  cout <<" \n \n--------------------------------\n\nRelatório das alimentações \n" << endl;

  alimentacao_1.print();
  cout << "Descricao: " << alimentacao_1.getDescricao() << endl << endl;

  alimentacao_2.print();
  cout << "Descricao: " << alimentacao_2.getDescricao() << endl<<endl;

  alimentacao_3.print();
  cout << "Descricao: " << alimentacao_3.getDescricao()<< endl<< endl;

  alimentacao_4.print();
  cout << "Descricao: " << alimentacao_4.getDescricao() << endl << "\n";

  cout << "\n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kg_Racao_Consumidos_01 + kg_Racao_Consumidos_02 <<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kg_Peixe_Consumidos_01 + kg_Peixe_Consumidos_02 <<endl;

  return 0;

}
