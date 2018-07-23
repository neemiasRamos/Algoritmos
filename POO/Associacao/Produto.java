/**
 * Classe para gerar objetos do tipo Produto que serão adquiridos pelos clientes
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 07/11/2017
 */
public class Produto {
    int codigo;
    String descricao;
    float preco;

    public Produto(int codigo, String descricao, float preco) {
        this.codigo = codigo;
        this.descricao = descricao;
        this.preco = preco;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public float getPreco() {
        return preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }
    
}//fim da classe
