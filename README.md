# Lista de problemas e soluções

1. **Problema**: Nomes de atributos e métodos não seguem um padrão e/ou não têm significado.  
**Solução**: Renomear atributos e métodos de maneira que eles sigam o padrão camelCase e tenham nomes representativos. 

2. **Problema**: Variáveis do tipo string que armazenam apenas valores numéricos.
**Solução**: Mudar os tipos das variáveis para um tipo numérico adequado ao valor que se espera guardar.

3. **Problema**: Variáveis globais.
**Solução**: Essas variáveis não tinham nenhuma utilização no programa, então a **solução** foi apenas removê-las. 

4. **Problema**: Indentação não segue nenhum padrão.
**Solução**: Formatar o código para que ele siga o padrão de dois espaços a cada indentação.

5. **Problema**: Atributos e métodos sem nenhuma utilidade. Comentários desnecessários. 
**Solução**: Removê-los.

6. **Problema**: include guards com nomes aleatórios. 
**Solução**: Renomeá-los de acordo como nome da classe.

7. **Problema**: Especificação e implementação agregados. 
**Solução**: Separar a especificação da implementação em arquivos .hpp e .cpp, respectivamente.

8. **Problema**: Classes com atributos públicos. 
**Solução**: Tornar esses atributos privados e utilizar métodos get para poder acessá-los.

9. **Problema**: Classes sem construtores. Objetos instaciados sem construtor.
**Solução**: Criar os construtores de cada classe e chamar o construtor na criação de cada objeto.

10. **Problema**: Classes Animal, Ursidae e Herpestidae com atributos e métodos iguais.
**Solução**: Fazer da classe Animal uma superclasse das classes Ursidae e Herpestidae. Mover os comportaments mais comuns para a classe Animal. Usar polimorfismo (sobrescrita de métodos) para estender o comportamento base.

11. **Problema**: Classes Ursidae e Herpestidae com mais de uma responsabilidade. 
**Solução**: Uma vez que essas responsabilidades são iguais e relacionadas a alimentação dos animais de modo mais geral, elas foram movidas para a classe Alimentacao. Composição foi usada para agrupar as classes. 

12. **Problema**: Repetição de código ao chamar os métodos dos objetos.
**Solução**: Armazenei objetos dos tipos Animal, Cuidador e Alimentação em vetores para ter acesso sequencial a eles e, assim, evitar repetição de código.

13. **Problema**: include de bibliotecas não utilizadas e include de arquivos .hpp desnecessários. 
**Solução**: Removê-los.


