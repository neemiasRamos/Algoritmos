/*
	Name: EX03.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 13:30
	Description: A convers�o de graus Fahrenheit para Celsius � obtida 
	por C = 5/9 * (F - 32). Fa�a um algoritmo que calcule e mostre 
	tal convers�o cujos valores variem de 50� a 65� de 1� em 1�.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int fah=50, i;
	float cel=0.0;
	for(i=0; i<=15;i++)
		{
			cel=((0.555556)*(fah-32));
			printf("\n%d�F eh igual a %.2f�C", fah, cel);
			fah++;
		}
	getch();
}
