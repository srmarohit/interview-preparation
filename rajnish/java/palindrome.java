// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;

class HelloWorld {
    public static void main(String[] args) {
        // System.out.println("Hello, World!");
        int num = 1001;
        int remainder, temp;
        int revers= 0;
        temp = num;

        while(num != 0){
            remainder = num % 10;
            revers = (revers*10) + remainder;
            num = num /10;// removing one word 

        }
        if (temp == revers){
            System.out.println("res. palindrom" + temp + "revers"+ revers);
        }
        
        int testPalindrom1 ;
        do{
            
            Scanner myObj = new Scanner(System.in);
            System.out.println("Enter  number");

            int userNum = myObj.nextInt(); 
            palindrom(userNum);
            
            System.out.println("press 0 for exit or press 1 to test again?");
            Scanner testPalindrom = new Scanner(System.in);
            testPalindrom1 = testPalindrom.nextInt(); 

            
        }while(testPalindrom1 == 1);
        
    }
    
    public static void palindrom(int num){
        // String temp = num.toString;
        int temp = num;
        int original_num = num;
        
        int revers =0;
        while(num != 0){
            temp = num % 10;
            // System.out.println("temp loop " + temp);
            
            revers = (revers * 10) + temp;
            // System.out.println("rever loop"+ revers);
            
             
            
            num = num /10;
        }
        
       if (revers == original_num){
                System.out.println("palindrom"+ num);
                
            }else{
             System.out.println("not a palindrom"+ num);
            }
    }
    
    
    
    
    
    
    
}

