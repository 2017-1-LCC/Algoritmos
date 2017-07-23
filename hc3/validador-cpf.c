#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char cpf[11];
	int i, somaFirstDig,valorConvertido,restoPrimeiroDig,primeiroDig;
	int j, somaSecondDig,restoSegundoDig,segundoDig;
	int validadorPrimeiroDig, validadorSegundoDig;

	printf("Digite o numero do CPF: \n");
	scanf("%s",&cpf);

	somaFirstDig = 0;

	for(i = 0; i < 9; i++) {
		valorConvertido = cpf[i] - '0';
		somaFirstDig += (valorConvertido * (10 - i));
		//printf("Digito %d * %d = %d \n",(10 - i),valorConvertido,somaFirstDig);
	};
	restoPrimeiroDig = somaFirstDig % 11;
    //printf("Resto do primeiro digito: %d \n",restoPrimeiroDig);
	primeiroDig = 11 - restoPrimeiroDig;
	//printf("Primeiro digito encontrado: %d \n",primeiroDig);

	somaSecondDig = 0;

	for(j = 0; j < 10; j++) {
		valorConvertido = cpf[j] - '0';
		somaSecondDig += (valorConvertido * (11 - j));
		//printf("Digito %d * %d = %d \n",(11 - 1),valorConvertido,somaSecondDig);
	};
	restoSegundoDig = somaSecondDig % 11;
	//printf("Resto do segundo digito: %d \n",restoSegundoDig);
	segundoDig = 11 - restoSegundoDig;
	//printf("Segundo digito encontrado: %d \n",segundoDig);

    validadorPrimeiroDig = cpf[9] - '0';
    validadorSegundoDig = cpf[10] - '0';

    if((primeiroDig == validadorPrimeiroDig) && (segundoDig == validadorSegundoDig)) {
        printf("O cpf é valido!");
    } else {
        printf("O cpf é invalido");
    }

    return 0;

}

