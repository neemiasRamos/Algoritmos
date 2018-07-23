/*
  Author: Neemias Ramos Ferreira
  Date: 27/03/15 
  Description: programa com vetores para armazenar dados de 10 pessoas(idade, altura, peso) e calcular as médias separadas para homens e mulheres.
  Encontrar a pessoa mais velha, a mais obesa e a mais alta e o maior e menor IMC.
*/

#include <conio.h>
#include <stdio.h>

main ()
{
     int idade[10],i,homem=0,mulher=0,somaidadeh=0,somaidadem=0,maisvelho=-1,indmaisvelho,indmaisobeso,indmaisalta,indmaiorimc,indmenorimc;
     float alt[10],peso[10],somaalth=0,somaaltm=0,somapesoh=0,somapesom=0,maisobeso=0,maisalta=0,imc,maiorimc=0,menorimc=200;
     char sexo[10];
     
     for(i=0;i<5;i++) //armazenar informações
     {
     printf("Digite seu sexo(m/f): "); scanf(" %c", &sexo[i]);
     printf("Digite sua idade: "); scanf(" %d", &idade[i]);
     printf("Digite sua altura: "); scanf(" %f", &alt[i]);
     printf("Digite seu peso: "); scanf(" %f", &peso[i]);
     }
     puts("\nVetores carregados!");
     puts("Vetor de sexo:");
     i=0;
     while (i<5)
     {
           printf("%c, ",sexo[i]);
           i++;
     }
     i=0;
     puts("\n\nVetor de idade:");
     while (i<5)
     {
         printf(" %d,",idade[i]);
         i++;
     }
     i=0;
     puts("\n\nVetor de altura:");
     while (i<5)
     {
           printf("%.2f, ",alt[i]);
           i++;
     }
     i=0;
     puts("\n\nVetor de peso:");
     while (i<5)
     {
           printf("%.2f, ",peso[i]);
           i++;
     }
     i=0;
     while (i<5)
     {
           if ((sexo[i]=='m') || (sexo[i]=='M'))
           homem++;
           else
           mulher++;
           i++;
     }
     printf("\n\nQuantidade de homens e mulheres, respectivamente: %d e %d",homem,mulher);
     i=-1;
     while (i<4) //médias
     {
           i++;
           if ((sexo[i]=='m') || (sexo[i]=='M'))
           {
           somaidadeh=somaidadeh+idade[i];
           somaalth=somaalth+alt[i];
           somapesoh=somapesoh+peso[i];
           }
           else
           {
           somaidadem=somaidadem+idade[i];
           somaaltm=somaaltm+alt[i];
           somapesom=somapesom+peso[i];
           }
     }
           printf("\n\nA media da idade dos homens e: %d",somaidadeh/homem);
           printf("\nA media da idade das mulheres e: %d",somaidadem/mulher);
           printf("\nA media da altura dos homens e: %.2f",somaalth/homem);
           printf("\nA media da altura das mulheres e: %.2f",somaaltm/mulher);
           printf("\nA media do peso dos homens e: %.2f",somapesoh/homem);
           printf("\nA media dao peso das mulheres e: %.2f",somapesom/mulher);
           i=-1;
           while (i<4) //pessoa mais velha
           {
           	i++;
            	if (idade[i] > maisvelho)
                {
                	maisvelho=idade[i];
                    indmaisvelho=i+1;
                }
           }
           i=-1;
           while (i<4) //pessoa mais obesa
           {
           	i++;
           	if (peso[i] > maisobeso)
           	{
           		maisobeso=peso[i];
           		indmaisobeso=i+1;
           	}
           }
           i=-1;
           while (i<4) //mais alta
           {
           	i++;
           	if (alt[i] > maisalta)
           	{
           		maisalta=alt[i];
           		indmaisalta=i+1;
           	}
           }
           i=-1;
           while (i<4) //maior imc
           {
           	i++;
           	imc=peso[i]/(alt[i]*alt[i]);
           	if (imc > maiorimc)
           	{
           		maiorimc=imc;
           		indmaiorimc=i+1;
           	}
           }
           i=-1;
           while (i<4) //menor imc
           {
           	i++;
           	imc=peso[i]/(alt[i]*alt[i]);
           	if (imc < menorimc)
           	{
           		menorimc=imc;
           		indmenorimc=i+1;
           	}
       	   }
           printf("\n\nA pessoa mais velha e a %da, com %.0d anos.",indmaisvelho,maisvelho);
           printf("\nA pessoa mais obesa e a %da, com %.2f kg.",indmaisobeso,maisobeso);
           printf("\nA pessoa mais alta e a %da, com %.2f de altura.",indmaisalta,maisalta);
           printf("\nA pessoa com maior IMC e a %da, com %.3f de IMC.",indmaiorimc,maiorimc);
           printf("\nA pessoa com menor IMC e a %da, com %.3f de IMC.",indmenorimc,menorimc);
 
     getch ();
}
