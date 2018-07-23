#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char palavra1[20], palavra2[20];
      printf("Digite uma palavra: ");
      gets(palavra1);
      printf("\nDigite outra palavra: ");
      gets(palavra2);
      if (strcmp(palavra1,palavra2) ==0)
         printf("As palavras sao iguais!");
      else
          printf("\nAs palavras são diferentes!");
      getch();
}
