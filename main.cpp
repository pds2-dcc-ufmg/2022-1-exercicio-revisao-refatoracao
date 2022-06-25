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
  suricato_1.familia = "Herpestidae";
  suricato_1.nome ="Catita";
	suricato_1.idade = "2";
  suricato_1.especie = "Suricato";
  suricato_1.print();

  Herpestidae suricato_2;
  suricato_2.familia = "Herpestidae";
  suricato_2.nome ="Carolina";
	suricato_2.idade = "2";
  suricato_2.especie = "Suricato";
  suricato_2.print();

  Cuidador cuidador_1;
  cuidador_1.nome = "Ana Maria Rodrigues Lopes";
	cuidador_1.cpf = "1234567799";
	cuidador_1.telefone = "(31) 99876-6923";
	cuidador_1.data_nascimento = "10/10/2000";
  cuidador_1.salario = "R$ 3000";

  Cuidador cuidador_2;
  cuidador_2.nome = "Fernanda Silva Santos";
	cuidador_2.cpf = "9472567121";
	cuidador_2.telefone = "(31) 99123-8970";
	cuidador_2.data_nascimento= "08/02/1995";
  cuidador_2.salario = "R$ 4000";

  Alimentacao alimentacao_1;
  alimentacao_1.porcao = 2;
  alimentacao_1.comida = "Peixes";
  alimentacao_1.descricao = "Bobby só quis comer 2 porções de peixes hoje";
  alimentacao_1.cuidador = cuidador_1;
  alimentacao_1.nome_animal = "Bobby";
    
  Alimentacao alimentacao_2;
  alimentacao_2.porcao = 1;
  alimentacao_2.comida = "Ração especial";
  alimentacao_2.descricao = "Catita comeu direitinho";
  alimentacao_2.cuidador = cuidador_2;
  alimentacao_2.nome_animal = "Catita";
  
  Alimentacao alimentacao_3;
  alimentacao_3.porcao= 3;
  alimentacao_3.comida = "Ração";
  alimentacao_3.descricao = "Carolina estava com um apetite e tanto";
  alimentacao_3.cuidador = cuidador_2;
  alimentacao_3.nome_animal = "Carolina";
 
  Alimentacao alimentacao_4;
  alimentacao_4.porcao= 10;
  alimentacao_4.comida = "Peixes";
  alimentacao_4.descricao = "Tony comeu um pouco da comida do Bobby";
  alimentacao_4.cuidador = cuidador_1;
  alimentacao_4.nome_animal = "Tony";
  alimentacao_3.comida = "Ração";

  double kg_Peixe_Consumidos_01 = 0; //urso_1
  kg_Peixe_Consumidos_01 = 5*2;

  double kg_Peixe_Consumidos_02 = 0; //urso_2
  kg_Peixe_Consumidos_02 = urso_1.peixesConsumidos(10);

  double kg_Racao_Consumidos_01 = 0;  //suricato_1
  kg_Racao_Consumidos_01 += suricato_1.kgConsumidos(alimentacao_2.porcao);

  double kg_Racao_Consumidos_02 = 0;  //suricato_2
  kg_Racao_Consumidos_02 += suricato_2.kgConsumidos(alimentacao_3.porcao);

  
  cout <<" \n \n--------------------------------\n\nRelatório das alimentações \n" << endl;

  alimentacao_1.print();
  cout << "Descricao: " << alimentacao_1.descricao << endl << endl;

  alimentacao_2.print();
  cout << "Descricao: " << alimentacao_2.descricao << endl<<endl;

  alimentacao_3.print();
  cout << "Descricao: " << alimentacao_3.descricao << endl<< endl;

  alimentacao_4.print();
  cout << "Descricao: " << alimentacao_4.descricao << endl << "\n";

  cout << "\n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kg_Racao_Consumidos_01 + kg_Racao_Consumidos_02 <<endl;

  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kg_Peixe_Consumidos_01 + kg_Peixe_Consumidos_02 <<endl;

  return 0;

}
