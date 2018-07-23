/*
	Name: EX12.cpp
	Author: Celso Fernando Paes
	Date: 12/08/15 15:23
	Description: Entre com três números e coloque-os em ordem crescente.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, c;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	if((a!=b)&&(b!=c))
		{
			if((a<b)&&(b<c))
				printf("%d, %d, %d", a, b, c);
			else
				if((a<c)&&(c<b))
					printf("%d, %d, %d", a, c, b);
				else
					if((b<a)&&(a<c))
						printf("%d, %d, %d", b, a, c);
					else
						if((b<c)&&(c<a))
							printf("%d, %d, %d", b, c, a);
						else
							if((c<a)&&(a<b))
								printf("%d, %d, %d", c, a, b);
							else
								printf("%d, %d, %d", c, b, a);
					
		}
	else
		{
			if((a==b)&&(a!=c))
				{
					if(a<c)
						printf("%d, %d, %d", a, b, c);
					else
						printf("%d, %d, %d", c, b, a);
				}
			else
				if((a==c)&&(a!=b))
					{
						if(a<b)
							printf("%d, %d, %d", a, c, b);
						else
							printf("%d, %d, %d", b, a, c);
				}
			else
				if((b==c)&&(b!=a))
					{
						if(a<b)
							printf("%d, %d, %d", a, b, c);
						else	
							printf("%d, %d, %d", c, b, a);
					}
		}
	if ((a==b)&&(b==c))
		printf("%d, %d, %d", a, b, c);
	getch();
}
