
import java.awt.BorderLayout;
import java.awt.Graphics;
import java.awt.Image;

import javax.swing.ImageIcon;
import javax.swing.JDesktopPane;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class ImagemPainel extends JFrame {

    public ImagemPainel() {

        setSize(1290, 450); // tamanho janela
        setLocation ((int) (0), (int)(270)); // local

        JPanel painel_imagem = new JPanel(new BorderLayout());
        painel_imagem.setOpaque(true);
        
        JDesktopPane desktop = new JDesktopPane() {

            Image im = (new ImageIcon("C:\\pinheir.jpg")).getImage();

            public void paintComponent(Graphics g) {
                g.drawImage(im, 0, 0, this);
            }
        };
        painel_imagem.add(desktop);
        getContentPane().add(painel_imagem);
    }

    public static void main(String args[]) {
        new ImagemPainel().setVisible(true);
        
    }
}
