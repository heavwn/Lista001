#include <stdio.h>
int main(){
int n3=0,i=0,n5, total;

printf("---------- SOMA ----------\n");
printf("Soma de todos os numeros naturais abaixo de 1000 multiplos de 3: \n");


for(i=999;i>=1;i--){
	
	if(i%3==0){
		n3 = n3+i;
	}
		
}
 printf("%d\n", n3);

printf("Soma de todos os numeros naturais abaixo de 1000 multiplos de 5: \n");


for(i=999;i>=1;i--){
	
	if(i%5==0){
		n5 = n5+i;
	}
		
}
 printf("%d\n", n5);
	
	
total=n5+n3;

printf("Soma total: %d", total);	
	
return 0;
}
