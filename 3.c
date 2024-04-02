#include <stdlib.h>
#include <stdio.h>

//BUGADO

void calcula(float *a, float *b, char *m);

int main(){

	float num1, num2, calcu;
	char resp;
	
	printf("(1) Numero : ");
	scanf("%f", &num1);
	
	printf("(2) Numero : ");
	scanf("%f", &num2);
		
	printf("Digite o tipo de operacao ( + - * / ) : ");
	fflush(stdin);
	scanf("%c", &resp);
	
	calcu=calcula(&num1, &num2, &resp);
	printf("%f", calcu );

	
}

float calcula(float *a, float *b, char *m){
	float d=0;
	
	switch (*m){
		case '+': 
			d= *a + *b;
			
			break;
		
		case '-' : 
			d= *a - *b;
			
			break;
			
		case '*' : 
			d= *a * (*b);
			
			break;
			
		case '/' : 
			d= *a / (*b);
			
			break;
	
	}
	return d;

}

