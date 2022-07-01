#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae {
    public:

        int Ursi_Idade;
        std::string Ursi_nome;
        std::string Ursi_especie;
        double kgPeixePorDIA;
    
    public:

        void print() {
            std::cout<<"[Animal]" <<std::endl;
            std::cout<<"Nome: " <<Ursi_nome<<std::endl;
            std::cout<<"Idade: " <<Ursi_Idade<<std::endl;
            std::cout<<"Família: Ursidae" <<std::endl;
            std::cout<<"Especie: "<< Ursi_especie <<std::endl;
        }

        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
            double x;
            return peixesPorPORCAO*porcaoPeixes;
        }

        int get_ursi_Idade(){
            return Ursi_Idade;
        }

        int get_ursi_idade(int _Ursi_Idade){
            this->Ursi_Idade=_Ursi_Idade;
        }
        
        std::string get_ursi_nome(){
            return Ursi_nome;
        }
        
        std::string get_ursi_especie(){
            return Ursi_especie;
        }
        double get_ursi_kgpeixe(){
            return kgPeixePorDIA;
        }
        
        double set_ursi_kgpeixe(double _KgpeixePorDia){
            this->kgPeixePorDIA=_KgpeixePorDia;
        }

};

#endif

