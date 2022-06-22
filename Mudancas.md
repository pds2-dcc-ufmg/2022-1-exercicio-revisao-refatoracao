#### Correções de indentação
- Blocos de código no mesmo escopo com indentação diferente (mais ou menos tabs)
- Eliminação de linhas vazias
- Correção dos std::cout existentes no código, passando a indentar todos de forma padronizada
- Padronização de abertura e fechamento de parênteses

#### Padronização de namespace
- Remoção de using namespace std
- Correções de cout para std::cout de forma padronizada
- Correções de endl para std::endl de forma padronizada
- Correções de string para std::string

#### Padronização de nomenclatura
- Variáveis em CamelCase
- Variáveis na língua portuguesa
- Nomes de métodos em CamelCase
- Nomes de variáveis e métodos mais intuitivos

#### Comentários
- Remoção de comentários desnecessários e não informativos

#### Variáveis e métodos
- Remoção de variáveis não utilizadas
- Remoção de métodos não utilizados
- Correção do tipo das variáveis

#### OO
- Variáveis públicas passam a ser privadas
- Criação de getters e setters (quando necessário)  para as variáveis
- Observação: a função print() de Ursidae e Herpestidae podia ser implementada diretamente em Animal, já que imprime as mesmas informações para ambas famílias, mas se fosse assim a saída obtida não seria igual a original, que diferencia a impressão de Animal/Herpestidae da impressão de Ursidae por um acento em "família"

#### Modularização
- Separação entre especificação e implementação
- Separação de tipos de arquivos diferentes em pastas diferentes

#### Main
- Separação bem definida das partes da execução (criação de animais, cuidadores, alimentações, impressão do relatório)
- Criação de funções para dividir as diferentes partes da execução


