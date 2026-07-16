import java.util.Scanner;

public class SimpleInterest{
    public static void main(String[] args){

        int p, r, t;
        float si;
        Scanner input = new Scanner(System.in);

        System.out.print("Principle Value: ");
        p = input.nextInt();
        System.err.print("Rate Value: ");
        r = input.nextInt();
        System.out.print("Time of year: ");
        t = input.nextInt();

        si = (p*r*t)/100;
        System.out.println("simple Interest: "+si);
        input.close();
    }
}