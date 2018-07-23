#include <stdio.h>
#include <stdlib.h>
#define max_aluno 500
/*
  Name: Trabalho com Struct
  Author: Neemias Ramos Ferreira
  Date: 15/09/15 01:15
  Description: 
*/

// Declarar struct do cadastro de aluno
struct c_aluno {
       char nome[50], semestre[20], curso[20];
       int idade;
};
// Declarar o vetor com 500 elementos
struct c_aluno aluno[max_aluno];
int i;
int n_aluno = 0;
// Função para cadastrar um novo aluno no vetor aluno
void cadastro_aluno(struct c_aluno alunos){
     aluno[n_aluno] = alunos;
     n_aluno ++;
}
// Função para gravar as informações do aluno novo.
struct c_aluno ler_dados(){
       struct c_aluno auxiliar;
       puts("CADSTRO DE ALUNO");
       printf("\n Nome.......: ");
       scanf("%s", &auxiliar.nome);
       printf("\n Idade......: ");
       scanf("%d", &auxiliar.idade);
       printf("\n Semestre...: ");
       scanf("%s", &auxiliar.semestre);
       printf("\n Curso......: ");
       scanf("%s", &auxiliar.curso);
       return auxiliar;
}
//Função para exibir todos os alunos cadastrados
void exibir_aluno(){
         puts("\n----------------------------------\n");
         puts("LISTA DE TODOS OS ALUNOS CADASTRADOS");          
     for (i = 0; i < n_aluno; i ++){
         printf("\nCodigo...: %d",i+1);
         printf("\nNome.....: %s", aluno[i].nome);
         printf("\nIdade....: %d", aluno[i].idade);
         printf("\nSemestre.: %s", aluno[i].semestre);
         printf("\nCurso....: %s", aluno[i].curso);
         puts("\n----------------------------------\n");
     }
}
//Função para consultar por idade
int consulta_idade(){
}    

//Função para exibir o menu
int menu(){
    int opcao;
    
    puts("\n---------------MENU---------------\n");
    printf("\n1 - CADASTRAR ALUNO");
    printf("\n2 - CONCULTAR ALUNO POR SEMESTRE");
    printf("\n3 - CONSULTAR ALUNO POR CURSO");
    printf("\n4 - CONSULTAR ALUNO PELA IDADE");
    printf("\n5 - EXIBIR TODOS OS ALUNOS CADASTRADOS");
    printf("\n6 - ALTERAR DADOS DO CADASTRO DO ALUNO");
    printf("\n0 - SAIR");
    printf("\n\n");
    puts("\nESCOLHA UMA OPCAO E DIGITE O NUMERO CORRESPONDENTE\n");
    scanf("%d", &opcao);
        
    return opcao;
}

//Função principal
int main()
{
    int opcao_selecionada;
    int rem = 0;
    struct c_aluno novo_aluno;
    int r;
    
    do {
        opcao_selecionada = menu();
        switch(opcao_selecionada){
                                  case 0: break;
                                  case 1: //cadastrar aluno
                                       if (n_aluno == 500){
                                                   printf("\n NUMERO MAXIMO DE CADASTROS ATINGIDO\n");
                                                   break;
                                                   }
                                       novo_aluno = ler_dados(); 
                                       cadastro_aluno(novo_aluno);
                                       break;
                                  case 2: //consultar por semestre
                                  case 3: //consultar por curso
                                  case 4: //consultar pela idade
                                  case 5: //exibir todos os alunos
                                       exibir_aluno();
                                       break;
                                  case 6: //alterar dados do cadastro
                                  default:
                                       printf("OPCAO INVALIDA");
                                  }
        }   
    while (opcao_selecionada != 0);
    return 0;
    system("PAUSE");                     
}
    
                  
       
       
