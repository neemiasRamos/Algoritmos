/**
 * SuperClasse que determinará o comportamento de todo e qualquer tipo de Animal
 * com a extensão dos seus métodos
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Animal {
    String especie;
    int idade;
    
    //Construtor de animal
    public Animal(String especie, int idade){
        this.especie = especie;
        this.idade = idade;
    }//fim do construtor
    
    //Método para exibir os dados do animal
    public void exibirAnimal(){
        System.out.println(especie + " é um animal");
    }
    
    //Método para alimentar o animal
    public void alimentarAnimal(){
        System.out.println("O animal esta comendo");
    }
    
    //Método para exibir o tratamento dado ao animal
    public void tratarAnimal(){
        System.out.println("O animal esta sendo cuidado");
    }
    
    //Método para saber se o animal esta durmindo
    public void durmirAnimal(){
        System.out.println("O animal esta durmindo no momento");
    }
}//fim da classe
