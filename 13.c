#include <stdlib.h>
#include <stdio.h>



void matrix(){
	
	int x=1, z=1, soma=0, n[4][4];
	
	/*
	n[1][4]=4;
	n[2][3]=1;
	n[3][2]=0;
	n[4][1]=3;
	*/
	

	while(x<=4){
	
		while(z<=4){
			
			if((x+z)==5){
			//	printf("%d\n", n[x][z]);
				
				soma+= n[x][z];
			}
			z++;	
		}	
		x++;
		z=0;		
	}

	printf("A soma dos elementos da diagonal secundaria e : %d", soma/2);
	
}

int main(){
	
	//carrega();
	matrix();

		
}
