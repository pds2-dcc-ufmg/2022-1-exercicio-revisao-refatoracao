#ifndef ALIMENTACAO_H
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"


class Alimentacao {

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        std::string nome_animal;

    public:

        void print() {

            std::cout << "Animal: ";
            std::cout << nome_animal << "\n";

            std::cout << " Cuidador: ";
            std::cout << cuidador.get_nome() << "\n";

            //std::cout << " : ";
            //cout << ursidae;
        }

    /*void print() {

        std::cout << "Cuidador: ";
        cout << cuida;

        std::cout << " Animal: ";
        cout << alimentado;
    }*/
};

#endif