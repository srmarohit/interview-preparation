import java.util.Scanner;

class FindHcfOfTwoNum {


    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return gcd(b, a % b);
        }
    }
   
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt();
        System.out.print("Enter the third number: ");
        int num3 = scanner.nextInt();

        if (num1 == 0 || num2 == 0 || num3 == 0){
            System.out.print("not valid number");
        }else{
            int result = gcd(gcd(num1, num2), num3);

            System.out.println("The GCD of " + num1 + ", " + num2 + ", and " + num3 + " is: " + result);
        }

        
    }

    
}