/*
	Name: EX05.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 14:47
	Description: Construa um algoritmo que calcule e imprima o somat�rio dos 30 primeiros 
	termos da s�rie:
	S=(480/10)+(475/11)+(470/12)...	
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float a=10, b=480, sum=0;
	for(i=1; i<=30; i++)
		{
			sum=sum+(b/a);
			a++;
			b=b-5;
		}
	printf("O SOMATORIO EH: %.2f", sum);
	getch();
}
