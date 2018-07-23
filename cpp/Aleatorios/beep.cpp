// Testa a função doisbeep 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void doisbeep(void);
  int main(){

  doisbeep();
    
    printf("digite um caractere: ");
    getche();

  doisbeep();

  system("PAUSE");
return 0;
}

// doisbeep() 
// Toca o auto-falante duas vezes 

void doisbeep(){

  int k;

    printf("\x7");

      for(k=1;k<5000;k++);
        printf("\x7");
}
