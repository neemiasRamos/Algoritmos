/*
	Author: Neemias Ramos Ferreira
	Date: 15/08/15 13:30
	Description: A conversão de graus Fahrenheit para Celsius é obtida 
	por C = 5/9 * (F - 32). Faça um algoritmo que calcule e mostre 
	tal conversão cujos valores variem de 50º a 65º de 1º em 1º.
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
			printf("\n%d°F eh igual a %.2f°C", fah, cel);
			fah++;
		}
	getch();
}
