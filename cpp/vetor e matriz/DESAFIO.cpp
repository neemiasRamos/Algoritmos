/*
  Author: Neemias Ramos Ferreira 
  Date: 07/10/15
  Description: Uma locadora de v�deos tem guardada, em um vetor de 500 posi��es, a quantidade de filmes retirados por seus clientes durante o ano de 2011.
A locadora est� fazendo uma promo��o e, para cada 10 filmes retirados em 2011, o cliente tem direito a uma loca��o gr�tis. Fa�a um programa 
que crie um outro vetor contendo a quantidade de loca��es gratuitas a que cada cliente tem direito. Obs.: Cada posi��o do vetor est� relacionada 
a um cliente. Imprimir tamb�m o �ndice do cliente que recebeu o maior n�mero de loca��es. Caso exista mais de um cliente com o mesmo n�mero, imprimir todos.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vet[5];
    int i;
    int soma=0;
   
    for(i=0;i<5;i++)
    {
            printf("posicao %d = ",i);
			scanf("%d",&vet[i]);
			
    }
    for(i=0;i<5;i++)
    {
            if(vet[i]>=10)
            printf("\ncliente da posicao %d tem direito a 1 filme\n",i);
             if(vet[i]>=10*2)
            printf("\ncliente da posicao %d tem direito a 2 filme\n",i);
             if(vet[i]>=10*3)
            printf("\ncliente da posicao %d tem direito a 3 filme\n",i);
             if(vet[i]>=10*4)
            printf("\ncliente da posicao %d tem direito a 4 filme\n",i);
             if(vet[i]>=10*5)
            printf("\ncliente da posicao %d tem direito a 5 filme\n",i);
             if(vet[i]>=10*6)
            printf("\ncliente da posicao %d tem direito a 6 filme\n",i);
    }
     
    getch();
}
