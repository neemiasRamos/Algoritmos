
import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 * Classe para gerar diversos sócios por meio de uma ArrayList 
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 14/11/2017
 */
public class Clube {
    private String razaoSocial;
    ArrayList<Socio> socios = new ArrayList();
    
    public Clube(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }
    
    //método para inserir um novo sócio ao quadro de associados
    public void cadastrarNovoSocio(){
        Socio socio = new Socio();
        socios.add(socio);
        String resp; 
        while(true){
        resp = JOptionPane.showInputDialog("cadastrar novo dependente");
        if(resp.equals("sim")){
            socio.cadastrarNovoDependente(new Dependente());
        }else
            break;
        }
    }
    
    public void listarTodosSocios(){
        for(int i = 0; i < socios.size(); i++){
            System.out.println(socios.get(i).getNome());
            socios.get(i).listarDependentes();
        }
    }
    
    public void mostrarDadosSocio(Socio socio){
        System.out.println("Codigo: "+socio.getCodigo());
        System.out.println("Socio: "+socio.getNome());
        System.out.println("Idade: "+socio.getIdade());
        System.out.println("Titular: "+(socio.isTitular()?"Sim":"Não"));
    }
    
    
    //método para excluir sócio
    public void excluirSocio(){
        int codigo;
        codigo = Integer.parseInt(JOptionPane.showInputDialog("Código do sócio a excluir"));
        for(int i = 0; i < socios.size(); i ++){
            if(socios.get(i).getCodigo() == codigo){
                socios.get(i).excluirTodosDependentes();
                JOptionPane.showMessageDialog(null,socios.get(i).getNome()+" foi removido");
                socios.remove(i);
            
            }
        }
    }
    //metod para alterar os dados de um socio
    public void alterarDadosSocio(){
        int codigo;
            codigo = Integer.parseInt(JOptionPane.showInputDialog("Código do sócio a excluir"));
            for(int i = 0; i < socios.size(); i ++){
                if(socios.get(i).getCodigo() == codigo){
                   mostrarDadosSocio(socios.get(i));
                    String nome = JOptionPane.showInputDialog(null,"Novo nome do sócio", socios.get(i).getNome());
                    
                    socios.get(i).setNome(nome);
                    
                    
                }
            }
    }
            
    public String getRazaoSocial() {
        return razaoSocial;
    }

    public void setRazaoSocial(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }
    
    
}//fim da classe
