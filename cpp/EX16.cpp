/*
	Name: EX16.cpp
	Author: Celso Fernando Paes
	Date: 13/08/15 10:08
	Description: 16-	Permita a entrada de um valor de 1 a 4. 
	Em seguida, leia dois valor. Calcular e imprimir:
	- Se valor digitado for 0, calcular e exibir a soma dos n�meros
	- Se valor digitado for 1, calcular e exibir a subtra��o dos n�meros
	- Se valor digitado for 2, calcular e exibir a multiplica��o dos n�meros
	- Se valor digitado for 3, calcular e exibir a divis�o dos n�meros
	- Se valor digitado for 4, calcular e exibir a m�dia dos n�meros
	- Diferente de 1,2,3 ou 4, exibir a mensagem "Valor errado. Programa encerrado sem c�lculos"
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int menu, a, b;
	puts("ESCOLHA UMA OPCAO ABAIXO:");
	puts("0 - SOMA");
	puts("1 - SUBTRACAO");
	puts("2 - MULTIPLICACAO");
	puts("3 - DIVISAO");
	puts("4 - MEDIA");
	printf("\nOPCAO: ");
	scanf("%d", &menu);
	if((menu>=0)&&(menu<=4))
		{
			printf("\nDigite o primeiro numero: ");
			scanf("%d", &a);
			printf("Digite o segundo numero: ");
			scanf("%d", &b);
			if(menu==0)
				printf("\nA SOMA E: %d", a+b);
			else
				if(menu==1)
					printf("\nA SUBTRACAO E: %d", a-b);
				else
					if(menu==2)
						printf("\nA MULTIPLICACAO E: %d", a*b);
					else
						if(menu==3)
							printf("\nA DIVISAO E: %.2f", (float) a/b);
						else
							if(menu==4)
								printf("\nA MEDIA E: %.2f", (float) (a+b)/2);
		}
	else
		printf("\nValor errado. Programa encerrado sem c�lculos");
	getch();
}
