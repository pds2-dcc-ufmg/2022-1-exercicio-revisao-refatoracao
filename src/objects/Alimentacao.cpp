#include "Alimentacao.hpp"


/**
 * \brief Construtor da classe Alimentacao
 * \param porcao quantidade da porção
 * \param comida alimento oferecido
 * \param descricao descricao da alimentacao
 * \param cuidador nome do cuidador referente
 * \param nome nome do Animal referente
*/
Alimentacao::Alimentacao(int porcao, std::string comida, std::string descricao, std::string cuidador, std::string nome){
    _porcao = porcao;
    _comida = comida;
    _descricao = descricao;
    _cuidador = cuidador;
    _nome = nome;
}


/** \brief Imprime informações acerca da alimentação */
void Alimentacao::print() const{
    std::cout << "Animal: ";
    std::cout << _nome << "\n";

    std::cout << " Cuidador: ";
    std::cout << _cuidador << "\n";

    std::cout << " Descricao: ";
    std::cout << _descricao << "\n";
}


/** \return Nome do animal alimentado */
std::string Alimentacao::getNome() const{
    return _nome;
}


/** \return Porcao */
int Alimentacao::getPorcao() const{
    return _porcao;
}