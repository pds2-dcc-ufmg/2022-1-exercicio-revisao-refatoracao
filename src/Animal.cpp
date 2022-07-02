#include "Animal.hpp"

    Animal::Animal(){
    }

    void Animal:: print(){
      cout << endl
           << "[Animal]" << endl
           << "  Nome: " << nome << endl
           << "  Idade: " << idade << endl
           << "  Família: " << familia << endl;
           if (especie.size()!=0)
           cout << "  Especie: " << especie << endl;
    }       

    void Animal:: set_nome(string nome_){
      this->nome = nome_;
    }

    string Animal:: get_nome(){
      return nome;
    }

    void Animal:: set_idade(int idade_){
      this->idade = idade_;
    }

    void Animal:: set_especie(string especie_){
      this->especie = especie_;
    }