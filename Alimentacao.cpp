#include "Alimentacao.hpp"

double Alimentacao::_gastoPeixe = 0;

double Alimentacao::_gastoRacao = 0;

double Alimentacao::getGastoPeixe()
{
        return Alimentacao::_gastoPeixe;
};

double Alimentacao::getGastoRacao()
{
        return Alimentacao::_gastoRacao;
};

void Alimentacao::setCuidador(Cuidador const &_cuidador)
{
        this->cuidador = _cuidador;
};

void Alimentacao::setAnimal(Animal *_animal)
{
        this->animal = _animal;
        this->nomeAnimal = this->animal->getNome();
};
void Alimentacao::setPorcao(double _porcao)
{
        this->porcao = _porcao;
};

void Alimentacao::setComida(std::string _comida)
{
        this->comida = _comida;
};

void Alimentacao::setDescricao(std::string _descricao)
{
        this->descricao = _descricao;
};

void Alimentacao::alimentar()
{
        double consumo = this->animal->kgConsumidos(this->porcao);

        if (this->animal->getFamilia() == "Ursidae")
                Alimentacao::_gastoPeixe += consumo;
        else
                Alimentacao::_gastoRacao += consumo;
};

void Alimentacao::print()
{
        std::cout << "Animal: " << this->animal->getNome() << std::endl;
        std::cout << " Cuidador: " << this->cuidador.getNome() << std::endl;
        std::cout << " Descricao: " << this->descricao << std::endl
                  << std::endl;
};
