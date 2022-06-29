#include"Herpestidae.hpp"
 
Herpestidae::Herpestidae(string _family, string _nome, int _idade, string _especies){
    this->family = _family;
    this->nome = _nome;
    this->idade = _idade;
    this->species = _especies;
}
 
double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    double c = quantPORCAO*porcoesConsumidas;
    return c;
}
void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << species <<std::endl;
}