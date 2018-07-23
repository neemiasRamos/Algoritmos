/*
	Author: Neemias Ramos Ferreira
	Date: 15/08/15 18:50
	Description: Faça um algoritmo que leia o valor de X e a seguir calcule 
	e mostre o valor do somatório:
	S=((X^25)/1)+((X^24)/2)+((X^23)/3)...+((X^1)/25).
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j=25, num, exp=0;
	float sum=0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(i=1;i<=25;i++)
		{
			exp=pow(num,j);
			sum=sum+((float)exp/i);
			j--;
		}
	printf("O SOMATÓRIO É: %.4f", sum);
	getch();
}
