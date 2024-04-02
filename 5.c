#include <stdlib.h>
#include <stdio.h>

void fibo(int n){
	
	int x=0,i[n];
	
	for(x; x<n; x++){
		
		i[1]=1;
		i[0]=1;
		printf("%d ", i[x]);
		
		i[x+1]=i[x]+i[x-1];
	}
}

int main(){
	
	int quant;
	
	printf("Digite a quantidade de termos : ");
	scanf("%d", &quant);
	printf("\n");
	fibo(quant);
	
}
