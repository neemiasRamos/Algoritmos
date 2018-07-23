/*
	Author: Neemias Ramos Ferreira
	Description: Verifica se a palavra digitada pelo usuário é ou não palindroma
*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main(){
       setlocale(LC_ALL, "Portuguese"); 
       char string[20], repete;
       int fim, ini, tam, epali=1;

      printf("\n**********************************");
      printf("\n    EXERCICIO DE PALINDROMO       ");
      printf("\n**********************************");
      
      while(repete != 'S' && repete != 's') {
	  
	   system("cls"); // Limpa a Tela
	   epali=1;		  // reseta variavel
	   
	   printf("Informe uma palavra para verificar se é palindroma: ");
       scanf("%s", &string);
// Mesma função do scanf *verificar
//	   gets(string);
       
       //Captura o tamanho da palavra (método Lenght)
       for (tam=0; string[tam] != '\0'; tam++);
       
       /*
	    Varre a String comparando simultaneamente caracter a caracter (ini-fim) num 
	    movimento para dentro, comparando-os.
	    	Ex: [P][a][u][l][o] >> (P,o)(a,l)(u) 
		*/
       for (ini=0, fim=tam-1; fim>0 && string[ini] != '\0'; ini++, fim--){
           
		   if (string[fim] != string[ini])
              epali=0; //Se alguma na ordem não for igual ele sai do laço
              break;
       }
       
       if (epali) printf("palavra É palíndroma.");
       else 
	   	  printf("palavra NÃO É palíndroma.");
          
        // Pergunta se quer repetir o processo
		printf("\n\n Deseja Finalizar a Aplicação (S/N)?");
        scanf("%s", &repete);
}	     

	     getch;
      
}
