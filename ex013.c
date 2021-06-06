#include <stdio.h>

int main()
{
	float av1,av2,av3,mp;
	printf("Digite a primeira nota: ");
	fflush(stdout);
	scanf("%f",&av1);
	printf("Digite a segunda nota: ");
	fflush(stdout);
	scanf("%f",&av2);
	printf("Digite a terceira nota: ");
	fflush(stdout);
	scanf("%f",&av3);

	mp = ((av1 + av2) + (av3*2))/5;

	if (mp == 4.5 || mp < 4.5)
	{
		printf("Aluno Reprovado!");
	}
	else
	{
		printf("Aluno Aprovado!");
	}
	return 0;
}
