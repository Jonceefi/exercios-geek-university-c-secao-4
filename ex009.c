#include <stdio.h>

int main()
{
	float sal,pres,cond;
	printf("Digite o valor do salario:");
	fflush(stdout);
	scanf("%f", &sal);
	printf("Digite o valor da prestacao do emprestimo: ");
	fflush(stdout);
	scanf("%f", &pres);

	cond = sal * 0.2;

	if (cond > pres)
	{
		printf("Emprestimo concedido!");
	}
	else
	{
		printf("Emprestimo negado!");
	}
	return 0;
}
