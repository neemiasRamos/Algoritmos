
import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 * Classe para gerar objetos do tipo Socio que agrega seus dependentes por meio de um ArrayList
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 14/11/2017
 */
public class Socio {
    private int codigo;
    private String nome;
    private int idade;
    private boolean titular;
    ArrayList <Dependente> dependentes = new ArrayList();

    public Socio(int codigo, String nome, int idade, boolean titular) {
        this.codigo = codigo;
        this.nome = nome;
        this.idade = idade;
        this.titular = titular;
    }
    
    public Socio(){
        this.codigo = Integer.parseInt(JOptionPane.showInputDialog("Código: "));
        this.nome = JOptionPane.showInputDialog("Nome: ");
        this.idade = Integer.parseInt(JOptionPane.showInputDialog("Idade: "));
        this.titular = Boolean.parseBoolean("Titular: ");
    }
    
    //método para inserir um novo socio
    public void cadastrarNovoDependente(Dependente dep){
        dependentes.add(dep);//inserir dependente no arraylist "dependentes"
    }
    
    //metodo para listar todos os dependentes de um sócio
    public void listarDependentes(){
        for(int i = 0; i < dependentes.size(); i++){
            System.out.println("Dependente: "+dependentes.get(i).getNome());
        }
    }
    
    //método para excluir todos os dependentes de um socio
    public void excluirTodosDependentes(){
        dependentes.removeAll(dependentes);
        JOptionPane.showMessageDialog(null,"todos os dependentes de"+getNome()+" foram excluidos");
    }
    public boolean isTitular() {
        return titular;
    }

    public void setTitular(boolean titular) {
        this.titular = titular;
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
