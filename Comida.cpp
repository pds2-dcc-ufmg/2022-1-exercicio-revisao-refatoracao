#include "Comida.hpp"

Comida::Comida(){
    kg_racao_total = 0;
    kg_peixe_total = 0;
}

void Comida::adicionar_racao_total(int racao){
    kg_racao_total += racao;
}

void Comida::adicionar_peixe_total(int peixe){
    kg_peixe_total += 5*peixe;
}

int Comida::racao_total(){
    return kg_racao_total;
}

int Comida::peixe_total(){
    return kg_peixe_total;
}

void Comida::print(){
    std::cout << "Tipo de comida: " << "Ração" << "\n"
              << "Kg consumidos: " << kg_racao_total << "\n";

    std::cout << "\nTipo de comida: " << "Peixe" << "\n"
              << "Kg consumidos: " << kg_peixe_total << "\n";
}