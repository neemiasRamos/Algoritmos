/**
 * Classe que herdará atributos e métodos da superClasse Animal e que sobrescreverá seus métodos.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Girafa extends Animal{
    int altura;
    
    //Construtor do objeto do tipo girafa
    public Girafa(String especie, int idade, int altura){
        super(especie, idade);
        this.altura = altura;
    }
    
    //Método sobrescrito para exibir dados da Girafa
    public void exibirAnimal(){
        System.out.println("Essa "+especie+" tem "+altura+ " metros de altura");
    }
    
    //Método sobrescrito para alimentar a Girafa
    @Override
    public void alimentarAnimal(){
        System.out.println("Essa "+especie+" de "+altura+ " metros, come as folhas no alto das arvores");
    }
    
    //Método sbrescrito para tratar o animal
    @Override
    public void tratarAnimal(){
        System.out.println("A "+especie+" recebe quatro banhos por semana");
    }
}//fim da classe
