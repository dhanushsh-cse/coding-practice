import java.util.Scanner;

public class SumOfalValues {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n, sum = 0;

        System.out.print("Enter the number of Elements: ");
        n = input.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter the Elements");

        for(int i = 0; i<n; i++){
            arr[i] = input.nextInt();
            sum += arr[i];
        }
        System.out.println("Sum: "+sum);
        input.close();
    }
    
}
