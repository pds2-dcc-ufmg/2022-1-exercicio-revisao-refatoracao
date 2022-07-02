#include "Alimentacao.hpp"


int Alimentacao::PORCAO_PEIXE = 5;
int Alimentacao::TOTAL_PEIXE = 0;
int Alimentacao::TOTAL_RACAO = 0;

// metodo que ira receber as porções e operar para calcular o total
void Alimentacao::alimenta_animal(){ 
    if(this ->_comida == "Peixes" ){
        TOTAL_PEIXE += PORCAO_PEIXE * this -> _porcao;
    }else{
        TOTAL_RACAO += this -> _porcao; 
    }
}

void Alimentacao::print(){
    std::cout << "Animal: " << this -> _nomeAnimal << std::endl;
    std::cout << "  Cuidador: " << this -> _cuidador.get_nome() << std::endl;

}

void Alimentacao::Get_descricao(){
    std::cout << "  Descricao: " << this -> _descricao << std::endl;
}
void Alimentacao::total_consumido(){
    std::cout << "Relatório de kg de comida gastos\n" << std::endl;
    std::cout << "Tipo de comida: Ração" << std::endl;
    std::cout << "Kg consumidos: " << TOTAL_RACAO << std::endl;
    std::cout << std::endl;
    std::cout << "Tipo de comida: Peixes" << std::endl;
    std::cout << "Kg consumidos: " << TOTAL_PEIXE << std::endl;
}
