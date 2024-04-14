import java.io.IOException;
import java.util.Scanner;
public class Main{
    public static void main(String[] args){     
        int A,B;
        float C,salario;
        Scanner scan = new Scanner(System.in);
        A= scan.nextInt();
        B= scan.nextInt();
        C= scan.nextFloat();
        salario = C * B;
        System.out.println("NUMBER = "+A);
        System.out.printf("SALARY = U$ %.3f",salario);
        System.out.println();
    
    }
}
