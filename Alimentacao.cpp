#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int quantPorcoes, std::string tipoComida, std::string descricao, Cuidador cuidador, std::string nomeAnimal) :
_quantPorcoes(quantPorcoes), _tipoComida(tipoComida), _descricao(descricao), _cuidador(cuidador), _nomeAnimal(nomeAnimal) {}

Alimentacao::Alimentacao() {}

void Alimentacao::print(){
    std::cout << "Animal: " << this->_nomeAnimal << std::endl;
    std::cout << " Cuidador: " << this->_cuidador.getNome() << std::endl;
    std::cout << " Descricao: " << this->_descricao << std::endl;
}

int Alimentacao::kgComidaConsumidos(){
    if(this->_tipoComida == "Peixes"){
        return this->_ursidae.kgConsumidosPeixe(this->_quantPorcoes);
    }
    if(this->_tipoComida == "Racao"){
        return this->_herpestidae.kgConsumidosRacao(this->_quantPorcoes);
    }

}