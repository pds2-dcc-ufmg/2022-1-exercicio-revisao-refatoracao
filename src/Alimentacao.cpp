#include "Alimentacao.hpp"


Alimentacao::Alimentacao(){}

Alimentacao::Alimentacao(int porcao, std::string comida, std::string descricao,Cuidador cuid, Herpestidae *herp){
    this->_porcao = porcao;
    this->_comida = comida;
    this->_descricao = descricao;
    this->_cuidador = cuid;
    this->_herpestidae = herp;
    this->_herpestidae->set_KgRacaoConsumido(porcao);
    this->_KgTotalRacao = _herpestidae->get_KgRacaoConsumido();

}

Alimentacao::Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuid, Ursidae *urs){
    this->_porcao = porcao;
    this->_comida = comida;
    this->_descricao = descricao;
    this->_cuidador = cuid;
    this->_ursidae = urs;
    this->_ursidae->set_PeixeConsumido(porcao);
    this->_KgTotalPeixe = _ursidae->get_PeixeConsumido();
}

void Alimentacao::print(){
    if (this->_ursidae == nullptr)
    {
        std::cout << "\nAnimal: " << this->_herpestidae->get_nome() << std::endl;
    }else {
        std::cout << "\nAnimal: " << this->_ursidae->get_nome() << std::endl;
    }
    
    std::cout << " Cuidador: " << this->_cuidador.get_nome() << std::endl
    << " Descrição: "<< this->_descricao << std::endl;
}

int Alimentacao::get_PeixeConsumido(){
    return this->_KgTotalPeixe;
}

int Alimentacao::get_KgRacaoConsumido(){
    return this->_KgTotalRacao;
}
