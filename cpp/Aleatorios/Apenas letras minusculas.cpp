#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* minusculo() */
/* Converte para minusculo se for maiusculo */
  
  unsigned char minusculo(unsigned char ch){

    if (ch >= 'A' && ch <= 'Z') /* se maiusculo? */
        return(ch + 'a'-'A'); /* Devolve convertido */
    else
        return(ch);
  }
  
int main(){

  unsigned char ch;

    ch=getche(); /* Lê um caracter */

    printf("\n%c\n", minusculo(ch));

    system("PAUSE");

return 0;
}
