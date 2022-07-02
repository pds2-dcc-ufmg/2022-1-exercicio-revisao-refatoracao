#include "Ursidae.hpp"


Ursidae::Ursidae(string _idade, string _nome, string _especie, double _kgPeixePorDia):Animal(_idade,"Ursidae",_nome){     
    this->especie = _especie;
    this->kgPeixePorDia = _kgPeixePorDia;
    this->alimentoPorPORCAO = 5;
}
Ursidae::Ursidae(string _idade, string _nome):Animal(_idade,"Ursidae",_nome){
    this->alimentoPorPORCAO = 5;
}

