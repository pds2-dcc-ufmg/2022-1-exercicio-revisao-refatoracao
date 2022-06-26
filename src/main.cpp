#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"
using namespace std;



int main()
{
    Animal animal_01("13", "Ursidae", "Bobby");
    animal_01.print();

    Animal animal_02("1", "Ursidae", "Jorge");
    animal_02.print();

    Animal animal_03("7", "Herpestidae", "Bonina");
    animal_03.print();

    Animal animal_04("3", "Ursidae", "Felício");
    animal_04.print();

    Ursidae ursidae_01("Tony", "9", "Urso Pardo", 10.5);
    ursidae_01.print();

    Ursidae ursidae_02("Wanda", "10", "Urso Polar", 7);
    ursidae_02.print();

    Herpestidae herpestidae_01("Catita", "2", "Suricato");
    herpestidae_01.print();

    Herpestidae herpestidae_02("Carolina", "2", "Suricato");

    Cuidador cuidador_01("Ana Maria Rodrigues Lopes", "1234567799", "(31) 99876-6923", "10/10/2000", "R$ 3000");

    Cuidador cuidador_02("Fernanda Silva Santos", "9472567121", "(31) 99123-8970", "08/02/1995", "R$ 4000");

    Alimentacao refeicao_01(2, "Peixes", "Bobby só quis comer 2 porções de peixes hoje", cuidador_01, "Bobby", 2*5);

    Alimentacao refeicao_02(1, "Ração especial", "Catita comeu direitinho", cuidador_02, "Catita", herpestidae_01.racaoConsumida(1));

	Alimentacao refeicao_03(3, "Ração", "Carolina estava com um apetite e tanto", cuidador_02, "Carolina", herpestidae_02.racaoConsumida(3));

	Alimentacao refeicao_04(10, "Peixes", "Tony comeu um pouco da comida do Bobby", cuidador_01, "Tony", ursidae_01.peixesConsumidos(10));

	double qtdeRacao=refeicao_02.getquantidadeConsumida()+refeicao_03.getquantidadeConsumida();
	double qtdePeixe=refeicao_01.getquantidadeConsumida()+refeicao_04.getquantidadeConsumida();


    cout<<"\n\n--------------------------------\n\n"
		<<"Relatorio das alimentações \n" << endl;

    refeicao_01.print();

    refeicao_02.print();

    refeicao_03.print();

    refeicao_04.print();

	cout<<"\n\n--------------------------------\n\n";
	cout <<"Relatorio de kg de comida gastos \n" <<endl;
	
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " <<qtdeRacao<<endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " <<qtdePeixe<<endl;

    return 0;
}
