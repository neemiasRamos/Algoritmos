/**
 * Classe que herdará atributos e métodos da superClasse Animal e que sobrescreverá seus métodos.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Aguia extends Animal{
    float minVoo;
    
    //Construtor do objeto Aguia
    public Aguia(String especie, int idade, float minVoo){
        super(especie, idade);
        this.minVoo = minVoo;
    }
    
    //Método sobrescrito para exibir dados da Aguia
    public void exibirAnimal(){
        System.out.println("Esta "+especie+" voa por "+minVoo+" minutos");
    }
    
    //Método sobrescrito para alimentar a Aguia
    @Override
    public void alimentarAnimal(){
        System.out.println("A "+especie +" se alimenta de roedores");
    }
    
    //Método sbrescrito para tratar o animal
    @Override
    public void tratarAnimal(){
        System.out.println("A "+especie+" tem um habitat artificial muito bem elaborado");
    }
}//fim da classe
