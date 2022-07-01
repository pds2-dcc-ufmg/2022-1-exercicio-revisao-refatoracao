#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _unPeixes, int _unRacao, int _unRacaoEspecial, Cuidador& _cuid, std::string _descricao){

    this->unPeixes = _unPeixes;
    this->unRacao = _unRacao;
    this->unRacaoEspecial = _unRacaoEspecial;
    this->descricao = _descricao;
    this->cuid = _cuid;
    kgPeixes += _unPeixes;
    kgRacao += _unRacao;
    kgRacao += _unRacaoEspecial;
}

    int Alimentacao::kgPeixes = 0;
    int Alimentacao::kgRacao = 0;

Alimentacao::~Alimentacao(){

}

void Alimentacao::escreverDescricao(std::string _descricao){

    this->descricao = _descricao;
}

void Alimentacao::printRelatorio(){

    std::cout << " Cuidador: " << this->cuid.getNomeCuidador() << std::endl;
    std::cout << " Descricao: " << this->descricao << std::endl;
    std::cout << std::endl;
    
}

int Alimentacao::getTotalPeixes(){

    return kgPeixes;
}

int Alimentacao::getTotalRacao(){

    return kgRacao;
}