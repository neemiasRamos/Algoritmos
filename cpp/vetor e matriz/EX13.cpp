/*
  Author: Neemias Ramos Ferreira
  Date:
  Description:Escreva um programa que leia uma matriz de 3 x 5, do tipo inteiro, calcule e mostre a quantidade de elementos entre 15 e 20.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <conio2.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int mat[3][5];
    int i,j;
    int l=5;
    int c=5;

      for(i=0;i<3;i++)
      {
             for(j=0;j<5;j++)
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
      for(i=0;i<3;i++)
      {
	  
        for(j=0;j<5;j++)
        {
            gotoxy(c,l);
             c=c+5;
            if((mat[i][j]>=15)&&(mat[i][j]<=20))
             printf("%d",mat[i][j]); 
        }
    c=30;
    l=l+2;
 	 }
     
    getch();
}
