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
    animal1.setFamilia("Ursidae");
    animal1.setNome("Bobby");
    animal1.setIdade("13");
    animal1.print();
    
    Animal animal2;
    animal2.setFamilia("Ursidae");
    animal2.setNome("Jorge");
    animal2.setIdade("1");
    animal2.print();

    Animal animal3;
    animal3.setFamilia("Herpestidae");
    animal3.setNome("Bonina");
    animal3.setIdade("7");
    animal3.print();

    Animal animal4;
    animal4.setFamilia("Ursidae");
    animal4.setNome("Felício");
    animal4.setIdade("3");
    animal4.print();



    Ursidae e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.setNome("Tony");
    e02.setIdade(9);
    e02.setEspecie("Urso Pardo");
    e02.setKgPeixePorDia(10.5);
    e02.print();

    Ursidae e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.setNome("Wanda");
    e03.setIdade(10);
    e03.setEspecie("Urso Polar");
    e03.setKgPeixePorDia(7);
    e03.print();



    Herpestidae g01;
    g01.setFamilia("Herpestidae");
    g01.setNome("Catita");
    g01.setIdade("2");
    g01.setEspecie("Suricato");
    g01.print();

    Herpestidae g02;
    double bonificacao01 = 0;
    g02.setFamilia("Herpestidae");
    g02.setNome("Carolina");
    g02.setIdade("2");
    g02.setEspecie("Suricato");

    

    Cuidador cuid01;
    cuid01.setNome("Ana Maria Rodrigues Lopes");
    cuid01.setCpf("1234567799");
    cuid01.setTelefone("(31) 99876-6923");
    cuid01.setNascimento("10/10/2000");
    cuid01.setSalario("R$ 3000");

    Cuidador cuid2;
    cuid2.setNome("Fernanda Silva Santos");
    cuid2.setCpf("9472567121");
    cuid2.setTelefone("(31) 99123-8970");
    cuid2.setNascimento("08/02/1995");
    cuid2.setSalario("R$ 4000");


    double kgPeixeConsumidos01 = 0;
    double kgPeixeConsumidos02 = 0;
    double kgPeixeConsumidos03 = 0;
    double kgPeixeConsumidos04 = 0;
    double kgPeixeConsumidos05 = 0;


    double kgRacaoConsumidos01 = 0;
    double kgRacaoConsumidos02 = 0;
    double kgRacaoConsumidos03 = 0;



    Alimentacao v01;
    v01.setPorcao(2);
    v01.setComida("Peixes");
    v01.setDescricao("Bobby só quis comer 2 porções de peixes hoje");
    v01.setCuidador(cuid01);
    v01.setNomeAnimal("Bobby");
    kgPeixeConsumidos01 = 5 * 2;
    
    Alimentacao v02;
    v02.setPorcao(1);
    v02.setComida("Ração especial");
    v02.setDescricao("Catita comeu direitinho");
    v02.setCuidador(cuid2);
    v02.setNomeAnimal("Catita");
    kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.getPorcao());

    Alimentacao v03;
    v03.setPorcao(3);
    v03.setComida("Ração");
    v03.setDescricao("Carolina estava com um apetite e tanto");
    v03.setCuidador(cuid2);
    v03.setNomeAnimal("Carolina");
    kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.getPorcao());

    Alimentacao v04;
    v04.setPorcao(10);
    v04.setComida("Peixes");
    v04.setDescricao("Tony comeu um pouco da comida do Bobby");
    v04.setCuidador(cuid01);
    v04.setNomeAnimal("Tony");
    v02.setPorcao(2);
    v03.setComida("Ração");
    kgPeixeConsumidos03 = e02.calculaPeixesConsumidos(10);



    cout << " \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;



    v01.print();
    cout << " Descricao: " << v01.getDescricao() << endl << endl;

    v02.print();
    cout << " Descricao: " << v02.getDescricao() << endl << endl;

    v03.print();
    cout << " Descricao: " << v03.getDescricao() << endl << endl;

    v04.print();
    cout << " Descricao: " << v04.getDescricao() << endl << "\n";



    cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
    
    cout << "Tipo de comida: " << "Ração" << endl;
    
    cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    
    cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << endl;

    return 0;
}