#include <stdio.h>

int main()
{
	int n1;
	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d", &n1);

	if (n1 % 2 == 0)
	{
		printf("Seu n�mero � par.");
	}
	else
	{
		printf("Seu n�mero � impar.");
	}
	return 0;
}
