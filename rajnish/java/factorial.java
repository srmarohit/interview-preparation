import java.util.Scanner;

/**
 * factorial
 */
class findFactorial {
    public static void main(String[] args) {
      int res = findFactorial(5);
        if(res == 0){
            System.out.println("invalid number");
        }else {
            System.out.println(res);
        }
    }
    
    public static int findFactorial(int num){
        if(num < 0){
            return 0;
        }else if(num == 0){
            return 1;
        }else {
          return findFactorial(num - 1)*num;
        }
    }
}

// mehode 2 with for loop

class findFactorial2{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        int inpNum = inp.nextInt();
       int result = findFact(inpNum);
        System.out.println(result);

        inp.close();
    }
    
    public static int findFact(int num){
        int temp = 1;
        if(num < 0){
            System.out.println("invalid number");
            return -1;
            
        }else if(num == 0){
            System.out.println("num should be >0");
            return 1;
        }else{
             for(int i=1; i <= num; i++){
            temp = temp * i;
            System.out.println(temp);
        }
        }
     
        return temp;
    }
}