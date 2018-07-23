
/*
  Author: Neemias Ramos Ferreira
  Date: 07/10/15 22:31
  Description:Entre com 10 elementos em um vetor do tipo real e exiba esse vetor e ordem 
crescente. Utilize uma variável auxiliar. 
               
*/
#include<conio.h>
#include<stdio.h>

main()
{
	int i,vet[10];
	
	for(i=0;i<5;i++)
    {
			scanf("%d",&vet[i]);		
    }

			i=5;
			puts("imprimindo ao contrario\n");
			do{	
			printf("%d\n",vet[i]);
			i--;	
		   	}while(i>=0);
		   	
	getch();
}

