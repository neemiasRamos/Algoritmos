/*
  Name: 
  Copyright: 
  Author: 
  Date: 03/09/15 18:11
  Description: 14-	Escreva um procedimento que receba como parâmetro dois valores numéricos e ao final de sua execução 
  troque os valores entre si. Por exemplo, suponhamos que primeiro parâmetro tenha recebido o valor 10 e o segundo parâmetro
   o valor 20, ao final da execução, a variável que representa o primeiro parâmetro deverá conter o valor 20 e a 
variável que representa o segundo parâmetro deverá conter o valor 10 (utiliza passagem de parâmetros por referência).
        
*/
#include<conio.h>
#include<stdio.h>
//*************************
int lernum()
{
    int x;
    scanf("%d", &x);
    return x;
    
}

//*************************
int idade(int a, int b)
{
  int aux;
   aux=a;
   a=b;
   b=aux;
   printf("ordem inversa é igual a: %d, %d\n",a,b);
 
}
//*************************

main()
{
    int a,b;
    puts("digite a dois valores\n");
    a=lernum();
    b=lernum();
    printf("a ordem digitada é igual a: %d, %d\n", a,b);
    idade(a,b);
    
      
getch();      
}
