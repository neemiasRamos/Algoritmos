/*
  Author: Neemias Ramos Ferreira
  Date:
  Description: Faça um programa que leia uma matriz de 4x3, do tipo real, e mostre o somatório entre seus elementos.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <conio2.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int mat[4][3];
    int i,j;
    int l=5;
    int c=5;
    int soma=0;

      for(i=0;i<4;i++)
      {
             for(j=0;j<3;j++)
                {                
                gotoxy(c,l);
                scanf("%d",&mat[i][j]);
                c=c+5;
                
                }
      c=5;
      l=l+2;
      }
 //mostrar elementos da diagonal principal
     c=30;
     l=5;
      for(i=0;i<4;i++)
      {
	  
        for(j=0;j<3;j++)
        {
            gotoxy(c,l);
             c=c+5;
            soma=soma+mat[i][j]; 
        }
    c=20;
    l=l+2;
 	 }
     gotoxy (5,20);
     printf("soma dos elementos = %d",soma); 
    getch();
}
