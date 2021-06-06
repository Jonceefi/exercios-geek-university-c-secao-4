#include <stdio.h>

int main()
{
	float h,s,p;
	printf("Digite sua altura: ");
	fflush(stdout);
	scanf("%f", &h);
	printf("Digite o seu sexo: \n[1] - Masculino. \n[2] - Femenino.\n");
	fflush(stdout);
	scanf("%f", &s);

	if (s == 1)
	{
		p = (72.7 * h) - 58;
		printf("Seu peso ideal é: %.2f",p);
	}
	else
	{
		p = (62.1 * h) - 44,7;
		printf("Seu peso ideal é: %.2f",p);
	}
	return 0;
}
