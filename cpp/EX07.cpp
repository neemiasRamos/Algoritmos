/*
	Author: Neemias Ramos Ferreira
	Date: 12/08/15 11:25
	Description: Entrar com dois números inteiros e imprimir o menor.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int a, b;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	if((a>b)&&(a!=b))
		printf("O menor valor eh: %d", b);
	else
		if((a<b)&&(a!=b))
			printf("O menor valor eh: %d", a);
		else
			printf("Valores iguais!");
	getch();		
}
