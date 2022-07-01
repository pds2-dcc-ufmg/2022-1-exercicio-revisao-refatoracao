#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) : Animal(_nome, _idade, "Herpestidae", _especie) { }

Herpestidae::Herpestidae(std::string _nome, int _idade) : Animal(_nome, _idade, "Herpestidae", "") { }