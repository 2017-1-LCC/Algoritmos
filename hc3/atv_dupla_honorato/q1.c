/*
Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais
um número qualquer, calcular e escrever quantas vezes esse número
aparece no vetor.
*/

#include <stdio.h>

main() {
  int vetorNumeros[30],cont,verificador,ttRepeticoes=0;

  for(cont=0; cont<30; cont++) {
    printf("Digite o %d numero: ",cont);
    scanf("%d",&vetorNumeros[cont]);
  }

  printf("Digite o numero que deseja verificar:");
  scanf("%d",verificador);

  for(cont=0; cont<30; cont++) {
    if(vetorNumeros[cont] == verificador) {
      ttRepeticoes++;
    }
  }
  printf("O numero %d se repetiu %d vezes",verificador,ttRepeticoes);
}