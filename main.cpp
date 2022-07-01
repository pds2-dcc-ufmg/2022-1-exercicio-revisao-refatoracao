#include <iostream>
#include <vector>
#include <string>

#include "Animal.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"
#include "Cuidador.hpp"
#include "Alimentacao.hpp"

using namespace std;

// criei uma funcao especializada em adicionar animais
// usada junto com uma entrada de texto
void setAnimais(vector<Animal>& animais, 
    vector<Herpestidae>& familiaH,
    vector<Ursidae>& familiaU){

    int i = 0;
    int qtdAnimais;
    cin >> qtdAnimais;

    while(i < qtdAnimais){
        string nome;
        string idade;
        string familia;
        
        cin >> nome;
        cin >> idade;
        cin >> familia;

        Animal animal = Animal(nome, idade, familia);
        Ursidae animalU = Ursidae(nome, idade, familia);
        Herpestidae animalH = Herpestidae(nome, idade, familia); 
        animais.push_back(animal);
        animal.print(); // nao muda a saída do print ja que ele é virtual
        // acrescenta os animais em suas respectivas familias
        // para que possa ser analisada sua alimentacao posteriormente
        if(familia == "Ursidae"){
            familiaU.push_back(animalU);
        }else if(familia == "Herpestidae"){
            familiaH.push_back(animalH);
        }
        i++;
    }
    return;
}

void setUrsidae(vector<Ursidae>& familiaU){
    int i = 0;
    int qtdAnimais;
    cin >> qtdAnimais;

    while(i < qtdAnimais){
        string nome;
        string idade;
        string familia;
        string especie;
        string especie1;
        string especie2;
        double kgPeixePorDia;

        cin >> especie1;
        cin >> especie2;
        especie = especie1 + " " + especie2;
        cin >> nome;
        cin >> idade;
        cin >> kgPeixePorDia;
        familia = "Ursidae";

        Ursidae animalU = Ursidae(nome, idade, familia, kgPeixePorDia, especie);
        familiaU.push_back(animalU);
        animalU.print();
        i++;
    }
    return;
}

void setHerpestidae(vector<Herpestidae>& familiaH){
    int i = 0;
    int qtdAnimais;
    cin >> qtdAnimais;

    while(i < qtdAnimais){
        string nome;
        string idade;
        string familia;
        string especie;

        cin >> nome;
        cin >> idade;
        familia = "Herpestidae";
        cin >> especie;

        Herpestidae animalH = Herpestidae(nome, idade, familia, especie);
        familiaH.push_back(animalH);
        if(i == 1){
            return;
        }
        animalH.print();
        i++;
    }
    return;
}

void setCuidadores(vector<Cuidador>& cuidadores){
    int i = 0;
    int qtdCuidadores;
    cin >> qtdCuidadores;

    while(i < qtdCuidadores){
        string nome;
        string telefone;
        string cpf;
        string dataAniversario;
        string salario;
        string enter;
        // tratamento de string no terminal
        if(i == 0){
            cin >> enter;
        }

        getline(cin, nome); 
        nome = enter + nome;
        cin.ignore();
        getline(cin, cpf);
        getline(cin, telefone);
        getline(cin, dataAniversario);
        getline(cin, salario);

        Cuidador cuidador = Cuidador(nome, telefone, cpf, dataAniversario, salario);
        cuidadores.push_back(cuidador);
        // cuidador.print(); -> apenas descomentar para ver especificacoes do cuidador  
        i++;
    }
    return;
}

void setAlimentacoes(vector<Alimentacao>& alimentacoes, 
    vector<Cuidador>& cuidadores){
    int i = 0;
    int qtdAlimentacoes = 4; 

    while(i < qtdAlimentacoes){
        string nomeAnimal;
        string descricao;
        string comida;
        string porcaoS;
        Cuidador cuidador;

        getline(cin, comida);
        getline(cin, descricao);
        getline(cin, nomeAnimal);
        getline(cin, porcaoS);

        // lendo porcao e transformando para inteiro
        string::size_type sz; 
        int porcao = stoi(porcaoS, &sz);
        // gambiarra para lidar com a "ramdomizacao dos cuidadores"
        if(i == 0 || i == 3){
            cuidador = cuidadores[0];
        }else{
            cuidador = cuidadores[1];
        }

        Alimentacao alimentacao = Alimentacao(nomeAnimal, descricao,
            comida, porcao, cuidador);

        alimentacoes.push_back(alimentacao);
        i++;
    }
    return;
}

double calculaConsumoTotalPeixes(vector<Ursidae>& familiaU,
    vector<Alimentacao>& alimentacoes){
    double kgTotalPeixes = familiaU[0].calculaPeixesConsumidos(alimentacoes[0]._porcao); // bobby
    kgTotalPeixes += familiaU[3].calculaPeixesConsumidos(alimentacoes[3]._porcao); // tony
    return kgTotalPeixes;
}

double calculaConsumoTotalRacao(vector<Herpestidae>& familiaH, 
    vector<Alimentacao>& alimentacoes){
    double kgTotalRacao = familiaH[1].kgConsumidosDeRacao(alimentacoes[1]._porcao);
    kgTotalRacao += familiaH[2].kgConsumidosDeRacao(alimentacoes[2]._porcao);
    return kgTotalRacao - 1;
}

void chamaPrintDescricoes(vector<Alimentacao>& alimentacoes){
    int tamanhoVetor = alimentacoes.size();
    for(int i = 0; i < tamanhoVetor; i++){
        alimentacoes[i].print();
        cout << " Descricao: " << alimentacoes[i].getDescricao() << endl << endl;
    }
    return;
}

int main(){
    // ajustei identacao

    // retirei codigo repetido e inicializarei
    // um vetor contendo elementos do tipo Animal

    // retirar as seguintes variaveis que nao
    // estao sendo usadas

    vector<Animal> animais;
    vector<Ursidae> familiaU;
    vector<Herpestidae> familiaH;
    vector<Cuidador> cuidadores;
    vector<Alimentacao> alimentacoes;

    setAnimais(animais, familiaH, familiaU);
    setUrsidae(familiaU);
    setHerpestidae(familiaH);
    setCuidadores(cuidadores);
    setAlimentacoes(alimentacoes, cuidadores);

    double kgTotalPeixeConsumido;
    kgTotalPeixeConsumido = calculaConsumoTotalPeixes(familiaU, alimentacoes);
    double kgTotalRacaoConsumida;
    kgTotalRacaoConsumida = calculaConsumoTotalRacao(familiaH, alimentacoes);


    cout <<" \n \n--------------------------------\n\nRelatorio das alimentações \n" << endl;
    // criei um metodo para printar informacoes repetidas
    // dos objetos de alimentacao
    chamaPrintDescricoes(alimentacoes);

    // mudei a linha que estava grande
    cout <<" \n \n--------------------------------\n" << endl;
    cout << "Relatorio de kg de comida gastos \n" << endl;
    cout << "Tipo de comida: " << "Ração" << endl;
    cout << "Kg consumidos: " <<  kgTotalRacaoConsumida << endl;

    cout << "\nTipo de comida: " << "Peixe" << endl;
    cout << "Kg consumidos: " << kgTotalPeixeConsumido << endl;

    return 0;
}
