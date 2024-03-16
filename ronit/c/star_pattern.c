// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int run_again = 0;
    int row = 0,col = 0;
    do
    {
        printf("enter the number of rows in triangle\r\n");
        scanf("%d", &row);
        
    /* Right inclined left angle triangle star pattern  */
        for(int row_loop=0;row_loop < row+1; row_loop++)
        {
            for(col=0;col < row_loop; col++)
            {
                printf("*");
            }
            printf("\n");
        }

    /* Right inclined right angle triangle star pattern  */
    
        for(int row_loop = 0;row_loop < row+1; row_loop++)
        {
            for(int col = 0; col< row ; col++)
            {
                if(col >=  row-row_loop)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }
    
        /* Top Base Right inclined right angle triangle star pattern  */
        printf("\n");
        for(int row_loop = 0;row_loop < row+1; row_loop++)
        {
            for(int col = 0; col < row ; col++)
            {
                if(col <  row-row_loop)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }

        /* Top Base Right inclined right angle triangle star pattern  */
        for(int row_loop=0;row_loop < row+1; row_loop++)
        {
            for(col=0;col < row; col++)
            {
                if(col >= row_loop)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }

        printf("\r\nDo you want to run program again");
        scanf("%d",&run_again);
    }while(run_again);

    return 0;
}