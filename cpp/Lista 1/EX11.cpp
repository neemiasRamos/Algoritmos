/*
	Author: Neemias Ramos Ferreira
	Date: 11/08/15 16:12
	Description: Um comerciante comprou um produto e quer vende-lo com um lucro de 45%
	se o valor da compra for menor que R$ 20,00; Caso contrário, o lucro será de 30%. 
	Entrar com o valor do produto e imprimir o valor da venda.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	float vcomp, vvend;
	printf("Digite o valor da compra: ");
	scanf("%f", &vcomp);
	if(vcomp>0)
		{
			if(vcomp<=20)
				{
					vvend=vcomp*1.45;
					printf("O valor de venda eh: %.2f", vvend);
				}
			else
				{
					vvend=vcomp*1.30;
					printf("O valor de venda eh: %.2f", vvend);
				}
		}
	else
		printf("Valor de compra incorreto!");
	getch();	
}
