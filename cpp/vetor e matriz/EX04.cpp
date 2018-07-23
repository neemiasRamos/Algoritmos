/*

  Author: Neemias Ramos Ferreira
  Date: 14/08/15 22:05
  Description: Criar 3 vetores A, B e C com 10 elementos do tipo real. 
  Entrar com os dados do vetor A e B. fazer o vetor C receber a soma de A + B. Exibir o vetor C. 
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float veta[3];
    float vetb[3];
    float vetc[3];
    int i;
   
    for(i=0;i<3;i++)
    {
            printf("numero%d = ",i);
			scanf("%f",&veta[i]);
			
    }

    puts("\n\n");

    for(i=0;i<3;i++)
    {
             printf("numero%d = ",i);
			scanf("%f",&vetb[i]);
    }

    for(i=0;i<3;i++)
    {
           vetc[i]=veta[i]+vetb[i];
           printf("\nsoma %.0f\n",vetc[i]);
           		
    }
    
    
     
    getch();
}
