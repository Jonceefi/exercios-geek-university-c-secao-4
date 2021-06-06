#include <stdio.h>

int main()
{
	int idade;
	printf("Qual sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if (idade < 18)
	{
		printf("\nVocê é menor de 18.");
	}
	else if (idade > 18 && idade <60)
	{
		printf("\nVocê é adulto.");
	}
	else
	{
		printf("\nVocê é idoso. ");
	}
	printf("\nSua idade é %d", idade);

	return 0;
}
