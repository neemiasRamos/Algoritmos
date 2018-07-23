/*
	Name: Divisivel.cpp
	Author: 
	Date: 12/08/15 09:08
	Description: Entrar com um número e informar se ele é divisível por 5.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if(a%5==0)
		printf("Divisivel por 5!");
	else
		printf("Nao divisicel por 5!");
	getch();
}
