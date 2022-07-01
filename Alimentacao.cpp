#include "Alimentacao.hpp"

int Alimentacao::PEIXES_POR_PORCAO = 5;
int Alimentacao::QUANT_PORCAO = 1;

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, std::string _nomeAnimal, Cuidador _cuidador) {
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->nomeAnimal = _nomeAnimal;
    this->cuidador = _cuidador;
}

void Alimentacao::mostrarRelatorioIndividual() {
    std::cout << "Animal: " << this->nomeAnimal << "\n" << " Cuidador: ";
    std::cout << this->cuidador.getNome() << "\n" << " Descricao: " << this->descricao << std::endl << std::endl;
}

int Alimentacao::calcularPeixesConsumidos(int _porcaoPeixes){
    int total_peixes = PEIXES_POR_PORCAO * _porcaoPeixes;
    return total_peixes;
}

int Alimentacao::calcularKgConsumidosRacao(int _porcoesConsumidas) {
    int kgConsumidos = QUANT_PORCAO * _porcoesConsumidas;
    return kgConsumidos;
}

void Alimentacao::mostrarConsumoTotal(int _totalRacao, int _totalPeixe) {
    std::cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos \n" << std::endl;
    std::cout << "Tipo de comida: " << "Ração" << std::endl;
    std::cout << "Kg consumidos: " << _totalRacao << std::endl;
    std::cout << "\nTipo de comida: " << "Peixe" << std::endl;
    std::cout << "Kg consumidos: " << _totalPeixe << std::endl;
}