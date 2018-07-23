#include<conio.h>
#include<stdio.h>

float celsius(float);

int main(){
    
    float c,f;
    printf("digite a temperatura em graus farenait \n");
    scanf("%f",&f);
    
    c=celsius(f);
    
    printf("celsius= %.2f\n",c);
    
getch();    
}

float celsius(float fahr){

  float c;

      c=(fahr-32.0)/1.8;      
return c;
}
