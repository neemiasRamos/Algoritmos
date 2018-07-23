
import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 * Classe para gerar objetos do tipo Cliente
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 07/11/2017
 */
public class Cliente {

    int codCliente;
    String nome;
    ArrayList <Produto> produtos = new ArrayList();
    ArrayList <Produto> disponiveis = new ArrayList();
    public Cliente(int codCliente, String nome) {
        this.codCliente = codCliente;
        this.nome = nome;
    }
    
    //método para aramazenar um produto que o cliente comprou - CREATE
    public void inserirProduto(Produto p){
        produtos.add(p);
        JOptionPane.showMessageDialog(null, nome + " Comprou "+p.getDescricao());
    }
    
    //método para listar o conteúdo do array de produtos comprados pelo cliente - READ
    public void listarProdutos(){
        System.out.println("");    
             
    }
    
    //método para exibir a lista de compras
    public void listarProdutosComprados(){
        System.out.println("Compras de "+ nome +"\n");
        for(int i = 0; i < produtos.size(); i++ )
            System.out.println(produtos.get(i).getDescricao() + "\t" + produtos.get(i).getPreco());
    }
    
    //métdodo para excluir objeto do Array - DELETE
    public void deletarProdutos(Produto p){
        produtos.remove(p);
    }
    
    public void criarArrayProdutos(){
        Produto p1, p2, p3, p4, p5, p6, p7;
        p1 = new Produto(111221,"Macarrão", 2.75f);
        p2 = new Produto(111243,"Sabão em pó", 12.75f);
        p3 = new Produto(111651,"Vassoura", 45.50f);
        p4 = new Produto(111221,"Abridor de garrafa", 1.5f);
        p5 = new Produto(187221,"Chocolate", 6.30f);
        p6 = new Produto(133221,"Arroz", 16.45f);
        p7 = new Produto(109221,"Desinfetante", 8.55f);
        disponiveis.add(p1);
        disponiveis.add(p2);
        disponiveis.add(p3);
        disponiveis.add(p4);
        disponiveis.add(p5);
        disponiveis.add(p6);
        disponiveis.add(p7);
    }
    
    //método para realizar venda de produtos solicitando o codigo e quantidade
    public void realizarVenda(){
        int codProduto, qtd;
        produtos.add(disponiveis.get(i));
    }
    
    
    //método para excluir produto buscando pelo código
    public void excluirProdutoCodigo(int cod){
        boolean flag = false;
        for(int i = 0; i < produtos.size(); i++){
            if(produtos.get(i).getCodigo() == cod){
                produtos.remove(i);
                flag = true;
            }
            else{
                flag = false;
            }
            if(flag == false)
                JOptionPane.showMessageDialog(null,"Produto não localiado - código invalido");
        }   
    }
}//fim da classe
