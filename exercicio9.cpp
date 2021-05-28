#include<stdio.h>

int main(){
	int a, b, resto;
	
	printf("Informe um valor para A:");
	scanf("%d", &a);
	
		printf("Informe um valor para B:");
		scanf("%d", &b);
		
		resto = a % b;
		
		if(resto == 0){
			printf("A e divisivel por B");
		}else{
		printf("A nao e divisivel por B");
		}
		return 0;
}