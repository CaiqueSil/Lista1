#include <stdlib.h>
#include <stdio.h>

void nota(){
	
	int x=0;
	float NOTAS[10], aux=0, media=0;;
	
	for(x; x<10; x++){
		
		printf("(%d) Digite a nota do aluno: ", x);
		scanf("%f", &NOTAS[x]);
		
		media=media+NOTAS[x];
		
		if(NOTAS[x]>aux){
			aux=NOTAS[x];
		}
	}
	media=media/x;
	
	printf("\nA media: %.2f \nA nota mais alta: %.2f", media, aux);
}

int main(){
	
	nota();
	
}
