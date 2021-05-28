#include <stdio.h>
#include <math.h>
int main(void) {
int num = 0, b = 0;
printf("Digite o numero desejado:\n"); 
scanf("%i", &num);
 if(num >= 0)
 { 
 b = (int)sqrt(num);
  printf("%d\n",b);
 } 
   else 
 { 
   b = pow(num, -2); 
   printf("%d\n",b);
 }
	
	  return 0;
 }
