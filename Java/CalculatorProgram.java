import java.util.Scanner;

public class CalculatorProgram{
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        float a, b;
        int choices;

        System.out.println("Enter first number: ");
        a = input.nextFloat();
        System.out.println("Enter second number: ");
        b = input.nextFloat();
        System.out.println("Enter your choice (1-4): ");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        choices = input.nextInt();

        switch (choices) {
            case 1:
                System.out.println("Addition: " + (a + b));
                break;
            case 2:
                System.out.println("Subtraction: " + (a - b));
                break;
            case 3:
                System.out.println("Multiplication: " + (a * b));
                break;
            case 4:
                if (b != 0) {
                    System.out.println("Division: " + (a / b));
                } else {
                    System.out.println("Error: Division by zero is not allowed.");
                }
                break;
            default:
                System.out.println("Invalid choice. Please select a number between 1 and 4.");
        }
        input.close();
    }
}