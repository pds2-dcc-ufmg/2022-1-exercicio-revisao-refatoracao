#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

class Alimentacao{

    private:
        float quantidadePorcao, pesoPorcao;
        string tipoComida, descricao;

    public:
        Alimentacao(float quantidadePorcao, float pesoPorcao, string tipoComida);
        Alimentacao() = default;
        
        void setQuantPorcao(float quantidadePorcao);
        void setPesoPorcao(float pesoPorcao);
        void setTipoComida(string tipoComida);
        void setDescricao(string descricao);

        float getQuantPorcao();
        float getPesoPorcao();
        string getTipoComida();
        string getDescricao();
};

#endif