#include <stdio.h>

int main()
{
	int biss, dv1, a;
	printf("= = = IDENTIFICADOR DE BISSEXTO = = =");
	printf("Digite o ano: ");
	fflush(stdout);
	scanf("%d",&biss);

	if(biss >= 0 && biss <= 99)
	{
		dv1 = biss%4;
		if(dv1 == 0)
		{
			printf("O ano é bissexto.");
		}
		else
		{
			printf("O ano não é bissexto.");
		}
	}
	else if (biss >= 100 && biss <= 999)
	{
		 a = biss%10;
		 if (a%4 == 0 || biss%400 == 0)
		 {
			 printf("O ano é bissexto.");
		 }
		 else
		 {
			 printf("O ano não é bissexto.");
		 }
	}
	else if (biss >= 1000 && biss<= 9999)
	{
		a = biss%100;
		if( a%4 == 0 || a%400 == 00)
		{
			printf("O ano é bissexto.");
		}
		else
		{
			printf("O ano não é bissexto.");
		}
	}
	return 0;
}
