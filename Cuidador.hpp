#ifndef Cuidador_H
#define Cuidador_H

#include <string>
using namespace std;

//Classe que representa um cuidador
class Cuidador
{
private:
	//Variavel string para armazenar o salario do cuidador
	string salario;
	//Variavel string para armazenar o nome do cuidador
	string nome;
	//Variavel string para armazenar o CPF do cuidador
	string  cpf;
	//Variavel string para armazenar o telefone do cuidador 
	string telefone;
	//Variavel strig para armazenar a data de nascimento do cuidador
	string nascimento;
public:
    //Funcao Get para o salario
    string getSalario() {return salario;};
    //Funcao Set para o salario
    void setSalario(string salario_) {salario = salario_;};
    //Funcao Get para o nome
    string getNome() {return nome;};
    //Funcao Set para o nome
    void setNome(string nome_) {nome = nome_;};
    //Funcao Get para o cpf
    string getCpf() {return cpf;};
    //Funcao Set para o cpf
    void setCpf(string cpf_) {cpf = cpf_;};
    //Funcao Get para o telefone
    string getTelefone() {return telefone;};
    //Funcao Set para o telefone
    void setTelefone(string telefone_) {telefone = telefone_;};
    //Funcao Get para o nascimento
    string getNascimento() {return nascimento;};
    //Funcao Set para o nascimento
    void setNascimento(string nascimento_) {nascimento = nascimento_;};
	//Funcao para imprimir as informacoes do cuidador
	void print();
};

#endif
