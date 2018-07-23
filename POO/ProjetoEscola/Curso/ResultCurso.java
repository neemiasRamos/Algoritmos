
package Curso;

/**
 * Classe para
 * @author Neemias Ramos Ferreira
 * @since classe criada em 15/04/2016
 */
public class ResultCurso {
    public static void main(String[] args) {
        OperacaoBanco ob = new OperacaoBanco();
        Curso p = new Curso();
        
        p.setCodcurso("5");
        p.setDescricao("Tecnologia da Informação");
        ob.alterarCurso(p);
        
        //p.setDescricao("Análise de Sistemas");
        //ob.incluirCurso(p);
        
        //p.setCodcurso("1");
        //ob.excluirCurso(p);
    }

}//fim da classe
