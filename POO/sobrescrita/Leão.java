/**
 * Classe que herdará atributos e métodos da superClasse Animal e que sobrescreverá seus métodos.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Leão extends Animal{
    String corJuba;
    
    //Construtor do objeto Leão
    public Leão(String especie, int idade, String corJuba){
        super(especie, idade);//diz oque é da superclasse
        this.corJuba = corJuba;
    }
    
    //Método sobrescrito para exibir os dados do leão
    @Override
    public void exibirAnimal(){
        System.out.println("O "+especie+" possui "+idade+" anos e sua Juba é da cor "+corJuba); 
    }
    //Método sobrescrito para mostrar o alimento do leão
    @Override
    public void alimentarAnimal(){
        System.out.println("O "+especie+" só come carne fresca");
    }
    //Método sobrescrito para mostrar o tratamento do leão
    @Override
    public void tratarAnimal(){
        System.out.println("O "+especie+" esta tomando banho");
    }
}//fim da classe
