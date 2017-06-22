# PEQUENA INTRODUÇÃO À ALGORITMOS 

Autor: [André Paulo Silva Liro](https://github.com/a2liro)
Curso: LCC                                         
Semestre: 2017.1 



                                  


# Sumário
[1. - Introdução](#1)<br>
[2. - Enrolação](#2)<br>
[3. - Laços de repetição](#3)<br>
  [3.1. - O que são laços de repetição](#3.1)<br>
  [3.1.1. Laço de repetição com contador](#3.1.1)<br>
  [3.1.2. Laço de repetição com contador em portugol](#3.1.2)<br>
  [3.1.3. Laço de repetição com contador em **C](#3.1.3)<br>



## <a name="1"></name>1 - Introdução
    
    (TEMPORÁRIO)
Neste Pequeno texto, pretendo mostrar, com a ajuda dos meus colegas,
um resumo de algoritmo em portugol e como implementar alguns exemplos na linguagem de
propgramação C, que será nossa proxima linguagem de estudo.

## <a name="2"></a> 2 - Enrolação

Essa parte é só enrolação mesmo, então fique a vontade de ir para a parte 3...


## <a name="3"></a>3 - Laços de repetição

## <a name="3.1"></a>3.1 - O que são laços de repetição?
Laços de repetição são estruturas de controle utilizadas em programas de computador para automatizar certas tarefas em derterminadas circunstâncias. Existem basicamente dois tipos de laço de repetição: os controlados por contador e os controlados variavel.
Os laços controlados por contador, utilizam uma variável de controle para contar o
número de repetições desejadas pelo programador, já nos laços de repetição controlados
por variável, o laço se repetirá indefinidamente até que a variavél obtenha o valor da
condição de parada, este tipo de laço requer um pouco de atenção, pois se a condição 
de saída não puder ser alcançada o programa entrará em um estado chamado de loop infinito,
causando o travamento do mesmo.

### <a name="3.1.1"></a>3.1.1 Laço de repetição com contador

O laço de repetição com contador, pode ser implementado em qualquer linguagem de programação, vou mostrar aqui, apenas em portugol e C, pois são essas as linguagens estudadas em algoritmos nesse semestre.

#### <a name="3.1.2"></a>3.1.2 Laço de repetição com contador em portugol 

    Algoritmo "Laço de repetição com contador em portugol"

    Var
    // Seção de Declarações das variáveis
      contador : inteiro
    Inicio
       // Seção de Comandos, procedimento, funções, operadores, etc...
       para contador de 0 ate 10 faca
           // Note que usei "escreval" para que ele salte uma linnha após escrever o texto
           escreval("O valor do contador é: ", contador)
       fimpara
    Fimalgoritmo

#### <a name="3.1.3"></a>3.1.3 Laço de repetição com contador em **C

    #include <stdio.h>
    #include <stdlib.h>
  
    int main(){
      // laço for com controle de numero de repetição
      for(int x = 1; x <= 10; x++){
        printf("O valor de X é: %d", x); 
      }
    }
