
import java.io.File;

/**
 * Classe para mostrar a cncorrência entre Threads propondo o paralelismo na
 * execução de tarefas
 *
 * @author Neemias Ramos Ferreira
 * @since classe criada em 14/05/2016
 */
public class Concorrência {

    public static void main(String[] args) {

        Processo p1, p2, p3, p4, p5;

        // int i = 1;
        //while (i < 2) {
        p1 = new Processo("Processo 1", 0);
        p2 = new Processo("Processo 2", 1);
        p3 = new Processo("Processo 3", 2);
        p4 = new Processo("Processo 4", 3);
        p5 = new Processo("Processo 5", 4);
        p1.start();
        p2.start();
        p3.start();
        p4.start();
        p5.start();

        new ImagemPainel().setVisible(true); // Chama classe com imagem

        //Chama Classe para música
        String path = "c:/01 - The Wicker Man.mp3";
        File mp3File = new File(path);
        JLayer.MP3Musica musica = new JLayer.MP3Musica();
        musica.tocar(mp3File);
        musica.start();

        //i++;
        //}
    }//fim do main   

}//fim da classe
