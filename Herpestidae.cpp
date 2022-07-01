#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string _nome, int _idade) : Animal(_nome, _idade, FAMILIA_HERPESTIDAE, PESO_PORCAO_HERPESTIDAE, COMIDA_HERPESTIDAE){}

Herpestidae::Herpestidae(string _nome, int _idade, string _especie) : Animal(_nome, _idade, FAMILIA_HERPESTIDAE, PESO_PORCAO_HERPESTIDAE, COMIDA_HERPESTIDAE, _especie){}