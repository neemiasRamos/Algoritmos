
import javax.swing.JOptionPane;

/**
 * Classe criada para .....
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 18/04/2018
 */
public class Conta {
    private int numConta;
    private float saldo;
    private String cliente;
    private String senha;

    //construtor da classe
    public Conta(int numConta, float saldo, String cliente, String senha){
        this.numConta = numConta;
        this.saldo = saldo;
        this.cliente = cliente;
        this.senha = senha;
    }
    
  
    //método para exibir os dados da conta do cliente
    public void exibirDadosContaCliente(){
        System.out.println("Conta: "+getNumConta());
        System.out.println("Cliente: "+getCliente());
        System.out.println("Saldo: "+getSaldo());
        
    }
    
    /* métodos assessores SET & GET
        todo método do tipo SET não tem retorno **TODO SET É VOID
            ex: public void setSaldo
       public void setSaldo(float saldo){
            this.saldo = saldo;
        }
        
        todo método do tipo GET é OBRIGADO a ter retorno
            ex: public float getSaldo(){
                    return saldo;
                } 
        
    */
    

    //metodo que permite realizar saque na conta do cliente
    private void sacar(float vlrSaque){
        
        setSaldo(getSaldo() - vlrSaque); // maneira profissional de fazer
        // saldo = saldo - vlrSaque; maneira amadora de fazer 
    }
    
    
    //metodo que permite realizar deposito na conta do cliente
    private void depositar(float vlrDeposito){
        
        setSaldo(getSaldo() + vlrDeposito);
        saldo = saldo + vlrDeposito;
    }

    //metodo para identificar a conta de um cliente
    public boolean identificarContaCliente(){
        int conta;
        conta = Integer.parseInt(JOptionPane.showInputDialog("Conta: "));
            if(conta == getNumConta())
                return true;
            else{
                JOptionPane.showMessageDialog(null, "Conta invalida");
                return false;
            }                
    }
    
    //metodo para realizar um saque na conta do cliente
    public void realizarSaque(){
        if(identificarContaCliente() == true){
            String pwd;
            pwd = JOptionPane.showInputDialog("Senha: ");
                if(pwd.equals(getSenha())){
                    float valor = Float.parseFloat(JOptionPane.showInputDialog("Valor do saque: "));
                    sacar(valor);
                }else
                    JOptionPane.showMessageDialog(null, "Senha invalida");
        }
        else
            JOptionPane.showMessageDialog(null, "Saque não realizado");
         

    }


    //métodos assessores SET & GET

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public String getCliente() {
        return cliente;
    }

    public void setCliente(String cliente) {
        this.cliente = cliente;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }
    
    
    
}//fim da classe
