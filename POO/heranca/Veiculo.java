/**
 * Classe criada para .....
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 04/04/2018
 * _____________________
 * |      VEICULO       |
 * |--------------------|
 * |String marca        |
 * |String modelo       |
 * |int anoFab          |
 * |float preco         |
 * |--------------------|
 * |Veiculo(S, S, i, f) |--->> método construtor
 * |exibirDadosVeiculo()|--->> metodo comum
 * |____________________|
 *         /_\
 *          |
 *          |_________________________________________-
 *          |
 *          |____________________
 *          |                         ________________________________
 *          |                         |           BICICLETA           |
 *          |_________________________|-------------------------------|
 *          |                         |int Aro                        |
 *          |                         |boolean cestinha               |
 *  ________|_____________________    |int marchas                    |
 *  |     CARRO                   |   |-------------------------------|
 *  |-----------------------------|   |Bicicleta(S, S, i, f, i, b, i) |
 *  |String placa                 |   |_______________________________|
 *  |String combustivel           |
 *  |boolean flex                 |         
 *  |float potencia               |
 *  |-----------------------------|
 *  |Carro(S, S, i, f, S, S, b, f)|
 *  |_____________________________|
 */
public class Veiculo {
    String marca;
    String modelo;
    int anoFab;
    float preco;
    
    //metodo construtor de objeto do tipo Veiculo
    // gera o objeto na memória
    public Veiculo(String marca, String modelo, int anoFab, float preco){
        this.marca = marca;
        this.modelo = modelo;
        this.anoFab = anoFab;
        this.preco = preco;
    }//fim do construtor
    
    //metodo comum para exibir dados de um veiculo
    public void exibirDadosVeiculo(){
        System.out.println("Marca: "+marca);
        System.out.println("Modelo: "+modelo);
        System.out.println("Ano de fabricação: "+anoFab);
        System.out.println("Preço: "+preco);
    }
}//fim da classe
