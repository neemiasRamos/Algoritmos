/*
	Name: EX06.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 14:53
	Description: Fa�a um algoritmo que imprima o valor do somat�rio:
	S=(1/1)+(1/2)+(1/3)...(1/200).
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float sum=0, a=1;
	for(i=1; i<=200; i++)
		{
			sum=sum+(1/a);
			a++;
		}
	printf("O SOMATORIO EH: %.2f", sum);
	getch();
}
