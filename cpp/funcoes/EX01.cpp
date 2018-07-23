/*
  Author: Neemias Ramos Ferreira
  Date: 18/09/15 19:59
  Description: 
*/

#include <stdio.h>
#include <conio.h>

float operacao(int x, int y)
{
      int num;
  printf("Digite o primeiro valor: ");
  scanf("%d", &x);

  printf("Digite o segundo valor: ");
  scanf("%d", &y);

  puts("\no que deseja fazer com esses numeros\n");
  puts("\n\n\npara mutiplicacao digite 1\n");
  puts("para adicao digite 2\n");
  puts("para subtracao digite 3\n");
  puts("para divisao digite 4\n");
  scanf("%d",&num);

  if (num==1)
    return x*y;

  if (num==2)
    return x+y;
  
  if (num==3)
    return x-y;

  if (num==4)
    return x/y;
}

int main(){

  int a,b;
  
  printf("o resultado da operacao = %.0f\n",operacao(a,b));

getch();
}
