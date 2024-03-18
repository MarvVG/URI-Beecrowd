import java.util.Scanner;
public class Main{
    public static void main(String[] args){     
        int A,B,C,D,DIFERENCA;
        Scanner scan = new Scanner(System.in);
        A= scan.nextInt();
        B= scan.nextInt();
        C= scan.nextInt();
        D= scan.nextInt();
        DIFERENCA = (A * B) - (C * D);
        System.out.println("DIFERENCA = "+DIFERENCA);
    }
}
