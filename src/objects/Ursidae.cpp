#include "Ursidae.hpp"


/**
 * \brief Construtor do Ursidae
 * \param nome Nome do animal
 * \param idade Idade do animal
 * \param especie Especie do animal
 * \param KgPeixePorDia Peso de Peixe consumido diariamente
*/
Ursidae::Ursidae(std::string nome, unsigned idade, std::string especie, double kgPeixePorDia) : Animal("Ursidae", nome, idade) {
    _especie = especie;
    _kgPeixePorDia = kgPeixePorDia;
}


/**
 * \brief Construtor do Ursidae
 * \param nome Nome do animal
 * \param idade Idade do animal
*/
Ursidae::Ursidae(std::string nome, unsigned idade) : Animal("Ursidae", nome, idade) {
    _especie = "Não especificado";
    _kgPeixePorDia = 0;
}


/** \brief Imprime as informações do animal da família Ursidae */
void Ursidae::print() const{
    if(_especie == "Não especificado"){
        std::cout   << "\n[Animal]"             << std::endl
                << "  Nome: "       << _nome    << std::endl
                << "  Idade: "      << _idade   << std::endl
                << "  Familia: "    << _familia << std::endl;
    }
    else{
        std::cout   << "\n[Animal]"                         << std::endl
                    << "  Nome: "           << _nome        << std::endl
                    << "  Idade: "          << _idade       << std::endl
                    << "  Família: Ursidae"                 << std::endl
                    << "  Especie: "        << _especie     << std::endl;
    }
}


/** \brief Calcula o consumo de peixes
 *  \param porcaoPeixes quantidade de porções de peixes consumidas
 *  \return Quantidade de peixes consumidos */
double Ursidae::calculaPeixesConsumidos(int porcaoPeixes) const{
    return _PEIXESPORPORCAO * porcaoPeixes;
}


/** \brief Aumenta o valor relativo ao consumo de alimentos em kg
 *  \param kg o valor em kg a ser adicionado */
void Ursidae::adicionarConsumo(double kg){
    _kgConsumidos += calculaPeixesConsumidos(kg);
}