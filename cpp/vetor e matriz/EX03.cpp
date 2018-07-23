/*
  Author: Neemias Ramos Ferreira
  Date: 07/10/15
  Description: 
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int veta[10];
    int vetb[10];
    int i;
   
    for(i=0;i<10;i++)
    {
            printf("numero%d = ",i);
			scanf("%d",&veta[i]);
			
    }
    //****************
    puts("\n\n");
    //****************
    for(i=0;i<10;i++)
    {
            if(veta[i]%2==0)
            {
            vetb[i]=veta[i]+5;
            }
            else
            {
            vetb[i]=veta[i]*5;
            }
    }
    for(i=0;i<10;i++)
    {
            printf("valores = %d\n",vetb[i]);
			
    }
    
    
     
    getch();
}
