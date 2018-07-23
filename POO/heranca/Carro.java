/**
 * Classe criada para gerar objeto do tipo Carro que é uma herança de Veiculo e por sua vez recebe TODOS os atributos e métodos da superclasse
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 04/04/2018
 */
public class Carro extends Veiculo{
    String placa;
    String combustivel;
    boolean flex;
    float potencia;
    
    //construtor para gerar um objeto carro na memoria
    public Carro(String marca, String modelo, int anoFab, float preco, String placa, String combustivel, boolean flex, float potencia){
        super(marca, modelo, anoFab, preco); //mandar para a superclasse oque é dela
        
        this.placa = placa;
        this.combustivel = combustivel;
        this.flex = flex;
        this.potencia = potencia;
    }
    
    //metodo comum para exibir os dados de um Carro
    public void exibirDadosCarro(){
        System.out.println("-----------------------------------");
        super.exibirDadosVeiculo();
        
        System.out.println("Placa: "+placa);
        System.out.println("Combustivel: "+combustivel);
        System.out.println("Flex ?"+flex);
        System.out.println("Potencia: "+potencia);
        System.out.println("//////////////////////////////////////");
    }
}//fim da classe
