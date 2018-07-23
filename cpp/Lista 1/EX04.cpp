/*
	Author: Neemias Ramos Ferreira
	Date: 12/08/15 19:22
	Description: Entrar com um número e exibir as mensagens: "Maior que 20", 
	"Menor que 20" ou "Igual a 20".
*/

#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if(a<20)
		printf("MENOR QUE 20!");
	else
		if(a>20)
			printf("MAIOR QUE 20!");
		else
			printf("IGUAL A 20!");
	getch();
}
