package trabalho1;

import javax.swing.JOptionPane;

/**
 * Classe java para demonstrar o uso de Try Catch e ArrayList
 * @author Neemias Ramos Ferreira
 * @since 27/05/2018
 */
public class Trabalho1 {
  public static void main(String[] args) {
      String entrada = JOptionPane.showInputDialog("digite o numero");
        try{
        int vl = Integer.parseInt(entrada); 
        int[] tab= new int[11];
        if(vl <= 10){
            for(int i = 1; i<tab.length;i++){
                tab[i] = i;
            JOptionPane.showMessageDialog(null, vl+"x" + i+"="+ (vl*tab[i]));
            }
        }else{
            JOptionPane.showMessageDialog(null,"Esta fora do intervalo");
        }        
        }catch(NumberFormatException erro){
          JOptionPane.showMessageDialog(null,"Você não digitou um numero");
          //System.out.println("Digite apenas numeros");
      }
        
    }
    
}
