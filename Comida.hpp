#ifndef COMIDA_H
#define COMIDA_H

class Comida{
    private:
        int kg_racao_total;
        int kg_peixe_total;
    public:
        Comida();
        void adicionar_racao_total(int racao);
        void adicionar_peixe_total(int peixe);

        //Retorna comida total gasta
        int racao_total();
        int peixe_total();
};

#endif