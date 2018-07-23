/*

  Author: Neemias Ramos Ferreira
  Date: 07/10/15 
  Description: Criar um Vetor de 5 elementos do tipo inteiro, entrar com seus dados e informar quantos são Pares,
  quantos são Impares, a Soma dos Pares, a Soma dos Impares, 
  Soma Total, a Média dos Pares, a Média dos Impares e Média Geral. 
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
    int somaa=0;
    int somac=0;
    int somab=0;
    int somad=0;
    int soma=0;
   puts("carregue o vetor A\n");
    for(i=0;i<5;i++)
    {
            printf("numero%d = ",i);
			scanf("%d",&veta[i]);
    }
     
    puts("operacoes com o vetor A\n");
     
     for(i=0;i<5;i++)
    {
        if(veta[i]%2==0)
        {
            somaa=somaa+1;
            somac=somac+veta[i];
        }
        if(veta[i]%2!=0)
        {
            somab=somab+1;
            somad=somad+veta[i];
        }
        
    }
    printf("numero de pares=  %d\n",somaa);
    printf("numero de impares=%d\n\n",somab);
     
    printf("soma de pares=  %d\n",somac);
    printf("soma de impares=%d\n\n",somad);
     
     printf("soma total=  %d\n\n",somac+somad);
      
    printf("media dos pares=  %d\n",somac/somaa); 
     
    printf("media dos impares=  %d\n",somad/somab);
     
    printf("media de todos os numeros=  %d\n\n",(somac+somad)/5);
    getch();
}

