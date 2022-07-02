#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

//Classe para representar um animal
class Animal {
private:
    //String que guarda a idade do animal
    string idade;
    //String que guarda a familia do animal
    string familia;
    //String que guarda o nome do animal
    string nome;
public:
    //Funcao Get para a idade
    string getIdade() {return idade;};
    //Funcao Set para a idade
    void setIdade(string idade_) {idade = idade_;};
    //Funcao Get para a familioa
    string getFamilia() {return familia;};
    //Funcao Set para a familia
    void setFamilia(string familia_) {familia = familia_;};
    //Funcao Get para o nome
    string getNome() {return nome;};
    //Funcao Set para o nome
    void setNome(string nome_) {nome = nome_;};

    //Funcao para imprimir as informacoes do animal
    void print();
    //Funcao que imprimi tchau
    void print_tchau();
};

#endif
