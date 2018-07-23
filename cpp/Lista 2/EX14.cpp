/*
	Author: Neemias Ramos Ferreira
	Date: 15/08/15 18:07
	Description: Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer
	preço. O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia 
	ser feito com grãos de trigo dispostos em um tabuleiro de xadrez, de tal forma que o 
	primeiro quadro deveria conter apenas 1 grão e os quadros subsequentes, o dobro do 
	quadro anterior. A rainha achou o trabalho barato e pediu que o serviço fosse executado, 
	sem se dar conta de que seria impossível efetuar o pagamento. Faça um algoritmo para 
	calcular o número de grãos que o monge esperava receber. Lembre-se, um tabuleiro de 
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
