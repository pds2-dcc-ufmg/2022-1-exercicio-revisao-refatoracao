#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

namespace Animal{

    class Animal {
        protected:
        
            std::string especie;
            int idade;
            std::string familia;
            std::string nome;

        public:
            
            Animal();
            Animal(std::string _nome, int _idade);

            //Imprime na tela os detalhes de um determinado animal
            void print();

            //Imprime a quantidade de alimento que foi ingerida por um animal (note que a unidade de medida varia por classe de animal)
            double quantidadeDeAlimentoConsumida();

            //Permite acessar os valores das variaveis fora do escopo da classe
            int getIdade();
            std::string getFamilia();
            std::string getNome(); 
            std::string getEspecie();

            //Permite alterar os valores das variaveis fora do escopo da classe
            void setEspecie(std::string _especie);
            void setIdade(int _idade);
            void setFamilia(std::string _familia);
            void setNome(std::string _nome);

    };
} //Namespace Animal
#endif
