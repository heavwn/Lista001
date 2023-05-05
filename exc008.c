#include <stdio.h>
int main(){
int n=0, maior=0,menor=0;

do{
printf("Informe o numero desejado: \n");
	scanf("%d", &n);

if(n>maior){
	maior = n;
}

menor = n;

if(n<menor){
	menor = n;
}
}while(n>0);

printf("Maior: %d\n", maior);
printf("Menor: %d", menor);
return 0;
}
