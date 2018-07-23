// Calcula a area da esfera

#include <stdio.h>
#include <stdlib.h>

const float PI=3.14159;

    float area(float r){
    
      return(4 * PI * r * r);
}

    int main(){
    
      float raio;
        
        printf("Digite o raio da esfera: ");
          scanf("%f", &raio);

        printf("A area da esfera é %.2f\n",area(raio));

  system("PAUSE");

return 0;
}
