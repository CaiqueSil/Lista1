#include <stdio.h>
#include <stdlib.h>

void indece(){
	
	int x=0, y=0, n[3][4], cont, indi, aux=0;
	
	for(x; x<4; x++){
		cont=0;
		
		for(y; y<3; y++){
			
			cont=cont+n[y][x];
			
			if(cont>aux){
				aux=cont;
				indi=x;
			}
			
		}
	}
	
	printf("\n%d", indi);
	
}

int main(){
	
	indece();
	
}
