#include <stdio.h>

int main()
{
	int n1,n2,n3;
	printf("Digite o valor de A: ");
	fflush(stdout);
	scanf("%d", &n1);
	printf("Digite o valor de B: ");
	fflush(stdout);
	scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("O valor A: %d é maior que o valor de B: %d",n1,n2);
		n3 = n1-n2;
		printf("\nA diferenca entre eles é de %d casas",n3);
	}
	else
	{
		printf("O valor A: %d é menor que o valor de B: %d",n1,n2);
		n3 = n2-n1;
		printf("\nA diferenca entre eles é de %d casas",n3);
	}
	return 0;
}
