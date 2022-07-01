#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP
// padronizei o #define
#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
    private:
        // alterei o operador de acesso
        string _nomeAnimal;

    protected:
        // alterei o operador de acesso
        string _descricao;
        string _comida;
        // cada alimentacao >"tem"< (composicao) um cuidador responsavel
        Cuidador _cuid;

    public:
        // adicionei um construtor especifico
        Alimentacao(string, string, string, int, Cuidador);
        Alimentacao();
        
        int _porcao;
    
        string getDescricao(void);
        // implementacao deve ser no arquivo cpp
        void print(void); /*{

            std::cout << "Animal: ";
            cout << nomeAnimal << "\n";

            std::cout << " Cuidador: ";
            cout << cuid._nome << "\n";
        }*/ // o que está comentado foi o que eu tirei ::::::::::::::::::
};

#endif