#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string _nome, int _idade) : Animal(_nome, _idade, F_HERPESTIDAE, PORCAO_HERPESTIDAE, COMIDA_HERPESTIDAE){}

Herpestidae::Herpestidae(string _nome, int _idade, string _especie) : Animal(_nome, _idade, F_HERPESTIDAE, PORCAO_HERPESTIDAE, COMIDA_HERPESTIDAE, _especie){}