
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
float numero1, numero2;

printf("Informe o primeiro numero: ");
scanf("%f",&numero1);
printf("Informe o segundo numero: ");
scanf("%f",&numero2);
if ((numero1 + numero2) > 10)
printf("\nA soma dos numeros informados e %3.2f\n\n", numero1 + numero2);
system("PAUSE");
return 0;
}