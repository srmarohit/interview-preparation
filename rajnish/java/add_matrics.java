// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;

class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Try programiz.pro");
        int[][] matrics1 = {{1,2,3}, {4,5,6}};
        int[][] mat2 = {{11,12,13}, {14,15,16}};
        // System.out.println(mat2[0]/matrics1[0][0]);
      for(int i=0; i< matrics1.length; i++){
            for(int j =0; j < matrics1[i].length; j++){
                 System.out.print(matrics1[i][j] + mat2[i][j] + ",");
            }
            System.out.println();
        }
    
    // String matSize = getMatType();
    // int matx1 = getMat("1st");
    // int matx2 = getMat("2nd");
    // System.out.println(matSize + "mat1: " + matx1 + "mat2: "+ matx2 );
    
    // if(matSize.equals("2*2")){
    //     int[][] mat1 = {{0,0}, {0,0}};
    //     int[][] mat2 = {{0,0}, {0,0}};
    //     for(int i=0; i < 2; i++){
    //         for(int j=0; j< 2; j++){
    //             // mat1[i][j] = getMat("1st");
    //         }
           
    //     }
    //     for(int i=0; i < 2; i++){
    //         for(int j=0; j< 2; j++){
    //             // mat2[i][j] = getMat("2nd");
    //         }
           
    //     }
    //     // addMats(mat1, mat2);
    //     //  System.out.println("result: "+ addMats(mat1, mat2));
    // }
    
    }
    
    
    public static void addMats(int[][] mat1, int[][] mat2){
        int[][] res = {{},{}};
        for(int i=0; i<= mat1.length; i++){
            for(int j=0; j <= mat2.length; j++){
                 System.out.println(mat1[i][j] + mat2[i][j] );
                 res[i][j] = mat1[i][j] + mat2[i][j];
                //  return res;
            }
        }
    }
    
    public static int getMat(String x){
        Scanner inpObj = new Scanner(System.in);
        System.out.println("enter" + x + "matrics");
        int mat = inpObj.nextInt();
        return mat;
    }
    
    public static String getMatType(){
        Scanner inpObj = new Scanner(System.in);
        System.out.println("enter matrics size in this format-> 2*2 ");
        String matSize = inpObj.nextLine();
        return matSize;
    }
    
    
    
}

