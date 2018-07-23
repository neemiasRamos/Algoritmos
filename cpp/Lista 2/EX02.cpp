/*
	Author: Neemias Ramos Ferreira
	Date: 17/08/15 11:00
	Description: Construa um algoritmo que calcule e mostre a soma dos 
	primeiros 50 números PARES (inicie pelo 2): 2 + 4 + 6 + 8 + 10 + 12
	 + 14 + ... + 96 + 98 + 100
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i, soma=0, total=0;
	for(i=0; i<50; i++)
		{
			soma=soma+2;
			total=total+soma;
	
		}
	printf("\nO SOMATORIO E: %d", total);
	getch();
}
