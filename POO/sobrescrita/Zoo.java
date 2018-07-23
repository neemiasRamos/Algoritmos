/**
 * Classe para instãmciar objetos do tipo Animal e demonstrar a utilização do recurso de sobrescrita de métodos 
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 26/09/2017
 */
public class Zoo {
    public static void main(String[] args) {
        Leão leo = new Leão("Leão",5,"Marrom");
        leo.exibirAnimal();
        leo.alimentarAnimal();
        leo.tratarAnimal();
        
        System.out.println("===============================================");
        Macaco m = new Macaco("Macaco",3,"prego");
        m.exibirAnimal();
        m.alimentarAnimal();
        m.tratarAnimal();
        
        System.out.println("===============================================");
        Cobra celeste = new Cobra("Cobra",10,"não é venenosa");
        celeste.exibirAnimal();
        celeste.alimentarAnimal();
        celeste.tratarAnimal();
        
        System.out.println("===============================================");
        Girafa giovana = new Girafa("Girafa",19,2);
        giovana.exibirAnimal();
        giovana.alimentarAnimal();
        giovana.tratarAnimal();
        
        System.out.println("===============================================");
        Aguia jurema = new Aguia("Aguia",8,17);
        jurema.exibirAnimal();
        jurema.alimentarAnimal();
        jurema.tratarAnimal();
    }//fim do main
}//fim da classe
