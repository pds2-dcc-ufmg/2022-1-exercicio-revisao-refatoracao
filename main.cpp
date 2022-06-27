#include <iostream>
#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"


int main(){

    Animal animal1( "13" , "Ursidae" , "Bobby" ) ;
    Animal animal2 ( "1" , "Ursidae" , "Jorge" ) ;
    Animal animal3 ( "7" , "Herpestidae" , "Bonina") ;
    Animal animal4 ( "3" , "Ursidae" , "Felício" ) ;
  
    animal1.print();
    animal2.print();
    animal3.print();
    animal4.print();
  
    Animal ursidae ( "9" , "Ursidae" , "Tony") ;
    Ursidae ursidae1 ( ursidae , "Urso Pardo" , 10.5 ) ;

  
    ursidae.SetAtributos ("nome" , "Wanda") ;
    ursidae.SetAtributos ("idade" , "10") ;
    Ursidae ursidae2 ( ursidae , "Urso Polar" , 7.0 ) ;
  
    ursidae1.print();
    ursidae2.print();

  
    Animal herpestidae ( "2" , "Herpestidae" , "Catita");
    Herpestidae herpestidae1 ( herpestidae , "Suricato" );


    herpestidae.SetAtributos("nome", "Carolina") ;
    herpestidae.SetAtributos( "idade", "2") ;
    Herpestidae herpestidae2 ( herpestidae , "Suricato") ;
  
    herpestidae1.print();
    herpestidae2.print();

  Cuidador cuidador1;
  cuidador1.SetAtributos("salario", "R$ 3000" );
  cuidador1.SetAtributos("nome","Ana Maria Rodrigues Lopes" );
  cuidador1.SetAtributos("cpf",  "1234567799" );
  cuidador1.SetAtributos("telefone", "(31) 99876-6923" );
  cuidador1.SetAtributos("dataNascimento", "10/10/2000" );

  Cuidador cuidador2 ;
  cuidador2.SetAtributos("salario", "R$ 4000" );
  cuidador2.SetAtributos("nome", "Fernanda Silva Santos");
  cuidador2.SetAtributos("cpf", "9472567121"  );
  cuidador2.SetAtributos("telefone","(31) 99123-8970" );
  cuidador2.SetAtributos("dataNascimento", "08/02/1995"  );


    Alimentacao Bobby ( "2","Peixes ","Bobby só quis comer 2 porções de peixes hoje", cuidador1, "Bobby ") ;
    Alimentacao Catita ( "1","Ração especial","Catita comeu direitinho" ,cuidador2 , "Catita" ) ;
    Alimentacao Carolina ( "3" ,"Ração" ,"Carolina estava com um apetite e tanto" , cuidador2 , "Carolina" );
    Alimentacao Tony ("10", "Peixes","Tony comeu um pouco da comida do Bobby" , cuidador1 , "Tony" );


   double kgPeixeConsumidos = 0;
   double kgRacaoConsumidos = 0 ;
  

       double porcaoCatita = stod( Catita.GetAtributo("porcao") ) ;
       double porcaoCarolina = stod( Carolina.GetAtributo("porcao") ) ;
  
  kgRacaoConsumidos = herpestidae1.PorcaoConsumida(porcaoCatita) + herpestidae2.PorcaoConsumida(porcaoCarolina) ; 

       double porcaoTony = stod( Tony.GetAtributo("porcao") ) ;
       double porcaoBobby = stod( Bobby.GetAtributo("porcao") ) ;
  
//   O ursidae1 nao e o Bobboy , mas como ele se alimenta 
//   de peixe tbm pode ser usado esse metodo para o calculo
//   de quanto peixes ele consumiu
  kgPeixeConsumidos =  ursidae1.PorcaoConsumida( porcaoTony ) + ursidae1.PorcaoConsumida( porcaoBobby ) ; 

    std::cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << std::endl;

    Bobby.print();
    Catita.print();
    Carolina.print();
    Tony.print();

    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << kgRacaoConsumidos << std::endl;
  
    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << kgPeixeConsumidos << std::endl;

    return 0;
  
}
