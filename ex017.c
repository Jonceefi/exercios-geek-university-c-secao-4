#include <stdio.h>

int main()
{
	float B,b,h,a;
	printf("\nDigite o valor da base maior: ");
	fflush(stdout);
	scanf("%f",&B);
	printf("\nDigite o valor da base menor: ");
	fflush(stdout);
	scanf("%f",&b);
	printf("\nDigite o valor da altura: ");
	fflush(stdout);
	scanf("%f",&h);

	if (B <= 0 || b <= 0)
	{
		printf("!!!Não é possivel contruir um trapezio!!!");
	}
	else
	{
		a = ((B+b) * h)/2;
		printf("A area do trapezio é de %.2f", a);
	}
	return 0;
}
