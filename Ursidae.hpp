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

        void print();

        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);

        int get_ursi_Idade();

        int get_ursi_idade(int _Ursi_Idade);
        
        std::string get_ursi_nome();
        
        std::string get_ursi_especie();

        double get_ursi_kgpeixe();
        
        double set_ursi_kgpeixe(double _KgpeixePorDia);

};

#endif

