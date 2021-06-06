#include <stdio.h>

int main()
{
	int n1;
	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d", &n1);

	if (n1 % 2 == 0)
	{
		printf("Seu número é par.");
	}
	else
	{
		printf("Seu número é impar.");
	}
	return 0;
}
