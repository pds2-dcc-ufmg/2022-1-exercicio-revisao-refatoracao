#include "Herpestidae.hpp"

Herpestidae::Herpestidae(int _idade, std::string _familia, 
        std::string _nome, std::string _especie) : Animal(_idade, _familia, _nome){
            familia = _familia;
            especie = _especie;
}

void Herpestidae::print(){
    std::cout << "\n[Animal]"  << "\n"
              << "  Nome: "    << nome << "\n"
              << "  Idade: "   << idade << "\n"
              << "  Familia: " << familia << "\n";
    if(especie != "")
        std::cout << "  Especie: " << especie << "\n";
}