#include <stdio.h> 
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int a=0,b=0,c=0,d=0,dif=0;
	
printf("Informe o valor de A: ");
	scanf("%d", &a);
printf("Informe o valor de B: ");
	scanf("%d", &b);
printf("Informe o valor de C: ");
	scanf("%d", &c);
printf("Informe o valor de D: ");
	scanf("%d", &d);
	
dif=(a*b) - (c*d);	

printf("%d * %d - %d * %d\n", a, b, c, d);
printf("A Diferença é: %d", dif);
	
return 0;
}
