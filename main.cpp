#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"


int main()
{
  Animal animal1;
  animal1.getFamily() = "Ursidae";
  animal1.getNome() ="Bobby";
	animal1.getIdade() = "13";

  animal1.print();

  double kgPeixeConsumidos01 = 0;

  Animal animal2;
  animal2.getFamily() = "Ursidae";
  animal2.getNome() ="Jorge";
	animal2.getIdade() = "1";

  animal2.print();

  Animal animal3;
  animal3.getFamily() = "Herpestidae";
  animal3.getNome() ="Bonina";
	animal3.getIdade() = "7";
  
  animal3.print();

  Animal animal4;
  animal4.getFamily() = "Ursidae";
  animal4.getNome() ="Felício";
	animal4.getIdade() = "3";
  
  animal4.print();



  Ursidae e02;
  int numAtendimentos02 = 0;
  double comissao02 = 0;
  e02.get_ursi_nome() = "Tony";
  e02.Ursi_Idade = 9;
  e02.get_ursi_especie() = "Urso Pardo";
  e02.kgPeixePorDIA = 10.5;
  
  e02.print();


  Ursidae e03;
  int numAtendimentos03 = 0;
  double comissao03 = 0;
  e03.get_ursi_nome() = "Wanda";
  e03.Ursi_Idade = 10;
  e03.get_ursi_especie() = "Urso Polar";
  e03.kgPeixePorDIA = 7;
  
  e03.print();


  Herpestidae g01;
  g01.getFamily() = "Herpestidae";
  g01.getNome() ="Catita";
	g01.getIdade() = "2";
  g01.getSpecies() = "Suricato";
  g01.print();

  Herpestidae g02;
  double bonificacao01 = 0;
  g02.getFamily() = "Herpestidae";
  g02.getNome() ="Carolina";
	g02.getIdade() = "2";
  g02.getSpecies() = "Suricato";

  double kgPeixeConsumidos02 = 0;
  double kgPeixeConsumidos03 = 0;
  double kgPeixeConsumidos04 = 0;
  double kgPeixeConsumidos05 = 0;

  double kgRacaoConsumidos01 = 0;
  double kgRacaoConsumidos02 = 0;
  double kgRacaoConsumidos03 = 0;
  
  Cuidador cuid01;
  cuid01.get_nome_func() = "Ana Maria Rodrigues Lopes";
	cuid01.get_cpf() = "1234567799";
	cuid01.get_telefone() = "(31) 99876-6923";
	cuid01.get_Birth() = "10/10/2000";
  cuid01.get_salario() = "R$ 3000";

  Cuidador cuid2;
  cuid2.get_nome_func() = "Fernanda Silva Santos";
	cuid2.get_cpf() = "9472567121";
	cuid2.get_telefone() = "(31) 99123-8970";
	cuid2.get_Birth() = "08/02/1995";
  cuid2.get_salario() = "R$ 4000";
  
  Alimentacao v01;
  v01.porcao = 2;
  v01.get_comida() = "Peixes";
  v01.get_descricao() = "Bobby só quis comer 2 porções de peixes hoje";
  v01.get_cuid() = cuid01;
  v01.get_nome_animal() = "Bobby";
  kgPeixeConsumidos01 = 5*2;
  
  Alimentacao v02;
  v02.porcao= 1;
  v02.get_comida() = "Ração especial";
  v02.get_descricao() = "Catita comeu direitinho";
  v02.get_cuid() = cuid2;
  v02.get_nome_animal() = "Catita";
  kgRacaoConsumidos01 += g01.kgConsumidosDeRacao(v02.porcao);

  Alimentacao v03;
  v03.porcao= 3;
  v03.get_comida() = "Ração";
  v03.get_descricao() = "Carolina estava com um apetite e tanto";
  v03.get_cuid() = cuid2;
  v03.get_nome_animal() = "Carolina";
  kgRacaoConsumidos02 += g02.kgConsumidosDeRacao(v03.porcao);

  Alimentacao v04;
  v04.porcao= 10;
  v04.get_comida() = "Peixes";
  v04.get_descricao() = "Tony comeu um pouco da comida do Bobby";
  v04.get_cuid() = cuid01;
  v04.get_nome_animal() = "Tony";
  e02.calcula_PEIXES_CONSUMIDOS(10);



  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;

  v01.print();
  std::cout <<"Descricao: " << v01.get_descricao() <<std::endl;

  v02.print();
  cout << " Descricao: " << v02.get_descricao() <<std::endl;

  v03.print();
  cout << " Descricao: " << v03.get_descricao() <<std::endl;

  v04.print();
  cout << " Descricao: " << v04.get_descricao() <<std::endl;






  std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" <<std::endl;
  
  std::cout << "Tipo de comida: " << "Ração" <<std::endl;
  std::cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<std::endl;

  std::cout << "\nTipo de comida: " << "Peixe" <<std::endl;
  std::cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<std::endl;

  return 0;
}
