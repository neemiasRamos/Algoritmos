
import java.awt.Color;
import javax.swing.JFrame;
import javax.swing.JPanel;

/**
 * Classe para gerar processos que irão se comportar como uma Thread (uma liha
 * de execução)
 *
 * @author Neemias Ramos Ferreira
 * @since classe criada em 14/05/2016
 */
public class Processo extends Thread {

    int sleepTime;
    float x;
    JFrame janela = new JFrame();
    JPanel painel = new JPanel();

    //Construtor da classe
    public Processo(String nome, float x) {
        super(nome);

        sleepTime = 15000; //Tempo máximo de dormência da Thread será de 15 seg.
        System.out.println("A Thread: " + getName() + " irá dormir por " + sleepTime + " ms.");
        painel.setBackground(Color.getHSBColor((int) (Math.random() * 1000), (int) (Math.random() * 1000), (int) (Math.random() * 1000)));
        janela.add(painel);
        janela.setSize((int) (250), (int) (250));
        janela.setLocation((int) (x * 260), (int) (10));
        janela.setVisible(true);

    }

    //Método que tem o código a ser executado pela thread
    @Override
    public void run() {
        System.out.println("A Thread: " + getName() + "=====> foi dormir");
        try {
            Thread.sleep(sleepTime);
        } catch (InterruptedException ex) {
            System.out.println("A Thread foi interrompida");
        }
        System.err.println("A Thread: " + getName() + "<<<<< ACORDOU >>>>>");
        janela.setVisible(true);

    }

    void start(int i) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

}//fim da classe
