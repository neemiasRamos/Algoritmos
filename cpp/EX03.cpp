/*
	Name: Ex03.cpp
	Author: 
	Date: 12/08/15 09:12
	Description: Construir um algoritmo que indique se o n�mero digitado est� entre 20 e 90 ou n�o.
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if((a>=20)&&(a<=90))
		printf("ESTA NO INTERVALO!");
	else
		printf("NAO ESTA NO INTERVALO!");
	getch();
}
