#include <stdio.h>

int main()
{
	int idade;
	printf("Qual sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	if (idade < 18)
	{
		printf("\nVoc� � menor de 18.");
	}
	else if (idade > 18 && idade <60)
	{
		printf("\nVoc� � adulto.");
	}
	else
	{
		printf("\nVoc� � idoso. ");
	}
	printf("\nSua idade � %d", idade);

	return 0;
}
