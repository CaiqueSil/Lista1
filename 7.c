#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//BUGADO

void leia(){
	
	char nome[20], sexo;
	char alto[20], gorda[20];
	float altura, peso, tpeso=0, taltura=0;
	float mediap=0, mediaa=0;
	int x, X;
	
	for(x; x<2; x++){
		
		printf("Digite seu nome : ");
		gets(nome);
		
		printf("Digite seu sexo (M/F) : ");
		scanf("%c", &sexo);
		
		printf("Digite sua altura : ");
		scanf("%f", &altura);	
		
		printf("Digite seu peso : ");
		scanf("%f", &peso);	
		
		if((sexo=='f')||(sexo='F')){
			
			mediap=(mediap+peso);
			
			if(tpeso<peso){
				
				tpeso=peso;
				strcpy(gorda,nome);
			}
			
		}
		
		if((sexo=='m')||(sexo=='M')){
			
			mediaa=(mediaa+altura);
			
			if(taltura<altura){
				
				taltura=altura;
				strcpy(alto,nome);	
			}
		
		}
		X++;
	}
	mediaa=mediaa/X;
	mediap=mediap/X;
	
	printf("\n\nA media de altura e : %f ", mediaa);
	printf("\nA media do peso e : %d", mediap);
	printf("\nO mais alto e : %f", alto);
	printf("\nA mais gorda e : %d", gorda );	
}

int main(){
	
	leia();
	
}
