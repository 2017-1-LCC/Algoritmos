/*
Escreva um algoritmo que permita a leitura das medias de uma turma de
20 alunos, e armazene essas médias em um vetor. Sabendo que o aluno
é aprovado com média >= 7,0 e reprovado com média < 7. Calcular
quantos alunos foram aprovados e quantos foram reprovados. No final
mostrar o vetor e o percentual de alunos aprovados e reprovados.
*/

#include <stdio.h>

main() {
  float medias[20];
  int linha, qntAprovados=0, qntReprovados=0;
  float porcentAprovados, porcentReprovados;
  
  for(linha=0; linha < 20; linha++) {
  	printf("Digite a %d media da turma: ",linha + 1);
  	scanf("%f",&medias[linha]);
  }
  
  for(linha=0; linha < 20; linha++) {
  	if(medias[linha] >= 7) {
  		printf("A nota %.1f foi aprovada\n", medias[linha]);
  		qntAprovados++;
	} else {
		printf("A nota %.1f foi reprovada\n", medias[linha]);
		qntReprovados++;
	}		
  }
  
  porcentAprovados = (qntAprovados * 100 ) / 20;
  porcentReprovados = (qntReprovados * 100 ) / 20;
  
  printf("A porcentagem de aprovados e: %.0f%% \n",porcentAprovados);
  printf("A porcentagem de aprovados e: %.0f%%",porcentReprovados);
  
}
