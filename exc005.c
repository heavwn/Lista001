#include <stdio.h>
int main(){
int n=0,i=0;

do{
	printf("Informe o numero desejado: ");
		scanf("%d", &n);
}while(n<=0);

printf("O numero %d tem como divisor os numeros: ", n);

for(i=n;i>=0;i--){	
	if(n%i==0){
		printf("%d ",i);
	}
}
return 0;
}
