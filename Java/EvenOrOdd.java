import java.util.Scanner;

public class EvenOrOdd{
    public static void main(String[] args){

        int a;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the value of a: ");
        a = input.nextInt();

        if(a % 2 == 0){
            System.out.println("Given number is Even");
        }
        else{
            System.out.println("Given number is Odd");
        }
        input.close();
    }

}
