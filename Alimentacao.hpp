
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include <iostream>
#include <string>
#include "Cuidador.hpp"

class Alimentacao {
    private:
    
        int _porcao;
        std::string _comida;
	    std::string _descricao;
	    Cuidador _cuid;
	    std::string _nomeAnimal;
    
    public:
    
        Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuid, std::string nomeAnimal)
	: _porcao(porcao), _comida(comida), _descricao(descricao), _cuid(cuid), _nomeAnimal(nomeAnimal) {}
    		
	void setPorcao(int porcao) { this->_porcao = porcao; }
       	void setComida(std::string comida) { this->_comida = comida; }
       	void setDescricao(std::string descricao) { this->_descricao = descricao; }
	void setCuid(Cuidador cuid) { this->_cuid = cuid; }
        void setNomeAnimal(std::string nomeAnimal) { this->_nomeAnimal = nomeAnimal; 

    void print() {

        std::cout << "Animal: " << nomeAnimal << "\n";
        std::cout << " Cuidador: " << cuid.nome << "\n";
        
    }
};

#endif
