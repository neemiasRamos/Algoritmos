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
            printf("numero%d = ",i);
			scanf("%d",&vet[i]);
			soma=soma+vet[i];
    }
     printf("a media dos numeros digitados = %d ",soma/5);
    getch();
}
