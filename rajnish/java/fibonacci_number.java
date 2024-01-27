 class Innerfibonacci_number {

    public static void main(String a[]){

        int result = fibonacci_number(6);
        System.out.println("result " + result);
    }


    public static int fibonacci_number(int num) {

        int a = 0;
        int b = 1;
        int c ;
        int result = 1;

    
        if(num > 1){

        for (int i = 0; i <= num; i++){
          c = a+b;
         a = b;
         b = c;

         if (i <= num-2) {
             result += c;  
         }
         System.out.println("inside loop temp" + c);
        
        }
    }
    return result;
    // System.out.println("outside loop temp" + c);
    // return c;
}

    
}
