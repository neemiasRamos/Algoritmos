/*
	Name: EX09.cpp
	Author: Celso Fernando Paes
	Date: 12/08/15 14:47
	Description: Entrar com tr�s n�meros, armazenar e uma vari�vel o maior e exibi-la.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c, maior=0;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	if(maior<a)
		maior=a;
	if(maior<b)
		maior=b;
	if(maior<c)
		maior=c;
	printf("O maior valor eh: %d", maior);
	getch();
}
