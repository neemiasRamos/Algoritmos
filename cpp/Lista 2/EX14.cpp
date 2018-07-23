/*
	Name: EX14.cpp
	Author: Celso Fernando Paes
	Date: 14/08/15 11:07
	Description: Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer
	pre�o. O monge, necessitando de alimentos, indagou � rainha sobre o pagamento, se poderia 
	ser feito com gr�os de trigo dispostos em um tabuleiro de xadrez, de tal forma que o 
	primeiro quadro deveria conter apenas 1 gr�o e os quadros subsequentes, o dobro do 
	quadro anterior. A rainha achou o trabalho barato e pediu que o servi�o fosse executado, 
	sem se dar conta de que seria imposs�vel efetuar o pagamento. Fa�a um algoritmo para 
	calcular o n�mero de gr�os que o monge esperava receber. Lembre-se, um tabuleiro de 
	xadrez possui 64 quadros.

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	float sum=0, exp=1; 
	for(i=1;i<=64;i++)
		{
			sum=sum+exp;
			exp=exp*2;
		}
	printf("O TOTAL DE GRAOS EH: %.0f", sum);
	getch();
}
