/*
Ler um vetor Q de 10 posições (aceitar somente números positivos).
Escrever a seguir o valor do menor elemento de Q e a respectiva
posição que ele ocupa no vetor.
*/

#include <stdio.h>

main() {
  int Q[10], menor, cont=0, posicao;
  
  for(cont = 0; cont < 10; cont++) {
  	printf("insira o %d valor: ",cont + 1);
  	scanf("%d",&Q[cont]);
  	while(Q[cont] < 0) {
  		printf("O valor precisa ser maior que 0 \n");
  		printf("insira o %d valor: ",cont + 1);
		scanf("%d",&Q[cont]);	
	}
	if(cont == 0) {
  		menor = Q[cont];
  		posicao = cont;
	} else if ( Q[cont] < menor) {
		menor = Q[cont];
		posicao = cont;
	}
  }
  
  printf("o valor %d que esta na posicao %d e o menor valor do vetor",menor,posicao);
}
