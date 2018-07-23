/*
  Author: Neemias Ramos Ferreira
  Date:
  Date: 16/08/15 15:42
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
    int somaa=0;
    int somab=0;
    int somac=0;

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
  
     
      for(i=0;i<3;i++)
      {
	  
        for(j=0;j<3;j++)
        {
            if(mat[i][j]%2==0)
             somaa=somaa+1;
        }
    
 	 }
 
      for(i=0;i<3;i++)
      {
	  
        for(j=0;j<3;j++)
        {
            if(mat[i][j]%2!=0)
             somab=somab+1;
        }
    
 	 }
 
    for(i=0;i<3;i++)
      {
	  
        for(j=0;j<3;j++)
        {
            if(mat[i][j]>30)
             somac=somac+mat[i][j];
        }
    
 	 }
 
 	 printf("\nnumeros de pares = %d",somaa);
 	 printf("\nnumeros de impares = %d",somab);
 	 printf("\nsomatorio dos numeros maiores que 30 = %d",somac);
     
    getch();
}
