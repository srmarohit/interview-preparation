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