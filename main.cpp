#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;

int main()
{

    Animal animal1;
    animal1.familia = "Ursidae";
    animal1.nome ="Bobby";
	animal1.idade = "13";
    animal1.print();
double kgPeixeConsumidos01 = 0;
    Animal animal2;
    animal2.familia = "Ursidae";
    animal2.nome ="Jorge";
	animal2.idade = "1";
    animal2.print();

    Animal animal3;
    animal3.familia = "Herpestidae";
    animal3.nome ="Bonina";
	animal3.idade = "7";
    animal3.print();

    Animal animal4;
    animal4.familia = "Ursidae";
    animal4.nome ="Felício";
	animal4.idade = "3";
    animal4.print();



    Ursidae e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.nome = "Tony";
    e02.idade = "9";
    e02.especie = "Urso Pardo";
    e02.kgPeixePorDIA = 10.5;
  e02.print();


    Ursidae e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.nome = "Wanda";
    e03.idade = "10";
    e03.especie = "Urso Polar";
    e03.kgPeixePorDIA = 7;
  e03.print();


    Herpestidae g01;
    g01.familia = "Herpestidae";
    g01.nome ="Catita";
	g01.idade = "2";
  g01.especie = "Suricato";
g01.print();
    Herpestidae g02;
    double bonificacao01 = 0;
    g02.familia = "Herpestidae";
    g02.nome ="Carolina";
	g02.idade = "2";
  g02.especie = "Suricato";

double kgPeixeConsumidos02 = 0;
double kgPeixeConsumidos03 = 0;
double kgPeixeConsumidos04 = 0;
double kgPeixeConsumidos05 = 0;

double kgRacaoConsumidos01 = 0;
double kgRacaoConsumidos02 = 0;
double kgRacaoConsumidos03 = 0;
  
  Cuidador cuid01;
  cuid01.nome = "Ana Maria Rodrigues Lopes";
	cuid01.cpf = "1234567799";
	cuid01.telefone = "(31) 99876-6923";
	cuid01.nascimento = "10/10/2000";
  cuid01.salario = "R$ 3000";

  Cuidador cuid2;
  cuid2.nome = "Fernanda Silva Santos";
	cuid2.cpf = "9472567121";
	cuid2.telefone = "(31) 99123-8970";
	cuid2.nascimento = "08/02/1995";

cuid2.salario = "R$ 4000";
    Alimentacao v01;
    v01.porcao= 2;
    v01.comida = "Peixes";
    v01.descricao = "Bobby só quis comer 2 porções de peixes hoje";
    v01.cuid = cuid01;
    v01.nomeAnimal = "Bobby";
    kgPeixeConsumidos01 = 5*2;
    Alimentacao v02;
    v02.porcao= 1;
    v02.comida = "Ração especial";
    v02.descricao = "Catita comeu direitinho";
    v02.cuid = cuid2;
    v02.nomeAnimal = "Catita";
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.porcao);

 Alimentacao v03;
    v03.porcao= 3;
    v03.comida = "Ração";
    v03.descricao = "Carolina estava com um apetite e tanto";
    v03.cuid = cuid2;
    v03.nomeAnimal = "Carolina";
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.porcao);

  Alimentacao v04;
    v04.porcao= 10;
    v04.comida = "Peixes";
    v04.descricao = "Tony comeu um pouco da comida do Bobby";
    v04.cuid = cuid01;
    v04.nomeAnimal = "Tony";
    v02.porcao = 2;
    v03.comida = "Ração";
kgPeixeConsumidos03 = 
  e02.PeixesConsumidos(10);



    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl << endl;

    v02.print();
    cout << " Descricao: " << v02.descricao << endl<<endl;

    v03.print();
    cout << " Descricao: " << v03.descricao << endl<< endl;

    v04.print();
    cout << " Descricao: " << v04.descricao << endl << "\n";






    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;

    return 0;
}
