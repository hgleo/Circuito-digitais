# Aula 1 

## Cálculo Proposicional Clássico (CPC)

- Consiste num sistema simbólico de lógica clásscia.
- Bivalência.
- Não-contradição.
- Terceiro Excluído.
- Identidade.
 
### Proposições.

  - São estruturas linguísticas passíveis de serem julgadas.
  - Sentenças interrogativas ou iterativas não se enquadram.
   
### Termos de Operadores:

  - No CPC, fórmulas atômicas representam proposições. São utilizadas letras maiúsculas.
  - Os operadores alteram os valores das fórmulas atômicas, criando fórmulas moleculares.
  - Os operadores mais usados são: 
    - Negação (¬).
    - Conjunção (^). " e "
    - Disjunção (v). " ou "
    - Implicação (->). " se ... então " 
    - Bi-implicação (<->). " se somente se "

 ## Álgebra de boole:  
 
  - Trabalha com variáveis/sentenças biestáveis.
  - Uma eexpressão booleana é a combinação de variáveis/sentenças que apresentam um único valor a cada verificação.
   - NOT: S = ¬(A):   S A B
                        F V
                        V F
                        
   - AND: S = A*B:    S A B
                      V V V
                      F V F
                      F F V
                      F F F
                      
   - OR: S = A+B:     S A B
                      V V V
                      V V F
                      V F V
                      F F V
                      
   - NAND: S = ¬(AB): S A B
                      F V V
                      V V F
                      V F V
                      V F F
                      
   - NOR: S = ¬(A+B): S A B
                      F V V
                      F V F
                      F F V
                      F F F
                      
   - XOR: S = A(+)B:  S A B
                      F V V
                      V V F
                      V F V
                      F F F
                      
   - XNOR: S = A(.)B: S A B 
                      V V V
                      F V F
                      F F V
                      V F F
