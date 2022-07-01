#include <iostream>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

int main()
{
  Animal animal1 = Animal(13,"Ursidae","Bobby");
  animal1.print();

  Animal animal2 = Animal(1,"Ursidae","Jorge");
  animal2.print();

  Animal animal3 = Animal(7,"Herpestidae","Bonina");
  animal3.print();

  Animal animal4 = Animal(3,"Ursidae","Felício");
  animal4.print();

  Ursidae e02 = Ursidae(10.5,"Urso Pardo",Animal(9,"Ursidae","Tony"));
  e02.print();

  Ursidae e03 = Ursidae(7,"Urso Polar",Animal(10,"Ursidae","Wanda"));
  e03.print();

  Herpestidae g01 = Herpestidae("Suricato",Animal(2,"Herpestidae","Catita"));
  g01.print();

  Herpestidae g02 = Herpestidae("Suricato",Animal(2,"Herpestidae","Carolina"));
  
  Cuidador cuid01 = Cuidador("Ana Maria Rodrigues Lopes","1234567799","(31) 99876-6923","10/10/2000","R$ 3000");

  Cuidador cuid2 = Cuidador("Fernanda Silva Santos","9472567121","(31) 99123-8970","08/02/1995","R$ 4000");
    
  Alimentacao v01 = Alimentacao(2,"Peixes","Bobby só quis comer 2 porções de peixes hoje",cuid01,"Bobby");

  Alimentacao v02 = Alimentacao(1,"Ração especial","Catita comeu direitinho",cuid2,"Catita");

  Alimentacao v03 = Alimentacao(3,"Ração","Carolina estava com um apetite e tanto",cuid2,"Carolina");

  Alimentacao v04 = Alimentacao(10,"Peixes","Tony comeu um pouco da comida do Bobby",cuid01,"Tony");
    
  v02.Set_porcao(2);
  v03.Set_comida("Ração");

  int kgPeixeConsumidos01 = 5*2;
  int kgRacaoConsumidos01 = g01.kgConsumidosDeRacao(v02.Get_porcao());
  int kgRacaoConsumidos02 = g02.kgConsumidosDeRacao(v03.Get_porcao());
  int kgPeixeConsumidos03 = e02.calcula_PEIXES_CONSUMIDOS(10);

  cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
  v01.print();
  cout << " Descricao: " << v01.Get_descricao() << endl << endl;
  v02.print();
  cout << " Descricao: " << v02.Get_descricao() << endl<<endl;
  v03.print();
  cout << " Descricao: " << v03.Get_descricao() << endl<< endl;
  v04.print();
  cout << " Descricao: " << v04.Get_descricao() << endl << "\n";
  cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << endl;
  cout << "Tipo de comida: " << "Ração" << endl;
  cout << "Kg consumidos: " << kgRacaoConsumidos01+kgRacaoConsumidos02<<endl;
  cout << "\nTipo de comida: " << "Peixe" << endl;
  cout << "Kg consumidos: " << kgPeixeConsumidos01+kgPeixeConsumidos03<<endl;
  return 0;
}
