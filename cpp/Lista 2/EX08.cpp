/*
	Name: EX08.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 15:14
	Description: Construa um algoritmo que calcule e imprima o somat�rio dos 
	30 primeiros termos da s�rie:
	S=(480/10)-(475/11)+(470/3)-...
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float a=480, b=10, sum=0;
	for(i=1; i<=30; i=i+2)
		{
			sum=sum+((a/b)-((a-5)/(b+1)));
			a=a-10;
			b=b+2;
			printf("\n%.2f", sum);
		}
	printf("O SOMATORIO EH: %.2f", sum);
	getch();
}
