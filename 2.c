#include <stdlib.h>
#include <stdio.h>

float calc(float a, float b);

int main(){
	
	float num1, num2;
	char resp;
	
	printf("(1) Numero : ");
	scanf("%f", &num1);
	
	printf("(2) Numero : ");
	scanf("%f", &num2);
	
	printf("Deseja saber o resultado? (S/N) ");
	scanf("%s", &resp);
	
	if(resp==('s')||resp==('S')){
		printf("%.2f", calc(num1, num2));
	}
}

float calc(float a, float b){
	
	float c=a*b;
	
	return c;
}
