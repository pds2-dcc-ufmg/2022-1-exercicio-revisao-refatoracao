#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;



int main()
{

	Animal animal_01;
    animal_01.familia = "Ursidae";
    animal_01.nome ="Bobby";
	animal_01.idade = "13";
    animal_01.print();

    Animal animal_02;
    animal_02.familia = "Ursidae";
    animal_02.nome ="Jorge";
	animal_02.idade = "1";
    animal_02.print();

    Animal animal_03;
    animal_03.familia = "Herpestidae";
    animal_03.nome ="Bonina";
	animal_03.idade = "7";
    animal_03.print();

    Animal animal_04;
    animal_04.familia = "Ursidae";
    animal_04.nome ="Felício";
	animal_04.idade = "3";
    animal_04.print();

    Ursidae ursidae_01;
	ursidae_01.familia = "Ursidae";
    ursidae_01.nome = "Tony";
    ursidae_01.idade = "9";
    ursidae_01.especie = "Urso Pardo";
    ursidae_01.qtdePeixe = 10.5;
    ursidae_01.print();

    Ursidae ursidae_02;
	ursidae_02.familia = "Ursidae";
    ursidae_02.nome = "Wanda";
    ursidae_02.idade = "10";
    ursidae_02.especie = "Urso Polar";
    ursidae_02.qtdePeixe = 7;
	ursidae_02.print();

    Herpestidae herpestidae_01;
    herpestidae_01.familia = "Herpestidae";
    herpestidae_01.nome ="Catita";
	herpestidae_01.idade = "2";
  	herpestidae_01.especie = "Suricato";
	herpestidae_01.print();

    Herpestidae herpestidae_02;
    herpestidae_02.familia = "Herpestidae";
    herpestidae_02.nome ="Carolina";
	herpestidae_02.idade = "2";
	herpestidae_02.especie = "Suricato";

	Cuidador cuidador_01;
	cuidador_01.nome = "Ana Maria Rodrigues Lopes";
	cuidador_01.cpf = "1234567799";
	cuidador_01.telefone = "(31) 99876-6923";
	cuidador_01.dataNascimento = "10/10/2000";
	cuidador_01.salario = "R$ 3000";

	Cuidador cuidador_02;
	cuidador_02.nome = "Fernanda Silva Santos";
	cuidador_02.cpf = "9472567121";
	cuidador_02.telefone = "(31) 99123-8970";
	cuidador_02.dataNascimento = "08/02/1995";
	cuidador_02.salario = "R$ 4000";

    Alimentacao refeicao_01;
    refeicao_01.porcao= 2;
    refeicao_01.comida = "Peixes";
    refeicao_01.descricao = "Bobby só quis comer 2 porções de peixes hoje";
    refeicao_01.cuidador = cuidador_01;
    refeicao_01.nomeAnimal = "Bobby";
    refeicao_01.quantidadeConsumida+=5*2;

    Alimentacao refeicao_02;
    refeicao_02.porcao= 1;
    refeicao_02.comida = "Ração especial";
    refeicao_02.descricao = "Catita comeu direitinho";
    refeicao_02.cuidador = cuidador_02;
    refeicao_02.nomeAnimal = "Catita";
	refeicao_02.quantidadeConsumida+=herpestidae_01.racaoConsumida(refeicao_02.porcao);

	Alimentacao refeicao_03;
    refeicao_03.porcao= 3;
    refeicao_03.comida = "Ração";
    refeicao_03.descricao = "Carolina estava com um apetite e tanto";
    refeicao_03.cuidador = cuidador_02;
    refeicao_03.nomeAnimal = "Carolina";
  	refeicao_03.quantidadeConsumida+= herpestidae_02.racaoConsumida(refeicao_03.porcao);

	Alimentacao refeicao_04;
    refeicao_04.porcao=10;
    refeicao_04.comida = "Peixes";
    refeicao_04.descricao = "Tony comeu um pouco da comida do Bobby";
    refeicao_04.cuidador = cuidador_01;
    refeicao_04.nomeAnimal = "Tony";
	refeicao_04.quantidadeConsumida+=ursidae_01.peixesConsumidos(refeicao_04.porcao);

	double qtdeRacao=refeicao_02.quantidadeConsumida+refeicao_03.quantidadeConsumida;
	double qtdePeixe=refeicao_01.quantidadeConsumida+refeicao_04.quantidadeConsumida;


    cout<<"\n\n--------------------------------\n\n"
		<<"Relatorio das alimentações \n" << endl;

    refeicao_01.print();
    cout<<" Descricao: "<< refeicao_01.descricao << endl << endl;

    refeicao_02.print();
    cout<<" Descricao: "<< refeicao_02.descricao << endl<<endl;

    refeicao_03.print();
    cout<<" Descricao: "<< refeicao_03.descricao << endl<< endl;

    refeicao_04.print();
    cout<<" Descricao: "<< refeicao_04.descricao << endl << "\n";

	cout<<"\n\n--------------------------------\n\n";
	cout <<"Relatorio de kg de comida gastos \n" <<endl;
	
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " <<qtdeRacao<<endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " <<qtdePeixe<<endl;

    return 0;
}
