#include <stdio.h>
#include <stdlib.h>

void decresce(){
	
	int x, y, z;
	int n[3][4], aux=1000, soma[4];

		//nao ta somando

	
	for (x=1; x<=3; x++){
		printf("\n");	
		for(y=1; y<=4; y++){
			
			printf("Digite o valor do elemento[%d] : ", y);
			scanf("%d", &n[x][y]);	
			
			
			if(n[x][y]>aux){
				printf(" Valor nao permitido\n");
				
				
			}else {
				
			
					aux=n[x][y];
					soma[y]=soma[y] + n[x][y];
	
				}		
			}
		}
	}
	
	printf("\n");
	for(z=1; z<=4; z++){
		
		printf("A soma da coluna [%d] : %d\n", z, soma[z]);
	}
	
}

int main(){
	
	decresce();
	
}
