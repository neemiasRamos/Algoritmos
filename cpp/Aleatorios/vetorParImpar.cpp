
/*
	Name: VetorParImpar.cpp
	Author: Neemias Ramos Ferreira
	Date: 07/04/15 19:45
	Description: Engendre um programa que leia 15 números inteiros, separe-os em dois vetores
				  (PAR e IMPAR) e desenvolva o seguinte raciocínio:
					-Calcule a média aritmética do vetor IMPAR
					-Imprima o vetor par em ordem inversa.
					-Crie um vetor chamado MERGE que insira intercaladamente um
					elemento do vetor PAR e outro do vetor IMPAR.
					-Ao final imprima todos os vetores.
*/

#include <stdio.h>
#include <conio.h>

int main(){
	int vet[15],vetPar[15],vetImpar[15],merge[15],index,quoc,resto;
	
	int contPar = 0,contImpar = 0;
	
	float mediaImpar = 0;
	
	puts("Entre com os valores:");
	for(int i = 0;i<=15;
    i++){
		scanf("%d",&vet[i]);
	}
	
	for(int i = 0;i<=15;i++){
		quoc=vet[i]/2;
		resto = vet[i]-(quoc*2);
		
		if(resto == 0)		{
			vetPar[contPar]=vet[i];
			contPar++;
		}else
		{
			vetImpar[contImpar]=vet[i];
			contImpar++;
		}	
	}
	
	for(int i = 0;i<contImpar;i++){
		mediaImpar = mediaImpar + vetImpar[i];
	}
	
	mediaImpar = mediaImpar/contImpar;
	
	printf("\nMedia do vetor impar : %.2f",mediaImpar);
	
	puts("\nVetor PaR inverso:\n");
	for(int i = contPar; i > 0;i--){
		if(i == 1){		
			printf("%d",vetPar[i-1]);
		}
		else{
			printf("%d, ",vetPar[i-1]);
		}
	}
	
	//merge
	int indexPar=0, indexImpar=0,i = 0;
	while(i <=15){
		
		if(indexPar<contPar){
			merge[i] = vetPar[indexPar];
			i++;
			indexPar++;
		}
		if(indexImpar<contImpar){
			merge[i] = vetImpar[indexImpar];
			i++;
			indexImpar++;
		}
			
	}
	
	puts("\n\nVetor original : \n");
	for(int i = 0; i <=15;i++){
		if(i == 15) 
			printf("%d",vet[i]);
		else
			printf("%d, ",vet[i]);
	}
	
	puts("\n\nVetor PAR : \n");
	for(int i = 0; i <contPar;i++){
		if(i == (contPar-1)) 
			printf("%d",vetPar[i]);
		else
			printf("%d, ",vetPar[i]);
	}
	
	puts("\n\nVetor IMPAR : \n");
	for(int i = 0; i <contImpar;i++){
		if(i == (contImpar-1)) 
			printf("%d",vetImpar[i]);
		else
			printf("%d, ",vetImpar[i]);
	}
	
	puts("\n\nVetor MERGE : \n");
	for(int i = 0; i <=15;i++){
		if(i == 15) 
			printf("%d",merge[i]);
		else
			printf("%d, ",merge[i]);
	}
		
	getch ();
}
