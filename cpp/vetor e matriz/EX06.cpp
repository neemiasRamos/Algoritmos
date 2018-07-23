/*

  Author: Neemias Ramos Ferreira
  Date: 07/10/15 
  Description: Ler os vetores A e B de 5 elementos cada. Criar um vetor C que será a junção de A e B. 
  O vetor C deverá ter o dobro de tamanho de A e B. Mostrar o vetor C. 
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int veta[5];
    int vetb[5];
    int vetc[10];
    int i=0;
  
   puts("caregue o vetor A \n");
    for(i=0;i<5;i++)
    {
            printf("numero%d = ",i);
			scanf("%d",&veta[i]);
			
    }
   
    puts("\ncaregue o vetor B \n");
     for(i=0;i<5;i++)
    {
            printf("numero%d = ",i);
			scanf("%d",&vetb[i]);
			
    }
    

    puts("\ncarregando o vetor C \n");
     for(i=0;i<5;i++)
    {
            printf("%d\n",veta[i]);
    }
    puts("\n");
     for(i=0;i<5;i++)
    {
            printf("%d\n",vetb[i]);
    }
    
  
    getch();
}
