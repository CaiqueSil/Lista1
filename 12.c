#include <stdlib.h>
#include <stdio.h>

void bcc(int *m, char *r1, char *r2, int z){
	
	int x=0, a, ambas[a];

	
	
		
	if((*r1=='S')||(*r1=='s')&&(*r2=='S')||(*r2=='s')){
		
		ambas[x]=*m;
		x++;
	}

}

int main(){

	int a=0, matri[1000];
	char resp1, resp2;
	char* r1;
	char* r2;
	int* m ;
	
	r1 = &resp1;
	r2 = &resp2;
	m = &matri;
	
	do{
		printf("\nDigite o numero da matricula: ");
		scanf("%d", &matri[1000]);
		printf("\nCursa Calculo 2 ? (S/N) ");
		scanf("%c", &resp1);
		printf("\nCursa LT1?  (S/N) ");
		scanf("%c", &resp2);
		
		bcc(matri, resp1, resp2, a);
		
		a++;
			
	}while(matri!=999);

	for(z; z<x; z++){
		printf("\n%d",ambas[z]);
	}
	

}
