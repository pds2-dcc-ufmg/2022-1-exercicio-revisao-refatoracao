#include "Zoologico.hpp"


/** \brief Adiciona um animal ao Zoológico */
void Zoologico::adicionarAnimal(Animal* animal){
    animais.insert(std::pair<std::string, Animal*> (animal->getNome(), animal));
    vAnimais.push_back(animal);
}


/** \brief Adiciona um cuidador ao Zoológico */
void Zoologico::adicionarCuidador(Cuidador* cuidador){
    cuidadores.insert(std::pair<std::string, Cuidador*> (cuidador->getNome(), cuidador));
}


/** \brief Adiciona uma alimentação ao Zoológico */
void Zoologico::adicionarAlimentacao(Alimentacao* alimentacao){
    alimentacoes.insert(std::pair<std::string, Alimentacao*> (alimentacao->getNome(), alimentacao));
}


/** \brief Procura por um Animal com o nomes especificado
 *  \param nome O nome do Animal */
Animal* Zoologico::findAnimal(std::string nome) const{
    for(auto i : animais){
        if(i.first == nome){
            return i.second;
        }
    }
    return nullptr;
}


/** \brief Procura por uma Alimentação com o nome especificado
 *  \param nome O nome do Animal */
Alimentacao* Zoologico::findAlimentacao(std::string nome) const{
    for(auto i : alimentacoes){
        if(i.first == nome){
            return i.second;
        }
    }
    return nullptr;
}


/** \brief Adiciona o consumo de alimentos para o animal a partir de uma alimentacao */
void Zoologico::adicionarConsumoAnimal(Alimentacao& alimentacao){
    findAnimal(alimentacao.getNome())->adicionarConsumo(alimentacao.getPorcao());
}


/** \brief Registrar o consumo geral de alimentos em kg de cada animal */
void Zoologico::adicionarConsumoGeral(){
    for(auto i : alimentacoes){
        adicionarConsumoAnimal(*(i.second));
    }
}


/** \brief Gera o relatório da alimentação no dia */
void Zoologico::relatorioAlimentacao() const{
    for(auto i : alimentacoes){
        i.second->print();
        std::cout << '\n';
    }
}


/** \brief Gera o relatório da alimentação individual no dia 
 *  \param nome Nome do animal alimentado */
void Zoologico::relatorioAlimentacaoIndiv(std::string nome) const{
    for(auto i : alimentacoes){
        if(i.first == nome){
            i.second->print();
            std::cout << '\n';
            break;
        }
    }
}


/** \brief Gera o relatório do consumo em kg no dia */
void Zoologico::relatorioConsumo() const{
    double racao = 0;
    double peixe = 0;
    for(auto i : animais){

        // animais<std::string nome, Animal*>

        if(i.second->getFamilia() == "Ursidae") peixe += i.second->getConsumoKg();
        else if(i.second->getFamilia() == "Herpestidae") racao += i.second->getConsumoKg();
    }

    std::cout << "Tipo de comida: Ração" << std::endl;
    std::cout << "Kg consumidos: " << racao << "\n\n";

    std::cout << "Tipo de comida: Peixe" << std::endl;
    std::cout << "Kg consumidos: " << peixe << std::endl;
}


/** \brief deleta a memória alocada dinamicamente */
void Zoologico::deleteAll(){
    for(auto i : animais) delete i.second;
    for(auto i : cuidadores) delete i.second;
    for(auto i : alimentacoes) delete i.second;
}


/** \brief Imprime as informações de todos os animais no zoológico */
void Zoologico::printAnimais() const{
    for(auto i : animais) i.second->print();
}


/** \brief Imprime as informações de todos os animais no zoológico na ordem inserida e com execeções
 *  \param nomeExcecao Nome de um Animal que não deve ser impresso */
void Zoologico::printAnimaisVector(std::string nomeExcecao) const{
    for(auto i : vAnimais){
        if(i->getNome() == nomeExcecao) continue;
        else i->print();
    }
}