class findPrime{

    public static void main(String a[]){


        int num = 291;
        Boolean primeNum = findPrimeNum(num);
        
        if (primeNum) {
            System.out.println(num + " is prime number");
        }else if(num < 1){
            System.out.print("invalid num");
        }
        else{
            System.out.println(num + " is not prime number");
        }
    }


    public static Boolean findPrimeNum(int num){
         Boolean isPrime = false;

          if(num >=1 && num <=3){
            System.out.println(num + "is prime number");
        } 
         else if (num > 3) 
        {
            for(int i=2; i< num; i++){
                if (num % i == 0) {
                    isPrime = true;
                    break;
                }else{
                    isPrime = false;
                }
            }    
        }

        return isPrime;
    }
}