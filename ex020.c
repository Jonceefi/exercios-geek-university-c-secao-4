#include <stdio.h>

int main()
{
	float l1,l2,l3;
	printf("Digite o valor do 1o lado: ");
	fflush(stdout);
	scanf("%f",&l1);
	printf("Digite o valor do 2o lado: ");
	fflush(stdout);
	scanf("%f",&l2);
	printf("Digite o valor do 3o lado: ");
	fflush(stdout);
	scanf("%f",&l3);

	if (l1 == l2 && l2 ==l3)
	{
		printf("O triangulo eh isoceles!");
	}
	else if (l1 != l2 && l2 != l3 && l1 != l3)
	{
		printf("O triangulo � escaleno!");
	}
	else if (l1 != l2 && l1 == l3)
	{
		printf("O triangulo � equilatero");
	}
	else if (l1 == l2 && l2 != l3)
	{
		printf("O triangulo � equilatero");
	}

	else
	{
		printf("Algo de errado n�o est� certo!");
	}
	return 0;
}
