/*
  Name: 
  Copyright: 
  Author: 
  Date: 31/08/15 21:25
  Description: 4-	Escreva um programa onde o usu�rio informa a data de nascimento (dia, m�s e ano) 
  e tamb�m a data atual (dia, m�s e ano). A partir dessas informa��es o
   calcular a idade exata do usu�rio (quantos anos ele tem na data informada como atual).
*/
#include <stdio.h>
#include <conio.h>

int lernum()
{
    int x;
    scanf("%d", &x);
    return x;
    
}
//*****************************************
int idade(int a, int b, int c,int d, int e, int f)
{
   if(e-b>0)
   {
       printf("sua idade exata = %d\n",f-c );   
    }
   if(e-b==0)
   {
        if(d-a>0)
        printf("sua idade exata = %d\n",(f-c)-1 ); 
        else
        printf("sua idade exata = %d\n",f-c );
   }
   else
    printf("sua idade exata = %d\n",(f-c)-1 ); 

    
}
//**************************************8

int main()
{
int a,b,c,d,e,f;


puts("digite a data de nascimento dd/mm/aaaa");
    a=lernum();//dia nasc
    b=lernum();//mes nasc
    c=lernum();//ano nasc
    printf("data = %d/%d/%d\n",a,b,c);
puts("\ndigite a data atual dd/mm/aaaa");
    d=lernum();//dia atual
    e=lernum();//mes atual
    f=lernum();//ano atual
    printf("data atual = %d/%d/%d\n",d,e,f);
    
idade(a,b,c,d,e,f);

getch();
}
