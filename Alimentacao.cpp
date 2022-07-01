#include "Alimentacao.hpp"

Alimentacao::Alimentacao(std::string _comida, std::string _descricao,
        Cuidador _cuidador, std::string _nome) {
    comida = _comida;
    descricao = _descricao;
    cuidador = _cuidador;
    nome = _nome;
}

void Alimentacao::print(){
        std::cout << "Animal: " << nome << "\n"
                  << " Cuidador: " << cuidador.getnome() << "\n"
                  << " Descricao: " << descricao << "\n \n"; 
}