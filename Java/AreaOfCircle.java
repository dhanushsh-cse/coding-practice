import java.util.Scanner;
public class AreaOfCircle{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int b; 
        double area;

        System.out.print("Enter the radius b:");
        b = input.nextInt();

        area = 3.14*b*b; 

        System.out.println("Area Of Circle:" +area );
        input.close();
    }
}