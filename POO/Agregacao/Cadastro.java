/**
 * Classe principal que permite o cadastro dos seus sócios e seus dependentes
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 14/11/2017
 */
public class Cadastro {
    public static void main(String[] args) {
        Clube clube = new Clube("Sesi");
        
        clube.cadastrarNovoSocio();
        clube.listarTodosSocios();
        clube.excluirSocio();
        clube.listarTodosSocios();
    }//fim do main
}//fim da classe
