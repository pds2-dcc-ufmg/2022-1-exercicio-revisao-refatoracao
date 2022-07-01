#include <iostream>
#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

// g++ -std=c++11 main.cpp Alimentacao.cpp Alimentacao.hpp Animal.cpp Animal.hpp Cuidador.hpp Cuidador.cpp Herpestidae.hpp Herpestidae.cpp Ursidae.hpp Ursidae.cpp -o main
int main(){

    Animal animal1( "13" , "Ursidae" , "Bobby" ) ;
    Animal animal2 ( "1" , "Ursidae" , "Jorge" ) ;
    Animal animal3 ( "7" , "Herpestidae" , "Bonina") ;
    Animal animal4 ( "3" , "Ursidae" , "Felício" ) ;
  
    animal1.print();
    animal2.print();
    animal3.print();
    animal4.print();
  
    Animal animalUrsidae1 ( "9" , "Ursidae" , "Tony") ;
    Ursidae ursidae1 (animalUrsidae1 , "Urso Pardo" , 10.5 ) ;

    Animal animalUrsidae2( "10" , "Ursidae" , "Wanda" )  ;
    Ursidae ursidae2 ( animalUrsidae2, "Urso Polar" , 7.0 ) ;
  
    ursidae1.print();
    ursidae2.print();

  
    Animal animalHerpestidae1 ( "2" , "Herpestidae" , "Catita");
    Herpestidae herpestidae1 (  animalHerpestidae1 , "Suricato" );


    Animal animalHerpestidae2 ("2" , "Herpestidae" , "Carolina") ;
    Herpestidae herpestidae2 ( animalHerpestidae2, "Suricato") ;
  
    herpestidae1.print();
  

  Cuidador cuidador1 ("R$ 3000","Ana Maria Rodrigues Lopes","1234567799", "(31) 99876-6923","10/10/2000");

  Cuidador cuidador2 ("R$ 4000","Fernanda Silva Santos", "9472567121", "(31) 99123-8970","08/02/1995");


    Alimentacao Bobby ( "2","Peixes ","Bobby só quis comer 2 porções de peixes hoje", &cuidador1, "Bobby ") ;
    Alimentacao Catita ( "1","Ração especial","Catita comeu direitinho" ,&cuidador2 , "Catita" ) ;
    Alimentacao Carolina ( "3" ,"Ração" ,"Carolina estava com um apetite e tanto" , &cuidador2 , "Carolina" );
    Alimentacao Tony ("10", "Peixes","Tony comeu um pouco da comida do Bobby" , &cuidador1 , "Tony" );


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
