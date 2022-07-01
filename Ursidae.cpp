#include "Ursidae.hpp"

Ursidae::Ursidae(int _idade, std::string _familia, 
        std::string _nome, std::string _especie) : Animal(_idade, _familia, _nome){
            familia = _familia;
            especie = _especie;
            peixe_por_dia = 0;
}

void Ursidae::peixes_por_dia(double _peixe_por_dia){
    peixe_por_dia = _peixe_por_dia;
}

void Ursidae::print(){
    std::cout << "\n[Animal]"  << "\n"
              << "  Nome: "    << nome << "\n"
              << "  Idade: "   << idade << "\n"
              << "  Familia: " << familia << "\n";
    if(especie != "")
        std::cout << "  Especie: " << especie << "\n";
}