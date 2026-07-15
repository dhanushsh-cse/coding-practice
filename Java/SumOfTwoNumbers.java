import java.util.Scanner;
public class SumOfTwoNumbers{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a, b, sum;
        System.out.print("Enter the number a:");
        a = input.nextInt();

        System.out.print("Enter the number b:");
        b = input.nextInt();

        sum = a + b; 

        System.out.println("Sum:" +sum );
        input.close();
    }
}