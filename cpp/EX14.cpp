/*
	Name: EX14.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 09:56
	Description: Leia um n�mero inteiro e imprima se ele � par ou �mpar.
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
