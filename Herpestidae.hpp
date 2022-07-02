#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

double quantidadePorcao = 1;

//Classe que representa a família Hespestidae
class Herpestidae : public Animal
{
private:
    //Variavel string que armazena o nome da especie
    string especie;

public:
    //Funcao Get para a especie
    string getEspecie() {return especie;};
    //Funcao Set para a especie
    void setEspecie(string especie_) {especie = especie_;};

    //Funcao que retorna o peso de racao consumida
    double kgConsumidosDeRacao(int porcoesConsumidas);

    //Funcao que imprime as informações do Animal, especie
    void print();
};

#endif
