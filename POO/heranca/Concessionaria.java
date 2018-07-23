/**
 * Classe criada para instanciar objetos do tipo carro/Bicicleta
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 04/04/2018
 */
public class Concessionaria {
    public static void main(String[] args) {
        Carro car = new Carro("Honda","CarroHon", 2014, 35500f,"BFC-2687","Alcool",true, 1.6f);
   //classe | variavel  | construtor(informações do construtor)
   
        Carro car2 = new Carro("Ford","CarroFor", 2011, 55500f,"BGC-5687","Alcool",false, 1.8f);
        
        car.exibirDadosCarro();
        car2.exibirDadosCarro();
    }//fim do main
}//fim da classe
