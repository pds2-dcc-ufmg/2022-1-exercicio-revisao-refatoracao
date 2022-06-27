#include <vector>
#include <map>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

// Libera memória alocada para os animais
void liberarMemoria(vector<Animal*>& animais) {
    for(auto animal : animais){
        delete animal;
    }
}

// Calcula e retorna a quantidade utilizada de um certo alimento em kg
double calcularAlimentoGasto(vector<Animal*>& animais, string tipoAlimento) {
    double quantidadeKg = 0;
    for(auto animal: animais){
        if(animal->getALIMENTO() == tipoAlimento){
            quantidadeKg += animal->getKgAlimentoConsumido();
        }
    }
    return quantidadeKg;
}

// Printa o relatório das alimentações no terminal
void printarRelatorioAlimentacao(vector<Alimentacao*>& alimentacao) {
    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
    for(auto alimenta : alimentacao){
        alimenta->print();
        cout << " Descricao: " << alimenta->getDescricao() << endl << endl;
    }
}

// Printa o relatório de comida gasta em kg no terminal
void printarRelatorioGastos(vector<Animal*>& animais, map<string, double>& tipoAlimento){
    cout <<" \n \n--------------------------------\n\nRelatorio de kg de comida gastos " << endl;
    map<string, double>::iterator it = tipoAlimento.end();
    do{
        it--;
        cout << "\nTipo de comida: " << it->first << endl;
        cout << "Kg consumidos: " << calcularAlimentoGasto(animais, it->first) << endl;
    } while(it != tipoAlimento.begin());
}

// Printa as informações dos animais no terminal
void printarAnimais(vector<Animal*>& animais){
    for(int i = 0; i < animais.size() - 1; i++){
        animais[i]->print();
    }
}

// Alimenta os animais
void alimentarAnimais(vector<Alimentacao*>& alimentacao, map<string, double>& tipoAlimento) {
    for(auto aliment : alimentacao){
        aliment->alimentar(tipoAlimento);
    }
}

int main()
{
    vector<Animal*> animais;
    vector<Alimentacao*> alimentacao;

    // Variável map que armazena os tipos de alimentos e a massa em kg por porção
    map<string, double> tipoAlimento;
    tipoAlimento.insert(pair<string, double>("Ração", 1));
    tipoAlimento.insert(pair<string, double>("Peixe", 5));

    Animal* bobby = new Animal("Bobby", 13, "Ursidae");
    animais.push_back(bobby);

    Animal* jorge = new Animal("Jorge", 1, "Ursidae");
    animais.push_back(jorge);

    Animal* bonina = new Animal("Bonina", 7, "Herpestidae");
    animais.push_back(bonina);

    Animal* felicio = new Animal("felicio", 3, "Ursidae");
    animais.push_back(felicio);

    Ursidae* tony = new Ursidae("Tony", 9, "Urso Pardo");
    animais.push_back(tony);

    Ursidae* wanda = new Ursidae("Wanda", 10, "Urso Polar");
    animais.push_back(wanda);

    Herpestidae* catita = new Herpestidae("Catita", 2, "Suricato");
    animais.push_back(catita);

    Herpestidae* carolina = new Herpestidae("Carolina", 2, "Suricato");
    animais.push_back(carolina);
  
	Cuidador cuidadoraAna("Ana Maria Rodrigues Lopes", 1234567799, "(31) 99876-6923", "10/10/2000", 3000);
	Cuidador cuidadoraFer("Fernanda Silva Santos", 9472567121, "(31) 99123-8970", "08/02/1995", 4000);

	Alimentacao alimentacaoBobby(bobby, cuidadoraAna, "Peixes", 2, "Bobby só quis comer 2 porções de peixes hoje");
	alimentacao.push_back(&alimentacaoBobby);

    Alimentacao alimentacaoCatita(catita, cuidadoraFer, "Ração especial", 1, "Catita comeu direitinho");
	alimentacao.push_back(&alimentacaoCatita);

	Alimentacao alimentacaoCarol(carolina, cuidadoraFer, "Ração", 3, "Carolina estava com um apetite e tanto");
	alimentacao.push_back(&alimentacaoCarol);

	Alimentacao alimentacaoTony(tony, cuidadoraAna, "Peixes", 10, "Tony comeu um pouco da comida do Bobby");
	alimentacao.push_back(&alimentacaoTony);

    alimentarAnimais(alimentacao, tipoAlimento);
    printarAnimais(animais);
    printarRelatorioAlimentacao(alimentacao);
    printarRelatorioGastos(animais, tipoAlimento);
    liberarMemoria(animais);

    return 0;
}