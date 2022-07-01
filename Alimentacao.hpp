
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

class Alimentacao {

    private:

         std::string _porcao ;
         std::string _comida ;
         std::string _descricao ;
         Cuidador* _cuidador ;
         std::string _nomeAnimal ;

    public:

          Alimentacao( std::string porcao, std::string comida, std::string descricao,Cuidador* cuidador, std::string nomeAnimal ) ;
          void print () ;
          std::string GetAtributo ( std::string chave ) ;

};

#endif