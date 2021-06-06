#include <stdio.h>

int main()
{
	int idade, cont;
	printf("\n = = = INSS = = =\n");
	printf("Digite sua idade:\n");
	fflush(stdout);
	scanf("%d", &idade);
	printf("Digite o seu tempo de comtribuicao(em anos):\n");
	fflush(stdout);
	scanf("%d", &cont);

	if(idade >= 65 || cont >= 30)
	{
		printf("Voce ja pode se aposentar!");
	}
	else if (idade >= 60 && cont >= 25)
	{
		printf("Voce ja pode se aposentar!");
	}
	else
	{
		printf("Você não tem os requisitos para se aposentar!");
	}
	return 0;
}
