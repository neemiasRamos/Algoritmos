/**
 * Classe criada para .....
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 09/04/2018
 */
public class Figura {
    //int a, b, c, d; >> tipo primitivo
    Integer a, b, c, d; // >> Integer é uma classe
    //construtor de um ponto
    public Figura(int a ){
        this.a = a;
    }
    
    //construtor de uma linha
    public Figura(int a, int b){
        this.a = a;
        this.b = b;
    }
    
    //construtor de um quadrado
    public Figura(int a, int b, int c, int d){
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }
    
    //construtor de um triangulo
    public Figura(int a, int b, int c){
        this.a = a;
        this.b = b;
        this.c = c;
    }
       
    // a sobrecarga de um método é dada pela sua assinatura, ou seja: Tipo, quantidade e ordem dos parametros
       
    
    //metodo comum para identificar quais atributos das figuras estão preenchidas
    public void exibirFigura(){
        if(a != null && b == null && c == null && d == null)
            exibirFigura(true);
        else if(a != null && b != null && c == null && d == null)
            exibirFigura(0,"String");
        else if(a != null && b != null && c != null && d == null)
            exibirFigura("String",0,0);
        else //if(a != null && b != null && c != null && d != null)
            exibirFigura(0,true,"String",0);
    }

    //metodo comum para exibir um ponto
    public void exibirFigura(boolean x){
        System.out.println("é um ponto: "+ a);
    }
    
    //metodo comum para exibir uma linha
    public void exibirFigura(int x, String h){
        System.out.println("Linha de coordenadas"+ a + " e "+ b);
    }
    
    //metodo para exibir um quadrado
    public void exibirFigura(int e, boolean f, String g, int h){
        System.out.println("é um quadrado com os seguintes pontos: "+ a +", "+ b +", "+ c +", "+ d +", ");
    }
    
    //metodo para exibir um triangulo
    public void exibirFigura(String t, int r, int i){
        System.out.println("é um triangulo com os seguintes pontos: "+ a +", "+ b +", "+ c +", ");
    }
}//fim da classe
