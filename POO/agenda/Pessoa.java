/**
 * Classe criada para demonstrar a geração de objetos do tipo pessoa
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 02/04/2018
 *   ___________________
 *  |     PESSOA        |
 *  |-------------------|
 *  | String nome       |
 *  | int idade         |
 *  | float altura      |
 *  |-------------------|
 *  |Pessoa (S, i, f)   |--> metodo construtor (cria o objeto na memoria e não tem tipo de retorno)
 *  |exibirDadosPessoa()| --> metodo comun
 *  |___________________|
 */ 
public class Pessoa {
    
        String nome; //atributos
        int idade;
        float altura;
        
    //metodo construtor, responsavel por construir o objeto na memoria
    public Pessoa(String nome, int idade, float altura){ //parametros
        this.nome = nome;
        this.idade = idade;
        this.altura = altura;
    
    }//fim do construtor
    
    //metodo comum para exibir os dados de uma pessoa
    public void exibirDadosPessoa(){
        
        System.out.println("Nome: "+nome);
        //printf("idade: %d", idade);
        System.out.println("Idade: "+ idade +" anos");
        //printf("Altura: %.2f", altura);
        System.out.println("Altura: "+ altura +"m");
    }
}//fim da classe
