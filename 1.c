#include <stdlib.h>
#include <stdio.h>

float calc(float a);

int main () {
	
	char nom[10];
	float preco;
	
	printf("Nome do produto: ");
	scanf("%s", &nom);
	
	printf("Valor do produto: ");
	scanf("%f", &preco);
	
	printf("Novo valor do produto %s : %.2f", nom, calc(preco));
}

float calc(float a){
	
	return a*1.2;
}
