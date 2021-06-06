#include <stdio.h>

int main()
{
	int n,n1,n2,n3,n4;
	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%d", &n);

	if (n > 0 && n <= 99)
	{
		n1 = n/10;
		n2 = n%10;
		n3 = n1+n2;
		printf("A soma dos algarismos é: %d",n3);
	}
	else if (n > 99 && n <= 999)
	{
		n1 = n/100;
		n2 = (n/10) % 10;
		n3 = (n%100) % 10;
		n4 = n1+n2+n3;
		printf("A soma dos algarismos é: %d",n4);
	}
	else
	{
		printf("Valor inválido");
	}

	return 0;

}
