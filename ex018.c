#include <stdio.h>

int main()
{
	float av1,av2,av3,mp;
	printf("Digite a nota adquirida no trabalho de laboratorio: ");
	fflush(stdout);
	scanf("%f",&av1);
	printf("Digite a nota adquirida na avaliacao semestral: ");
	fflush(stdout);
	scanf("%f",&av2);
	printf("Digite a nota adquirida no exame final: ");
	fflush(stdout);
	scanf("%f",&av3);

	mp = ((av1*2) + (av2*3) + (av3*5))/10;

	if (mp > 4.9)
	{
		printf("Aluno Aprovado!\nCom a media: %.2f", mp);
	}

	else if (mp > 3 && mp == 4.9)
	{
		printf("Aluno de recuperacao!");
	}
	else
	{
		printf("Aluno reprovado!");
	}
	return 0;
}
