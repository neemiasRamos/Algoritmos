/*
	Name: ex08.cpp
	Author: Celso Fernando Paes
	Date: 12/08/15 14:44
	Description: Entra com dois números distintos. Exibir em ordem crescente.
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
		printf("ORDEM CRESCENTE: %d, %d",b , a);
	else
		if((a<b)&&(a!=b))
			printf("ORDEM CRESCENTE: %d, %d",a , b);
		else
			printf("Valores iguais!");
	getch();		
}
