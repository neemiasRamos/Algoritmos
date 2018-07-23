#include<stdio.h>
#include<conio.h>
#define n 10

//funcao para leitura do vetor
void le_vetor (int vetor[n])
{
     int i;
     for(i=0;i<n;i++)
     {
          printf("Vetor [%d]: ",i+1);
          scanf("%d", &vetor[i]);
     }
}
     
//funcao para exibir os elementos do vetor
void exibe_vetor(int vetor[n])
{
     int i;
     for(i=0;i<n;i++)
     printf("%d, ", vetor[i]);
}

//funcao para ordenar o vetor
void ordenar_vetor (int vet[n])
{
     int tam, i, aux;
     tam = n;
     do
     {
         for(i=0;i<tam-1;i++)
         if(vet[i] > vet[i+1])
         {
              aux = vet[i];
              vet[i] = vet[i+1];
              vet[i+1] = aux;
         }
         tam--;
     }
     while(tam>0);
}

//programa principal
main()
{
      int vet[n];
      le_vetor(vet);
      ordenar_vetor(vet);
      printf("\n\nVetor ordenado: ");
      exibe_vetor(vet);
      getch();
}
