/**
 * Classe principal que instancia diversos clientes e produtos
 * fazendo a associação entre eles.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 07/11/2017
 */
public class Vendas {
    public static void main(String[] args) {
        Produto p1, p2, p3, p4, p5, p6, p7;
        p1 = new Produto(111221,"Macarrão", 2.75f);
        p2 = new Produto(111243,"Sabão em pó", 12.75f);
        p3 = new Produto(111651,"Vassoura", 45.50f);
        p4 = new Produto(111221,"Abridor de garrafa", 1.5f);
        p5 = new Produto(187221,"Chocolate", 6.30f);
        p6 = new Produto(133221,"Arroz", 16.45f);
        p7 = new Produto(109221,"Desinfetante", 8.55f);
        
        Cliente c1, c2, c3;
        c1 = new Cliente(54321,"Roberlei Carlos");
        c1 = new Cliente(90341,"Jurema da Costa");
        c1 = new Cliente(54321,"Joselito");
        
        //associando produtos aos clientes (vendas)
        c1.inserirProduto(p7);
        c1.inserirProduto(p2);
        c1.inserirProduto(p4);
        c1.deletarProdutos(p7);
        c1.excluirProdutoCodigo(109221);
        c1.listarProdutos();
        
        
    
    }//fim do main
}//fim da classe
