/**
 * Classe que herdará atributos e métodos da superClasse Animal e que sobrescreverá seus métodos.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Cobra extends Animal{
    String veneno;
    
    //Construtor do objeto cobra
    public Cobra(String especie, int idade, String veneno){
        super(especie, idade);
        this.veneno = veneno;
    }
    
    //Método sobrescrito para exibir dados da cobra
    public void exibirAnimal(){
        System.out.println("Essa "+especie+" "+veneno);
    }
    
    //Método sobrescrito para alimentar a cobra
    @Override
    public void alimentarAnimal(){
        System.out.println("A "+especie +" esta digerindo uma cabra");
    }
    
    //Método sbrescrito para tratar o animal
    @Override
    public void tratarAnimal(){
        System.out.println("Essa "+especie+" troca de pele a cada 9 meses");
    }
}//fim da classe
