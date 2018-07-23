/*
  Author: Neemias Ramos Ferreira
  Date: 
  Description: Construa um programa que leia uma matriz de 3x3, do tipo inteiro, e mostre os elementos pertencentes à diagonal principal.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <conio2.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int mat[3][3];
    int i,j;
    int l=5;
    int c=5;

      for(i=0;i<3;i++)
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
     c=20;
     l=5;
      for(i=0;i<3;i++)
      {
	  
        for(j=0;j<3;j++)
        {
            gotoxy(c,l);
             c=c+5;
            if(i==j)
             printf("%d",mat[i][j]); 
        }
    c=20;
    l=l+2;
 	 }
     
    getch();
}
