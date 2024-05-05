#include <stdio.h>
#include <stdlib.h>

int getMatrixInput();

int r1,c1,r2,c2;
int run_again = 0;
int **matrix_1,**matrix_2;
int **added_matrix;
int user_matrix1[4][4],user_matrix2[4][4];

int main()
{
    do
    {
        if(getMatrixInput())
        {
            added_matrix = (int**)malloc(r1*sizeof(int*));     
            for(int r_loop=0;r_loop<r1;r_loop++)
                added_matrix[r_loop] = (int*)malloc(c1*sizeof(int));

            for(int row_loop = 0; row_loop<r1;row_loop++)
            {
                for(int col_loop = 0; col_loop<c1; col_loop++)
                {
                  added_matrix[row_loop][col_loop] = matrix_1[row_loop][col_loop] + matrix_2[row_loop][col_loop];
                }
            }
            
            printf("added matrix result\r\n");
            for(int row_loop = 0; row_loop<r1;row_loop++)
            {
                for(int col_loop = 0; col_loop<c1; col_loop++)
                {
                  printf("%d,",added_matrix[row_loop][col_loop]);
                }
                printf("\n");
            }
        }
        else{
            printf("matrix data didn't match");
        }
        printf("\n");
        printf("Do you run program again\r\n");
        scanf("%d",&run_again);
    } while (run_again);
    
    return 0;
}


int userMatrix()
{
    
}


int getMatrixInput()
{
    printf("Enter matrix 1 data\r\n");
    printf("Enter number of rows in matrix 1 \r\n");
    scanf("%d",&r1);
    printf("Enter number of cols in matrix 1 \r\n");
    scanf("%d",&c1);

    printf("Enter matrix 2 data\r\n");
    printf("Enter number of rows in matrix 2 \r\n");
    scanf("%d",&r2);
    printf("Enter number of cols in matrix 2 \r\n");
    scanf("%d",&c2);
    printf("\n");

    if( (r1==r2) && (c1==c2))
    {
        matrix_1 = (int**)malloc(r1*sizeof(int*));
        for(int r_loop=0;r_loop<r1;r_loop++)
            matrix_1[r_loop] = (int*)malloc(c1*sizeof(int));

        matrix_2 = (int**)malloc(r2*sizeof(int*));
        for(int r_loop=0;r_loop<r1;r_loop++)
            matrix_2[r_loop] = (int*)malloc(c2*sizeof(int));


        printf("Enter matrix 1 data\r\n");
        for(int row_loop = 0;row_loop<r1; row_loop++)
        {
            for(int col_loop = 0;col_loop<c1; col_loop++)
            {
                scanf("%d,", &matrix_1[row_loop][col_loop]);            
            }
        }
        printf("\n");
        printf("Enter matrix 2 data\r\n");
        for(int row_loop = 0;row_loop<r2; row_loop++)
        {
            for(int col_loop = 0;col_loop<c2; col_loop++)
            {
                scanf("%d,", &matrix_2[row_loop][col_loop]);            
            }
        }

        printf("print matrix 1 data\r\n");
        for(int row_loop = 0;row_loop<r1; row_loop++)
        {
            for(int col_loop = 0;col_loop<c1; col_loop++)
            {
                printf("%d, ", matrix_1[row_loop][col_loop]);            
            }
            printf("\n");
        }
        printf("print matrix 2 data\r\n");
        for(int row_loop = 0;row_loop<r2; row_loop++)
        {
            for(int col_loop = 0;col_loop<c2; col_loop++)
            {
                printf("%d, ", matrix_2[row_loop][col_loop]);            
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix are not equal");
        return 0;
    }
    return 1;
}
















