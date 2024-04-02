#include <stdlib.h>
#include <stdio.h>

void sequela(){
	int num, x=0, aux=0, pos;
	
	do{
		
		scanf("%d", &num);
		if(num>aux){
			aux=num;
			pos=x;
		}
		
		x++;
		
	}while(num!=0);
	
	printf("\n\nO numero e  %d  e a posicao e  %d", aux, pos);
	
}

int main(){

	sequela();
	
}
