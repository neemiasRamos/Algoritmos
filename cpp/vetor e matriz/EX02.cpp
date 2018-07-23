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
    int veta[5];
    int vetb[5];
    int i;
    int soma=0;
   
    for(i=0;i<5;i++)
    {
            printf("numero%d = ",i);
			scanf("%d",&veta[i]);
			
    }
    puts("\n\n");
    for(i=0;i<5;i++)
    {
            vetb[i]=veta[i]*2;
			printf("numero =%d \n",vetb[i]);
    }
     puts("\n\n");
    for(i=0;i<5;i++)
    {
          
			printf("numero =%d \n",vetb[i]);
    }
    
     
    getch();
}

