#include <stdlib.h>
#include <stdio.h>

void par(int x, int y){
	
	for(x; x<=y; x++){
		if((x%2)==0){
			printf("%d ", x);
		}
		
	}
}

int main(){
	
	int num1, num2;
	
	do{
		
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Segundo numero: ");
	scanf("%d", &num2);
	printf("\n");
	
	if(num1<num2){
		par(num1, num2);
			
	}else{
	
		printf("\n### Coloque o maior numero como o segundo ### \n");	
	}

		
	}while(num1>num2);
	
	
}
