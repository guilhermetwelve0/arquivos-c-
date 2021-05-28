#include<stdio.h>
#include<math.h>

int main()
{
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	if((numero % 3 ==0)){
		printf("O NUMERO E MULTIPLO\n");
	}
	else{
		printf("O NUMERO NAO E MULTIPLO\n");
	}
	return 0;
}