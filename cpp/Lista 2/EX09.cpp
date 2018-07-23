/*
	Name: EX09.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 15:37
	Description: Escreva um algoritmo que calcule o volume de uma esfera em função do 
	raio R. O raio deverá variar de 0 a 20 cm de 0.5 em 0.5 cm.
	v=(4/3)*pi*R³
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	float pi=3.1415926535897932384626433832795, r=0, vol=0;
	for(i=0;i<=40;i++)
		{
			vol=(4/3)*pi*r*r*r;
			printf("\nPARA RAIO = %.2f cm -> VOLUME = %.2f cm³", r, vol);
			r=r+0.5;
		}
	getch();
}
