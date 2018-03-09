#include <stdio.h>

int main()
{
	int decimal;
	printf("Informe numero decimal:");
      scanf("%d",&decimal);
	
	int binario[100];
	
	int i = 0, j;
	
	int aux_decimal = decimal;

	while(decimal > 0)
	{
		binario[i] = decimal % 2;
		i++;
		decimal = decimal / 2;
	}

	printf("O numero %d em binario: ", aux_decimal);

	for(j = i - 1; j >= 0; j--)
		printf("%d", binario[j]);
	printf("\n");

	return 0;
}
