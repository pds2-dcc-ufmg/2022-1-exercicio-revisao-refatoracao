#include "Animal.hpp"


/**
 * \brief Construtor do animal
 * \param familia Familia taxonomica do animal
 * \param nome Nome do animal
 * \param idade Idade do animal
*/
Animal::Animal(std::string familia, std::string nome, unsigned int idade){
    _familia = familia;
    _nome = nome;
    _idade = idade;
}


/** \brief Destrutor do animal */
Animal::~Animal(){}


/** \return A familia do animal */
std::string Animal::getFamilia() const{
    return _familia;
}


/** \return O nome do animal */
std::string Animal::getNome() const{
    return _nome;
}


/** \return A idade do animal */
unsigned Animal::getIdade() const{
    return _idade;
}


/** \return A idade do animal */
double Animal::getConsumoKg() const{
    return _kgConsumidos;
}


/** \brief Imprime as informacoes do animal */
void Animal::print() const{
    std::cout   << "\n[Animal]" << std::endl
                << "  Nome: " << _nome << std::endl
                << "  Idade: " << _idade << std::endl
                << "  Familia: " << _familia << std::endl;
}


/** \brief Aumenta o valor relativo ao consumo de alimentos em kg
 *  \param kg o valor em kg a ser adicionado */
void Animal::adicionarConsumo(double kg){
    _kgConsumidos += kg;
}