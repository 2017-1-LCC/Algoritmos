#include <stdio.h>

struct lapis {
	int dureza;
	char fabricante[20];
	int numero;
};

/* 
cadastra lapis recebe dois argumentos, sendo o primeiro um ponteiro que faz referencia para uma variável do tipo
struct lapis e a segunda informa quantos elementos ela vai agregar.
*/
void cadastraLapis(struct lapis *elemento, int tam) {

	int cont;
	
	for(cont = 0; cont < tam; cont++) {
	printf("DIGITE A DUREZA DO PRODUTO %d: ",cont+1);
	scanf("%d",&elemento[cont].dureza);
	printf("DIGITE O FABRICANTE DO PRODUTO %d: ",cont+1);
	scanf("%s",&elemento[cont].fabricante);
	printf("DIGITE O NUMERO DO PRODUTO %d: ",cont+1);
	scanf("%d",&elemento[cont].numero);
			
	}

};

main() {
	
	int cont, tam;
	struct lapis elemento[100];
	
	printf("DIGITE O TAMANHO DO VETOR:");
	scanf("%d",&tam);
	
	cadastraLapis(elemento, tam);
	
	printf("\nDureza	Fabricante	Numero\n");
	for(cont = 0; cont < tam; cont++) {
		printf("%d\t%s\t\t\t%d\n",elemento[cont].dureza,
		elemento[cont].fabricante,elemento[cont].numero);
	}
	
	
}
