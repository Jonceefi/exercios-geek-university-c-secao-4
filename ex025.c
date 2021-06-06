#include <stdio.h>

int main()
{
	float a,b,c,x1,x2,d;
	printf("Digite o valor de A:\n");
	fflush(stdout);
	scanf("%f", &a);
	printf("Digite o valor de B:\n");
	fflush(stdout);
	scanf("%f", &b);
	printf("Digite o valor de C:\n");
	fflush(stdout);
	scanf("%f", &c);

	d = (b*b-4*a*c);
	x1 = ((-b) + d)/ 2*a;
	x2 = ((-b) - d)/ 2*a;

	if( d < 0)
	{
		printf("Delta negativo!\n");
		printf("%.2f",d);
		return 0;
	}
	else if(d == 0)
	{
		printf("Delta igual a 0, logo X1 = X2\n");
		printf("X1 e X2 = %.2f",x1);
		return 0;
	}
	else if(d > 0)
	{
		printf("Delta maior que 0, logo X1 != X2\n");
		printf("X1 = %.2f\nX2 = %.2f",x1,x2);
		return 0;
	}
	return 0;
}
