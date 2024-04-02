#include <stdlib.h>
#include <stdio.h>

void vector(){
	
	int x=0;
	float fi[8], fo[8], fu[8];
	
	for(x; x<8; x++){
		
		printf("\n(1) Digite o valor do vetor: ");
		scanf("%f", &fi[x]);
		
		printf("(2) Digite o valor do vetor: ");
		scanf("%f", &fo[x]);
		
		fu[x]=fi[x]+fo[x];
	}
	x=0;
	printf("\n\n");
	for(x; x<3; x++){
		
		printf("%.2f ", fu[x]);
	}
	
	
}

int main(){
	
	vector();
	
}
