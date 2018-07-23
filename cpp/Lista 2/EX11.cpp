/*
	Author: Neemias Ramos Ferreira
	Date: 15/08/15 21:05
	Description: Faça um algoritmo que calcule e mostre o valor de H:
	H=(1/225)-(2/196)+(4/169)-(8/144)...(16384/1).
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j=29, p;
	float h=0, a=1, b=225;
	for(i=1; i<=15; i++)
		{
			if(i%2==0)
				p=-1;
			else
				p=1;
			h=h+p*(a/b);
			a=a*2;
			b=b-j;
			j=j-2;
		}
	printf("O VALOR DE H É: %.2f", h);
	getch();
}
