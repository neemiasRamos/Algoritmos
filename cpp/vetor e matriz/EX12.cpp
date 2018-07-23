/*
  Author: Neemias Ramos Ferreira
  Date:
  Description: Construa um programa que leia a matriz A e a matriz B de 3x2 cada uma delas. 
  A seguir mostre a matriz C como sendo a subtração das matrizes lidas. Dica: c[i][j] = a[i][j]- b[i][j]
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <conio2.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int mata[3][2];
    int matb[3][2];
    int matc[3][2];
    int i,j;
    int l=5;
    int c=5;
    int sub=0;
 
      for(i=0;i<3;i++)
      {
             for(j=0;j<2;j++)
                {                
                gotoxy(c,l);
                scanf("%d",&mata[i][j]);
                c=c+5;
                
                }
      c=5;
      l=l+2;
      }
 
gotoxy(15,7);
puts("-");
 
     c=20;
     l=5;
      for(i=0;i<3;i++)
      {
	  
        for(j=0;j<2;j++)
        {
            gotoxy(c,l);
             c=c+5;
            scanf("%d",&matb[i][j]);
        }
    c=20;
    l=l+2;
 	 }
 
gotoxy(30,7);
puts("=");
 
 c=35;
 l=5;
      for(i=0;i<3;i++)
      {
	  
        for(j=0;j<2;j++)
        {
            gotoxy(c,l);
             c=c+5;
            matc[i][j]=mata[i][j]-matb[i][j];
            printf("%d",matc[i][j]);
        }
    c=35;
    l=l+2;
 	 }
 
     
    getch();
}
