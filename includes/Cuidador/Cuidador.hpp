#ifndef CUIDADOR_HPP
#define CUIDADOR_HPP

#include <string>

class Cuidador {

    private:

        std::string nome;
        std::string cpf;
        std::string telefone;
        std::string nascimento;
        double salario;

    public:

        Cuidador (std::string nome, std::string cpf, std::string telefone, std::string nascimento, double salario);
        std::string getNome();

};

#endif