#include "Herpestidae.hpp"


/**
 * \brief Construtor de Herpestidae
 * \param nome Nome do animal
 * \param idade Idade do animal
 * \param especie Especie do animal
*/
Herpestidae::Herpestidae(std::string nome, unsigned idade, std::string especie) : Animal("Herpestidae", nome, idade) {
    _especie = especie;
}


/**
 * \brief Construtor de Herpestidae
 * \param nome Nome do animal
 * \param idade Idade do animal
*/
Herpestidae::Herpestidae(std::string nome, unsigned idade) : Animal("Herpestidae", nome, idade) {
    _especie = "Não especificado";
}


/** \brief Imprime as informações do animal da família Herpestidae */
void Herpestidae::print() const{
    Animal::print();
    if(_especie != "Não especificado")
    std::cout << "  Especie: " << _especie << std::endl;
}


/** \brief Calcula o consumo de ração
 *  \param porcaoPeixes quantidade de porções de ração consumidas
 *  \return Quantidade de ração consumida */
double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) const{
    return _QUANTPORCAO * porcoesConsumidas;
}


/** \brief Aumenta o valor relativo ao consumo de alimentos em kg
 *  \param kg o valor em kg a ser adicionado
*/
void Herpestidae::adicionarConsumo(double kg){
    _kgConsumidos += kgConsumidosDeRacao(kg);
}