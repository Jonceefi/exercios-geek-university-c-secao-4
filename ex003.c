#include <stdio.h>
#include <math.h>

int main()
{
	float n, r;
	printf("Escreva um valor: \n");
	fflush(stdout);
	scanf("%f",&n);

	if(n >= 0)
	{
		r = sqrt(n);
		printf("A raiz quadrada de %.2f eh %.2f ",n,r);
	}
	else
	{
		printf("!Infelizmente! N�o existe raiz quadrada de n�emro negativo!");
	}
	return 0;
}
