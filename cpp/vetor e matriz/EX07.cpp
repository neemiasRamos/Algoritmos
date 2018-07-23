/*

  Author: Neemias Ramos Ferreira
  Date: 07/10/15 
  Description: Ler o vetor A de 10 elementos e mostrar o vetor B com a raiz quadrada do vetor A.
   Dica usar a biblioteca math.h com a função sqrt(). 
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int veta[10];
    int vetb[10];
    int i;
    
   puts("carregue o vetor A\n");
    for(i=0;i<10;i++)
    {
            printf("numero%d = ",i);
			scanf("%d",&veta[i]);
    }
     
    for(i=0;i<10;i++)
    {
            vetb[i] = sqrt(veta[i]);
            printf("a raiz quadrada do numero %d = %d\n",veta[i],vetb[i]);
    }
     
    
     
     
    getch();
}
