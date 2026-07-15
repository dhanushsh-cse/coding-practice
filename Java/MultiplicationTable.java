import java.util.Scanner;
public class MultiplicationTable{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a;
        System.out.print("Enter the number a:");
        a = input.nextInt();
        for(int i=1; i<=10; i++){
            System.out.println(a+ "*" +i+"="+ a*i );
        }

        System.out.println( );
        input.close();
    }
}