#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main() {

    Animal animal1;
    animal1.familia = "Ursidae";
    animal1.nome ="Bobby";
    animal1.idade = 13;
    animal1.print();
	
    Animal animal2;
    animal2.familia = "Ursidae";
    animal2.nome ="Jorge";
    animal2.idade = 1;
    animal2.print();

    Animal animal3;
    animal3.familia = "Herpestidae";
    animal3.nome ="Bonina";
    animal3.idade = 7;
    animal3.print();

    Animal animal4;
    animal4.familia = "Ursidae";
    animal4.nome ="Felício";
    animal4.idade = 3;
    animal4.print();

    Ursidae e01;
    e01.nome = "Tony";
    e01.idade = 9;
    e01.especie = "Urso Pardo";
    e01.print();


    Ursidae e02;
    e02.nome = "Wanda";
    e02.idade= 10;
    e02.especie = "Urso Polar";
    e02.print();


    Herpestidae g01;
    g01.familia = "Herpestidae";
    g01.nome ="Catita";
    g01.idade = 2;
    g01.especie = "Suricato";
    g01.print();
	
    Herpestidae g02;
    g02.familia = "Herpestidae";
    g02.nome = "Carolina";
    g02.idade = 2;
    g02.especie = "Suricato";

    double kgPeixeConsumidos01 = 0;
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
    cuid01.aniversario = "10/10/2000";
    cuid01.salario = "R$ 3000";

    Cuidador cuid2;
    cuid2.nome = "Fernanda Silva Santos";
    cuid2.cpf = "9472567121";
    cuid2.telefone = "(31) 99123-8970";
    cuid2.aniversario = "08/02/1995";
    cuid2.salario = "R$ 4000";
	
    Alimentacao v01;
    v01.porcao = 2;
    v01.comida = "Peixes";
    v01.descricao = "Bobby só quis comer 2 porções de peixes hoje";
    v01.cuid = cuid01;
    v01.nomeAnimal = "Bobby";
    kgPeixeConsumidos01 = 5*2;
	
    Alimentacao v02;
    v02.porcao = 1;
    v02.comida = "Ração especial";
    v02.descricao = "Catita comeu direitinho";
    v02.cuid = cuid2;
    v02.nomeAnimal = "Catita";
    kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.porcao);

    Alimentacao v03;
    v03.porcao = 3;
    v03.comida = "Ração";
    v03.descricao = "Carolina estava com um apetite e tanto";
    v03.cuid = cuid2;
    v03.nomeAnimal = "Carolina";
    kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.porcao);

    Alimentacao v04;
    v04.porcao = 10;
    v04.comida = "Peixes";
    v04.descricao = "Tony comeu um pouco da comida do Bobby";
    v04.cuid = cuid01;
    v04.nomeAnimal = "Tony";
    kgPeixeConsumidos03 = e02.calculaPeixesConsumidos(v04.porcao);



    std::cout <<" \n \n--------------------------------\n \n Relatório das alimentações \n" << std::endl;

    v01.print();
    std::cout << " Descrição: " << v01.descricao << std::endl << std::endl;

    v02.print();
    std::cout << " Descrição: " << v02.descricao << std::endl << std::endl;

    v03.print();
    std::cout << " Descrição: " << v03.descricao << std::endl << std::endl;

    v04.print();
    std::cout << " Descrição: " << v04.descricao << std::endl << std::endl;


	
    std::cout <<" \n \n--------------------------------\n \n Relatório de kg de comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << std::endl;

    std::cout << "Tipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos02 << std::endl;

    return 0;
}
