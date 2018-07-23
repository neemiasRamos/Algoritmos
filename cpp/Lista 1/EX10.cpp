/*
	Author: Neemias Ramos Ferreira
	Date: 12/08/15 14:03
	Description: Entrar com a idade de uma pessoa e exibir a mensagem; 
	Maior de idade, menor de idade ou acima de 65 anos.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if(idade<18)
		printf("MENOR DE IDADE!");
	else
		if(idade<=65)
			printf("MAIOR DE IDADE!");
		else
			printf("MAIOR QUE 65 ANOS!");
		getch();
}
