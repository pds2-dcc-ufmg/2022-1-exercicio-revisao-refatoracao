#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

int main()
{
     Animal animal1;

     animal1.familia = "Ursidae";
     animal1.nome = "Bobby";
     animal1.idade = "13";
     animal1.ImprimirAnimal();

     double kgPeixeConsumidos01 = 0;

     Animal animal2;

     animal2.familia = "Ursidae";
     animal2.nome = "Jorge";
     animal2.idade = "1";
     animal2.ImprimirAnimal();

     Animal animal3;

     animal3.familia = "Herpestidae";
     animal3.nome = "Bonina";
     animal3.idade = "7";
     animal3.ImprimirAnimal();

     Animal animal4;

     animal4.familia = "Ursidae";
     animal4.nome = "Felício";
     animal4.idade = "3";
     animal4.ImprimirAnimal();

     Ursidae ursidae2;

     int numAtendimentos02 = 0;
     double comissao02 = 0;

     ursidae2.nome = "Tony";
     ursidae2.idade = 9;
     ursidae2.especie = "Urso Pardo";
     ursidae2.KgPeixePorDia = 10.5;
     ursidae2.ImprimirAnimal();

     Ursidae ursidae3;

     int numAtendimentos03 = 0;
     double comissao03 = 0;

     ursidae3.nome = "Wanda";
     ursidae3.idade = 10;
     ursidae3.especie = "Urso Polar";
     ursidae3.KgPeixePorDia = 7;
     ursidae3.ImprimirAnimal();

     Herpestidae g01;

     g01.familia = "Herpestidae";
     g01.nome = "Catita";
     g01.idade = "2";
     g01.especie = "Suricato";
     g01.ImprimirAnimal();

     Herpestidae g02;

     double bonificacao01 = 0;

     g02.familia = "Herpestidae";
     g02.nome = "Carolina";
     g02.idade = "2";
     g02.especie = "Suricato";

     double kgPeixeConsumidos02 = 0;
     double kgPeixeConsumidos03 = 0;
     double kgPeixeConsumidos04 = 0;
     double kgPeixeConsumidos05 = 0;

     double kgRacaoConsumidos01 = 0;
     double kgRacaoConsumidos02 = 0;
     double kgRacaoConsumidos03 = 0;

     Cuidador cuidador1;

     cuidador1.nome = "Ana Maria Rodrigues Lopes";
     cuidador1.cpf = "1234567799";
     cuidador1.telefone = "(31) 99876-6923";
     cuidador1.data_nascimento = "10/10/2000";
     cuidador1.salario = "R$ 3000";

     Cuidador cuidador2;

     cuidador2.nome = "Fernanda Silva Santos";
     cuidador2.cpf = "9472567121";
     cuidador2.telefone = "(31) 99123-8970";
     cuidador2.data_nascimento = "08/02/1995";
     cuidador2.salario = "R$ 4000";

     Alimentacao alimentacao1;

     alimentacao1.porcao = 2;
     alimentacao1.comida = "Peixes";
     alimentacao1.descricao = "Bobby só quis comer 2 porções de peixes hoje";
     alimentacao1.cuid = cuidador1;
     alimentacao1.animal = "Bobby";
     kgPeixeConsumidos01 = 5 * 2;

     Alimentacao alimentacao2;

     alimentacao2.porcao = 1;
     alimentacao2.comida = "Ração especial";
     alimentacao2.descricao = "Catita comeu direitinho";
     alimentacao2.cuidador = cuidador2;
     alimentacao2.animal = "Catita";
     kgRacaoConsumidos01 += g01.KgConsumidosDeRacao(alimentacao2.porcao);

     Alimentacao alimentacao3;

     alimentacao3.porcao = 3;
     alimentacao3.comida = "Ração";
     alimentacao3.descricao = "Carolina estava com um apetite e tanto";
     alimentacao3.cuid = cuidador2;
     alimentacao3.animal = "Carolina";
     kgRacaoConsumidos02 += g02.KgConsumidosDeRacao(alimentacao3.porcao);

     Alimentacao alimentacao4;

     alimentacao4.porcao = 10;
     alimentacao4.comida = "Peixes";
     alimentacao4.descricao = "Tony comeu um pouco da comida do Bobby";
     alimentacao4.cuid = cuidador1;
     alimentacao4.animal = "Tony";
     alimentacao2.porcao = 2;
     alimentacao3.comida = "Ração";
     kgPeixeConsumidos03 = ursidae2.CalcularPeixesConsumidos(10);

     std::cout << "\n\n--------------------------------\n\nRelatorio das alimentações\n" << std::endl;

     alimentacao1.ImprimirAlimentacao();

     alimentacao2.ImprimirAlimentacao();

     alimentacao3.ImprimirAlimentacao();

     alimentacao4.ImprimirAlimentacao();

     std::cout << " \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;

     std::cout << "Tipo de comida: " << "Ração" << std::endl;

     std::cout << "Kg consumidos: " << kgRacaoConsumidos01 + kgRacaoConsumidos02 << std::endl;

     std::cout << "\nTipo de comida: " << "Peixe" << std::endl;

     std::cout << "Kg consumidos: " << kgPeixeConsumidos01 + kgPeixeConsumidos03 << std::endl;

     return 0;
}
