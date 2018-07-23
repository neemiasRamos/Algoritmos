/*
	Author: Neemias Ramos Ferreira
	Date: 12/08/15 18:36
	Description: Calcule a soma de dois números, se o resultado for maior que 10, exiba ele.
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int a, b;
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("Digite um valor: ");
	scanf("%d", &b);
	if((a+b)>10)
		printf("O resultado da soma eh: %d", a+b);
	getch();
}
