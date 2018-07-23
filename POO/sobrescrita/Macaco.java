/**
 * Classe filha que herda atributos e métodos da superClasse Animal, todos os seu métodos serão sobrescritos
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Macaco extends Animal {
    String raça;
    
    //Construtor do objeto macaco
    public Macaco(String especie, int idade, String raça){
        super(especie, idade);
        this.raça = raça;
    }
    //Método sobrescrito para exibir os dados do macaco
    @Override
    public void exibirAnimal(){
        System.out.println("Macaco "+raça+ " é uma especie de "+especie);
    }
    
    //Método sobrescrito para alimentar o macaco
    @Override
    public void alimentarAnimal(){
        System.out.println(especie +" "+ raça+" come banana ");
    }
    
    //Método sbrescrito para tratar o animal
    @Override
    public void tratarAnimal(){
        System.out.println("O "+especie+" "+raça+" toma banho duas vezes por semana");
    }
}//fim da classe
