/*
  Name: 
  Copyright: 
  Author: 
  Date: 24/08/15 19:26
  Description: 2-	Criar um programa que calcule o fatorial de um número,
   usando uma função que receba um valor e retorne o fatorial desse valor.
*/
#include<conio.h>
#include<stdio.h>
//***************************
float fatorial(int num)
{
    int i, fat=1;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(i=num;i>0;i--)
		{
			fat=fat*num;
			num--;
			printf("\n%d", fat);
      
      }
      return fat;
    }
//***************************
main()
{
    int a;
    printf("%d",fatorial(a));
    
      
getch();      
}
