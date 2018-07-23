
package Matricula;

/**
 * Classe para
 * @author Neemias Ramos Ferreira
 * @since classe criada em 15/04/2016
 */
public class ResultMatricula {
    public static void main(String[] args) {
        OperacaoBanco ob = new OperacaoBanco();
        Matricula p = new Matricula();
        
        //p.setNomeal("Jehfão");
        //p.setCurso("Fisioterapia uii!");
        //ob.incluirMatricula(p);
        
        //p.setCodMatricula("2");
        //p.setCurso("Culinária");
        //p.setNomeal("Gabriel");
        //ob.alterarMatricula(p);
        
        
        p.setCodMatricula("4");
        ob.excluirMatricula(p);
        
        
    }

}//fim da classe
