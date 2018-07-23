import java.util.Arrays;
import java.util.Scanner;
/**
 * Classe java para identificar se uma string, digitada pelo usuário, é ou não é um Palindromo.
 * @since 17/06/2018
 * @author Neemias Ramos Ferreira
 */
public class Palindromo {
     public static void main(String args[]) {
      System.out.println("Digite uma string :");
      Scanner sc = new Scanner(System.in);
      String s = sc.nextLine();
      char[] reversoArray = s.toCharArray();
      int size = reversoArray.length;
      char [] normalArray = Arrays.copyOf(reversoArray,reversoArray.length);
      
      for (int i = 0; i < size / 2; i++) {
         char temp = reversoArray[i];
         reversoArray[i] = reversoArray[size-i-1];
         reversoArray[size-i-1] = temp;
      }
      System.out.println("Array Normal"+Arrays.toString(normalArray));
      System.out.println("Array Reverso"+Arrays.toString(reversoArray));
      
      if(Arrays.equals(reversoArray, normalArray)) {
         System.out.println("A string digitada é um palíndromo");
      } else {
         System.out.println("A string digitada NÃO é um palíndromo");
      }
   }
}
