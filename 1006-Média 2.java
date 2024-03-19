import java.io.IOException;
import java.util.Scanner;
public class Main{
    public static void main(String[] args){     
        double a,b,media;
        Scanner scan = new Scanner(System.in);
        a= scan.nextDouble();
        b= scan.nextDouble();
        media = ((a*3.5) + (b * 7.5))/ 11;
        System.out.printf("MEDIA = %.5f",media);
        System.out.println();
    }
}
