#include <stdio.h>
int main(){
float x,y;
printf("Informe as coordenadas do ponto X: ");
	scanf("%f", &x);
printf("Informe as coordenadas do ponto Y: ");
	scanf("%.1f", &y);


if(x==0 && y==0){
	printf("O ponto esta sobre a Origem");
}

else if(y==0){
	printf("O ponto esta sobre o Eixo X");
}

else if(x==0){
	printf("O ponto esta sobre o eixo Y");
}

else{
	if(x>0 && y>0){
		printf("O ponto pertence ao Quadrante 1");
	}
	else if(x<0 && y>0){
		printf("O ponto pertence ao Quadrante 2");
	}
	else if(x<0 && y<0){
		printf("O ponto pertence ao Quadrante 3");
	}
	else if(x>0 && y<0){
		printf("O ponto pertence ao Quadrante 4");
	}
}

return 0;
}

