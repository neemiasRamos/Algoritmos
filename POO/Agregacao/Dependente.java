
import javax.swing.JOptionPane;

 
/**
 * Classe base para instanciar dependentes ligados a um sócio por meio do principio da agregação por composição.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 14/11/2017
 */
public class Dependente {
    int codigo;
    String nome;
    int idade;
    
    //metodo construtor

    public Dependente(int codigo, String nome, int idade) {
        this.codigo = codigo;
        this.nome = nome;
        this.idade = idade;
    }
    
    public Dependente(){
        this.codigo = Integer.parseInt(JOptionPane.showInputDialog("Código: "));
        this.nome = JOptionPane.showInputDialog(("Nome do dependente: "));
        this.idade = Integer.parseInt(JOptionPane.showInputDialog("Idade: "));
    }
    
    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }
    
}//fim da classe
