import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;
import javax.swing.JOptionPane;
 /**
 * Classe criada para demonstrar o uso de ArrayList, Try Cath, JOptionPane e laço de repetição.
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 24/06/2018
 *
 **/
public class Prova {
 
  public static void main(String[] args) {
    Scanner ler = new Scanner(System.in);
    String nT;
 
    ArrayList<String> agenda = new ArrayList();
 
    agenda.add("Manuela; (41) - 1351-6452");
    agenda.add("Marcos; (14) - 32552-2112");
    agenda.add("Antonieta; (63) - 3773-7653");
    agenda.add("Antônio; (44) - 5474-4904");
 
    int i;
    System.out.printf("Percorrendo o ArrayList (usando o índice)\n");
    int n = agenda.size();
    for (i=0; i<n; i++) {
      System.out.printf("Posição %d- %s\n", i, agenda.get(i));
    }
    
    nT = JOptionPane.showInputDialog("Digite a posição a ser excluida");
    i = Integer.parseInt(nT);
    
   try {
      
      agenda.remove(i);
    } catch (IndexOutOfBoundsException e) {
    
        JOptionPane.showMessageDialog(null,"Erro: Posição invalida "+e);
     }
    i = 0;
    for (String contato: agenda) {
    
        JOptionPane.showMessageDialog(null,"Posição :"+i+"  Nome: "+contato);
    
      i++;
    }
  }
}
