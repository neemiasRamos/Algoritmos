/*
  Name: Vetores_555.cpp
  Copyright: Neemias Ramos Ferreira
  Author: Gabriel Silvestre
  Date: 31/03/15 09:42
  Description: Programa do "555", carregados com 100 valores.
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num,flag=0,vet[100];
	puts("Para cancelar o programa, digite 999.\n");
	do
	{
		printf("Digite um número: ");
		scanf("%d",&num);
		scanf("%d",vet[num]);
		if (num==555)
		{
			flag=1;
		}
		else
		{
		flag=0;
		}
	}while (num!=999);
		
	
	
	getch ();
}
