/*
  Name: 
  Copyright: 
  Author: 
  Date: 03/09/15 18:11
  Description: 14-	Escreva um procedimento que receba como par�metro dois valores num�ricos e ao final de sua execu��o 
  troque os valores entre si. Por exemplo, suponhamos que primeiro par�metro tenha recebido o valor 10 e o segundo par�metro
   o valor 20, ao final da execu��o, a vari�vel que representa o primeiro par�metro dever� conter o valor 20 e a 
vari�vel que representa o segundo par�metro dever� conter o valor 10 (utiliza passagem de par�metros por refer�ncia).
        
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
   printf("ordem inversa � igual a: %d, %d\n",a,b);
 
}
//*************************

main()
{
    int a,b;
    puts("digite a dois valores\n");
    a=lernum();
    b=lernum();
    printf("a ordem digitada � igual a: %d, %d\n", a,b);
    idade(a,b);
    
      
getch();      
}
