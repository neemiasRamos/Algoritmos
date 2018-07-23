
import javax.swing.JOptionPane;

/**
 * Exercicios: Escrever um programa em Java que leia a temperatura de uma maquina
 * e desenvolva a seguinte análise, feita por meio de tratamento de exceções;
 * a) > 100º = Abrir o resfriamento.
 * b) > 150º = Resfriar com urgência.
 * c) > 200º = Corra que vai Explodir!!!
 * d) < -5º = Aumentar a temperatura.
 * e) < -10º = Risco de congelamento, aquecer!
 * 
 * Criar a classe Temperatura e TemperaturaException para tratar as exceções de
 * maneira adequada.
 * 
 * Testar entradas inválidas
 * 
 * Enviar a temperatura lida para o método analisartempo().
 */

/**
 * Classe para 
 * @author Neemias Ramos Ferreira
 * @since Classe criada em 07/05/2016
 */
public class Temperatura {
    public static void main(String[] args) throws TemperaturaException {
        float temp;
        temp=0;
        try{
        temp=Float.parseFloat(JOptionPane.showInputDialog("Digite a Temperatura da Máquina!!!"));
        analisarTemperatura(temp);
        }
        catch(TemperaturaException erro){
            System.out.println(erro.getMessage());
        }
        
    }//fim do main

    private static void analisarTemperatura(float temp) throws TemperaturaException{
        if (temp > 200)
        throw new TemperaturaException("Corra que vai Explodir!!!");
            
        if (temp > 150)
        throw new TemperaturaException("Resfriar com Urgência!!!");
        
        if (temp > 100)
        throw new TemperaturaException("Abrir o Resfriamento!!!");
        
        if (temp < -10)
        throw new TemperaturaException("Aumentar Temperatura!!!");
        
        if (temp < -5)
        throw new TemperaturaException("Risco de Congelamento... Aquecer");
        
        else
            JOptionPane.showMessageDialog(null,"Temperatura Normal: " + temp);
    }

}//Fim da Classe!!!
