import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        double raio,area,n = 3.14159;
        Scanner scan = new Scanner(System.in);
        raio = scan.nextDouble();
        area = n*(raio*raio);
        System.out.printf("A=%.4f",area);
        System.out.println();
    }
}
