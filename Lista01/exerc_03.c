#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,h;
	// Dados para teste: b:3, a:4, h:5 
	printf("Digite a altura:");
	scanf("%d",&a);
	printf("Digite a base:");
	scanf("%d",&b);
	printf("Digite a hipotenusa:");
	scanf("%d",&h);
	
	if (h*h ==b*b+a*a){
		printf("\nTriangulo eh retangulo. \n");
	} else {
		printf("Os dados informados nao forma um triangulo retangulo.\n");	
	} 
	
	return 0;
}
