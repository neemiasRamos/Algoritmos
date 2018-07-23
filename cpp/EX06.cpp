/*
	Author: Neemias Ramos Ferreira
	Date: 12/08/15 09:38
	Description: Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens:
	"Carioca, Paulista, Mineiro ou Outros"
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int uf;
	puts("1 - RJ;");
	puts("2 - SP;");
	puts("3 - MG;");
	puts("4 - OUTROS");
	puts("");
	printf("escolha uma das opcoes acima: ");
	scanf("%d", &uf);
	if(uf==1)
		printf("RIO DE JANEIRO");
	else
		if(uf==2)
			printf("SAO PAULO");
		else
			if(uf==3)
				printf("MINAS GERAIS");
			else
				printf("OUTROS");
	getch();
}
