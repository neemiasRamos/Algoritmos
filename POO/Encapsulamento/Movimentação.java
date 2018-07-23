/**
 * Classe criada para gerar diversos tipos de movimentações na conta corrente de um cliente
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 18/04/2018
 */
public class Movimentação {
    public static void main(String[] args) {
        Conta cc = new Conta(1040,500,"Neemias","123");
        cc.realizarSaque();
        cc.exibirDadosContaCliente();
        
    }
}//fim da classe
