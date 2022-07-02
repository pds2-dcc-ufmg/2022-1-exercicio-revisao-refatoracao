
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

using namespace std;

//Classe de alimentação de um animal
class Alimentacao {
private:
    //Tamanho da porcao
    int porcao;
    //Nome da comida
    string comida;
    //Descricao da comida
    string descricao;
    //Objeto cuidador do animal
    Cuidador cuid;
    //Nome do animal
    string nomeAnimal;

public:
    //Funcao Get para Porcao
    int getPorcao() {return porcao;};
    //Funcao Set para Porcao
    void setPorcao(int porcao_) {porcao = porcao_;};
    //Funcao Get para Comida
    string getComida() {return comida;};
    //Funcao Set para Comida
    void setComida(string comida_) {comida = comida_;};
    //Funcao Get para Descricao
    string getDescricao() {return descricao;};
    //Funcao Set para Descricao
    void setDescricao(string descricao_) {descricao = descricao_;};
    //Funcao Get para Porcao
    Cuidador getCuidador() {return cuid;};
    //Funcao Set para Cuidador
    void setCuidador(Cuidador cuid_) {cuid = cuid_;};
    //Funcao Get para Nome do Animal
    string getnomeAnimal() {return nomeAnimal;};
    //Funcao Set para Cuidador
    void setnomeAnimal(string nomeAnimal_) {nomeAnimal = nomeAnimal_;};

    //Funcao para imprimir as informações do animal e seu cuidado
    void print();
};

#endif
