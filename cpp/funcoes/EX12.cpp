/*
  Author: Neemias Ramos Ferreira
  Date: 02/09/15 21:34
  Description: Escreva uma função para retornar o dia da semana atual por extenso.
  
*/
#include<conio.h>
#include<stdio.h>
int lernum()
{
    int x;
    scanf("%d", &x);
    return x;
    
}

int idade(int a, int b, int c)
{
   int ano, d,e,f;
   int result;
   ano=c-1900;
   d=ano/4;
   e=5;
   f=a-1;
   
   result=ano+d+e+f;// soma de tudo
   
   if(result%7==0)
      puts("segunda-feira");
   if(result%7==1)
      puts("terca-feira");
   if(result%7==2)
      puts("quarta-feira");
   if(result%7==3)
      puts("quinta-feira");
   if(result%7==4)
      puts("sexta-feira");
   if(result%7==5)
      puts("sabado-feira");
   if(result%7==6)
      puts("domingo-feira");
}

main()
{
    int a,b,c;
    puts("digite a data atual como no exemplo dd/mm/aaaa");
    a=lernum();
    b=lernum();
    c=lernum();
    
      idade(a,b,c);
getch();      
}
