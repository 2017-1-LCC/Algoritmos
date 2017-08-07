#include <stdio.h>

/*
Crie um algoritmo que solicite ao usuário 10
valores inteiros, armazenando os dados em
um vetor. Em seguida, o algoritmo deverá
percorrer o vetor escrevendo na tela os
valores armazenados nas posições ímpares.
*/

main() {

  int valores[10],cont=0;

  for(cont=0; cont < 10; cont++) {
    printf("Digite o %d valor inteiro: ",cont);
    scanf("%d",&valores[cont]);
  }

  for(cont=0; cont < 10; cont++) {
    if(cont%2!=0) {
      printf("o valor na posicao %d e : %d",cont,valores[cont]);
    }
  }

}
