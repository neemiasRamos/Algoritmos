/*
  Name: deltacomfuncao.cpp
  Author: Neemias Ramos Ferreira
  Date: 07/06/15 11:04
  Description: calcular delta
*/
#include<stdio.h>
#include<conio.h>
int lernum();
//prototipacao
int ordemc(int , int, int);
int ordemd(int , int, int);

//funcao principal
main()
{
    int a,b,c;
    a=lernum();
    b=lernum();
    c=lernum();
   
   puts("\n\n");
   ordemc(a,b,c);
   puts("\n\n");
   ordemd(a,b,c);
    
    getch();
}

int lernum()
{
 int x;
 printf("digite o valor");
 scanf("%d",&x);
 return x;
}

int ordemc(int a, int b, int c)
{
   
  if((a<b)&&(a<c)&&(b<c)){
      printf("%d %d %d",a,b,c);
  }
  
  if((a<b)&&(a<c)&&(c<b)){
      printf("%d %d %d",a,c,b);
  }
  
  if((b<a)&&(b<c)&&(a<c)){
      printf("%d %d %d",b,a,c);
  }
  
  if((b<a)&&(b<c)&&(c<a)){
      printf("%d %d %d",b,c,a);
  }
  
  if((c<a)&&(c<b)&&(a<b)){
      printf("%d %d %d",c,a,b);
  }
  
  if((c<a)&&(c<b)&&(b<a)){
      printf("%d %d %d",c,b,a);
  } 
}

int ordemd(int a, int b, int c)
{
   
  if((a>b)&&(a>c)&&(b>c)){
   printf("%d %d %d",a,b,c);
  }
  
  if((a>b)&&(a>c)&&(c>b)){
   printf("%d %d %d",a,c,b);
  } 
    
  if((b>a)&&(b>c)&&(a>c)){
   printf("%d %d %d",b,a,c);
  }
  
  if((b>a)&&(b>c)&&(c>a)){
   printf("%d %d %d",b,c,a);
  } 
   
  if((c>a)&&(c>b)&&(a>b)){
   printf("%d %d %d",c,a,b);
  }
  
  if((c>a)&&(c>b)&&(b>a)){
   printf("%d %d %d",c,b,a);
  } 
}


