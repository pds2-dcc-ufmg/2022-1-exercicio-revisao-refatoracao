MAIN
    Organização
        - Identação
        - Alteração do nome dos objetos tipo "Animal" para o padrão "espécie""Nome"Animal + instanciação por construtores
        - Alteração do nome dos objetos tipo "Ursidae" e "Herpestidae" para o padrão "espécie""Nome" + instanciação por construtores
        - Alteração do nome dos objetos tipo "Cuidador" para o padrão cuid"Nome" + instanciação por construtores
        - Alteração do nome dos objetos tipo "Alimentacao" para o padrão "comida""NomeAnimal" + instanciação por construtores
    Lógica
        - Tipo Animal com nome "Bobby" será administrado dinamicamente, e haverá um cast para Ursidae

ANIMAL
    Organização
        - Identação/melhor separação de atributos e métodos
        - Criação de um arquivo .cpp
    Atributos
        - Alteração nos nomes dos atributos (todos em português/todos com a mesma padronização)
        - Atributos colocados como privado
        - Transformação do atributo "idade" em int
    Métodos
        - Criação de um construtor com somente "idade" e "nome" (inicializar nas classes filha)
        - Criação de um construtor padrão
        - Remoção do método "print_oi"
        - Método "print" virtual
        - Criação de getters para "nome" e "idade"

URSIDAE
    Organização
        - Herda de "Animal"
        - Atributos colocados como privado
        - Identação/melhor separação de atributos e métodos
        - Criação de um arquivo .cpp
    Atributos
        - Alteração nos nomes dos atributos (todos em português/todos com a mesma padronização)
        - Remoção de atributos já existentes na classe "Animal" (nome e idade)
        - Alteração do escopo de "PeixesPorPORCAO" (global p/ dentro da classe) e alteração para static int const
        - Criação do atributo 'string _familia = "Ursidae";' p/ construir "Animal"
    Métodos
        - Criação de um construtor
        - override em print() de animal

HERPESTIDAE
    Organização
        - Identação/melhor separação de atributos e métodos
        - Atributos colocados como privado
        - Criação de um arquivo .cpp
    Atributos
        - Alteração nos nomes dos atributos (todos em português/todos com a mesma padronização)
        - Alteração do escopo de "QUANT_PORCAO" (global p/ dentro da classe) e alteração para const int
        - Criação do atributo 'string _familia = "Herpestidae";' p/ construir "Animal"
    Métodos
        - Criação de um construtor
        - override em print() de animal

CUIDADOR
    Organização
        - Mudança do "ifndef" e do "define" de "Cuidador_H" para "CUIDADOR_H"
        - Identação/melhor separação de atributos e métodos
    Atributos
        - Alteração nos nomes dos atributos (todos em português/todos com a mesma padronização)
        - Atributos colocados como privado
    Métodos
        - Criação de um construtor
        - Melhoria na formatação do método print()

ALIMENTACAO
    Organização
        - Identação/melhor separação de atributos e métodos
        - Inclusão da biblioteca <iostream>
    Atributos
        - Alteração nos nomes dos atributos (todos em português/todos com a mesma padronização)
        - Atributos colocados como privado
        - Atributo do tipo Cuidador agora é ponteiro
    Métodos
        - Criação de um construtor
        - Remoção de comentários de métodos não usados
        - Método print: melhoria na formatação, remoção do uso de 'std::' (using namespace já estava sendo usado), mudança da impressão
            da descrição para dentro do método (ao invés da main)
        - Criação do método getPorcao