/*
	Name: EX15.cpp
	Author: Celso Fernando Paes
	Date: 14/08/15 13:46
	Description:Construa um algoritmo que calcule o FATORIAL de N, sendo que o valor 
	inteiro de N � fornecido pelo usu�rio. Sabe-se que: N! = 1 * 2 * 3 * 4 ... (N-1) * N 
 0! = 1, por defini��o
 1! = 1
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i, fat=1, num=0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(i=num;i>0;i--)
		{
			fat=fat*num;
			num--;
			printf("\n%d", fat);
		}
	getch();
}
