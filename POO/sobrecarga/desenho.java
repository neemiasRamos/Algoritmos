/**
 * Classe criada para instanciar objetos do tipo figura e demonstrar o recurso da sobrecarga de métodos
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 09/04/2018
 */
public class Desenho {
    
    public static void main(String[] args) {
        
        Figura ponto = new Figura(500);
        Figura linha = new Figura(15, 65);
        Figura quadrado = new Figura(15,15,15,15);
        Figura triangulo = new Figura(20,20,20);
        
        ponto.exibirFigura(true);
        linha.exibirFigura(20,"String");
        quadrado.exibirFigura(10, true, "string", 10);
        triangulo.exibirFigura("string", 0, 0);
        
    }//fim do main
    
}//fim da classe
