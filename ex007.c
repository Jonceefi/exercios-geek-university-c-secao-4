#include <stdio.h>

int main()
{
	int a,b;
	printf("Digite um valor para a: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Digite um valor para b: ");
	fflush(stdout);
	scanf("%d", &b);


	if (a > b)
	{
		printf("O valor de a:%d é maior que o valor de b:%d",a,b);
	}
	else if (b > a)
	{
		printf("O valor de b:%d é maior que o valor de: a %d",b,a);
	}
	else
	{
		printf("Os valores de a: %d e b: %d são iguais",a,b);
	}
	return 0;
}
