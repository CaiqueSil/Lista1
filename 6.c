#include <stdlib.h>
#include <stdio.h>

void serie(int n){
	
	int x=1;
	float val=0, X=1, m=n;
	
	for(x; x<=n; x++){
		
		if((x%2)==1){
			val=val+(X/m);
			
		}
		
		if((x%2)==0){
			val=val-(X/m);
			
		}
		
		m--;
		X++;
		
	}
	
	printf("%f", val);
	
}

int main(){
	
	int num;
	printf("Digite o valor de num : ");
	scanf("%d", &num);
	serie(num);
	
}
