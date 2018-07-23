/*
	Name: EX14.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 09:56
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
