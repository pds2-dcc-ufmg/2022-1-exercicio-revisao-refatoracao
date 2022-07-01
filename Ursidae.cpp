#include "Ursidae.hpp"

 void Ursidae::print(){
    std::cout<<"[Animal]" <<std::endl;
    std::cout<<"Nome: " <<Ursi_nome<<std::endl;
    std::cout<<"Idade: " <<Ursi_Idade<<std::endl;
    std::cout<<"Família: Ursidae" <<std::endl;
    std::cout<<"Especie: "<< Ursi_especie <<std::endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    double x;
    return peixesPorPORCAO*porcaoPeixes;
}

int Ursidae::get_ursi_Idade(){
    return Ursi_Idade;
}

int Ursidae::get_ursi_idade(int _Ursi_Idade){
    this->Ursi_Idade=_Ursi_Idade;
}

std::string Ursidae::get_ursi_nome(){
    return Ursi_nome;
}

std::string Ursidae::get_ursi_especie(){
    return Ursi_especie;
}
        
double Ursidae::get_ursi_kgpeixe(){
    return kgPeixePorDIA;
}
        
double Ursidae::set_ursi_kgpeixe(double _KgpeixePorDia){
    this->kgPeixePorDIA=_KgpeixePorDia;
}

