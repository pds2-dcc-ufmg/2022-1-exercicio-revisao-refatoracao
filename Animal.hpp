#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal {
    protected:
    
        string especie;
        int idade;
        string familia;
        string nome;

    public:
        
        Animal();
        Animal(string _nome, int _idade);

        //Imprime na tela os detalhes de um determinado animal
        void print();

        //Imprime a quantidade de alimento que foi ingerida por um animal (note que a unidade de medida varia por classe de animal)
        double quantidadeDeAlimentoConsumida();

        //Permite acessar os valores das variaveis fora do escopo da classe
        int getIdade();
        string getFamilia();
        string getNome(); 
        string getEspecie();

        //Permite alterar os valores das variaveis fora do escopo da classe
        void setEspecie(string _especie);
        void setIdade(int _idade);
        void setFamilia(string _familia);
        void setNome(string _nome);

};
#endif
