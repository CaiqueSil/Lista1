#include <stdlib.h>
#include <stdio.h>

void vector(){
	
	int x=0, z=0, m=0;
	float alph[8], beth[8], omh[20];
	
	for(x; x<4; x++){
		
		printf("\n(1) Digite o valor do vetor: ");
		scanf("%f", &alph[x]);
		
		printf("(2) Digite o valor do vetor: ");
		scanf("%f", &beth[x]);
		
		omh[x+m]=alph[x];
		omh[x+1+m]=beth[x];
		m++;
		
		
	}

	printf("\n\n");
	for(z; z<8; z++){
		
		printf("%.2f ", omh[z]);
	}
	
	
}

int main(){
	
	vector();
	
}
