/*
	Author: Neemias Ramos Ferreira
	Date: 10/08/15 19:56
	Description: Leia um número inteiro e imprima se ele é par ou ímpar.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	if(a!=0)
		{
			if(a%2==0)
				printf("PAR");
			else
				printf("IMPAR");
		}
	else
		printf("NULO!");
	getch();
}
