#include <stdio.h>
#define TAM 10
int main(){
int n[TAM], i, j, media;


for(i=0; i<=TAM-1; i++){
	printf("Informe o numero: ");
		scanf("%d", &n[i]);
	j = j+n[i];
}

media = j/TAM;

printf("A media foi de: %d", media);

return 0;
}
