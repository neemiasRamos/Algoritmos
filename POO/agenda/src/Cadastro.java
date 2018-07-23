/**
 * Classe criada para instanciar objetos do tipo Pessoa
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 02/04/2018
 */
public class Cadastro {
    public static void main(String args[]){
        Pessoa p; //variavel de referencia p
        Pessoa p2;
        
        p = new Pessoa("neemias",24,(float)1.71);
        p.exibirDadosPessoa();
        
        p2 = new Pessoa("Sr. Silva",45,(float)1.68);
        p2.exibirDadosPessoa();
    }// fim do main
    
}//fim da classe
