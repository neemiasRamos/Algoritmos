/*
	Author: Neemias Ramos Ferreira
	Date: 10/08/15 20:01
	Description: Faça um algoritmo para calcular o reajuste salarial de um funcionário, 
		de acordo com os critérios abaixo:
		- se salário inferior a R$ 10.000,00 deve ter um reajuste de 55%
		- se salário entre R$ 10.000,00 (inclusive) e R$ 25.000,00
 		(inclusive) deve ter um reajuste de 20%
		- se salário superior a R$ 25.000,00 deve ter um reajuste de 20%.

*/

#include<stdio.h>
#include<conio.h>
main()
{
	float sal, reajuste;
	printf("Digite seu salario: ");
	scanf("%f", &sal);
	if(sal>0)
		{
			if(sal<10000)
				printf("O reajuste eh: %.2f", sal*1.55);
			else
				printf("O reajuste eh: %.2f", sal*1.20);
		}
	else	
		printf("Salario invalido!");
	getch();
}
