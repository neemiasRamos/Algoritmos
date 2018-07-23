/**
 * Classe criada para .....
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 04/04/2018
 */
public class Bicicleta extends Veiculo{
    String aro;
    boolean cestinha;
    int marchas;
    
    //construtor para gerar um objeto bicicleta
    public Bicicleta(String marca, String modelo, int anoFab, float preco, String aro, boolean cestinha, int marchas){
        super(marca, modelo, anoFab, preco);
        
        this.aro = aro;
        this.cestinha = cestinha;
        this.marchas = marchas;
    }

}//fim da classe
