/*
	Author: Neemias Ramos Ferreira
	Date: 15/08/15 15:06
	Description: Faça um algoritmo que calcule e imprima o seguinte somatório S:
	S=((38*37)/1)+((37*36)/2)+((36*35)/3)+...+((2*1)/37).
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float a=38, d=37, sum=0;
	for(i=1; i<=37; i++)
		{
			sum = sum+((a*d)/i);
			a=d;
			d=d-1;
		}
	printf("O SOMATORIO EH: %.2f", sum);
	getch();
}
