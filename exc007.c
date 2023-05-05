#include <stdio.h>

int seq(int n) {
	
	if (n==1)
     return(0);
     
	if (n==2)
     return(1);

int i,v=0,v1=0,v2=1;
  
for(i=3;i<=n;i++) {
    v = v1+v2;
    v1 = v2;
    v2 = v;
  }
return(v);
}

int main() {
int i,n;

do{
printf("Informe o tamanho da sequencia: ");
	scanf("%d", &n);
}while(n<0);

for(i=1;i<=n;i++) {
    printf("%2d: %d\n",i,seq(i));
  }
  return(0);
}
