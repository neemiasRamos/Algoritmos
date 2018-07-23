/*
	Name: EX05
	Author: Celso Fernando Paes
	Date: 12/08/15 09:32
	Description: Entrar com o ano de nascimento de uma pessoa e imprimir a idade dela.
	Verificar se o ano digitado é válido.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int idade;
	printf("Digite o ano em que nasceu: ");
	scanf("%d", &idade);
	if((idade>=1850)&&(idade<=2015))
		printf("A sua idade eh: %d", 2015-idade);
	else
		printf("VALOR INCORRETO!");
	getch();
}
