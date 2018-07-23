/*
	Author: Neemias Ramos Ferreira
	Date: 15/08/15 10:36
	Description: Escreva um algoritmo que leia 10 idades e mostre a média entre elas. 
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int idade, soma=0, cont;
	for(cont=0; cont<10; cont++)
		{
			printf("IDADE: ");
			scanf("%d", &idade);
			soma=soma+idade;
		}
	printf("A MEDIA DE IDADES E: %.2f", (float) soma/cont);
	getch();	
}
