#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <string>

class Alimentacao
{

private:
  std::string _nomeAnimal;
  int _porcoesConsumidas;
  std::string _cuidador;
  std::string _descricao;

public:
  Alimentacao(const std::string& nomeAnimal,
              const int& porcoesConsumidas, const std::string& cuidador,
              const std::string& descricao);

  int getComidaConsumida(const int pesoPorcao);
  void print();
};

#endif