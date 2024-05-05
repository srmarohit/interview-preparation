#include <stdio.h>
#include <stdlib.h>

int getMatrixInput();
int MethodExecution();

int r1,c1,r2,c2;
int run_again = 0;
int **matrix_1,**matrix_2;
int **added_matrix;
int user_matrix1[3][2],user_matrix2[3][3];
int userMat_r1, userMat_c1, userMat_r2, userMat_c2; 
int method_flag;
int main()
{
    do
    {
        printf("which method you want to execute the code\r\n");
        printf("Enter 1 to run user given input method\r\n");
        printf("Enter 2 to run user Defined input method\r\n");
        scanf("%d",&method_flag);

        if(MethodExecution())
        {
            if(method_flag == 1)
            {
                userGivenMatrixAddition();
                printf("added matrix result\r\n");
                printUserGivenMatrixAddition();
            }
            else if(method_flag == 2)
            {
                userDefinedMatrixAddition();
                printf("added matrix result\r\n");
                printUserDefinedMatrixAddition();
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


int MethodExecution()
{
    int ret_flag = 0;
    if(method_flag == 1)
    {
        ret_flag = getMatrixInput();
    }
    else if(method_flag == 2)
    {
        ret_flag = userDefinedMatrix();
    }
    return ret_flag;
}

int userDefinedMatrix()
{
    userMat_r1 = sizeof(user_matrix1)/sizeof(user_matrix1[0]);
    userMat_c1 = sizeof(user_matrix1[0])/sizeof(int);
    userMat_r2 = sizeof(user_matrix2)/sizeof(user_matrix2[0]);
    userMat_c2 = sizeof(user_matrix2[0])/sizeof(int);

    if((userMat_r1 == userMat_r2) && (userMat_c1 == userMat_c2))
    {
        printf("Enter matrix 1 data\r\n");
        for(int row_loop = 0;row_loop<userMat_r1; row_loop++)
        {
            for(int col_loop = 0;col_loop<userMat_c1; col_loop++)
            {
                scanf("%d,", &user_matrix1[row_loop][col_loop]);            
            }
        }
        printf("\n");
        printf("Enter matrix 2 data\r\n");
        for(int row_loop = 0;row_loop<userMat_r2; row_loop++)
        {
            for(int col_loop = 0;col_loop<userMat_c2; col_loop++)
            {
                scanf("%d,", &user_matrix2[row_loop][col_loop]);            
            }
        }
    }
    else{
        printf("wrong matrix row colums");
        return 0;
    }
    return 1;
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


void userDefinedMatrixAddition()
{
    added_matrix = (int**)malloc(userMat_r1*sizeof(int*));     
    for(int r_loop=0;r_loop<userMat_r1;r_loop++)
        added_matrix[r_loop] = (int*)malloc(userMat_c1*sizeof(int));

    for(int row_loop = 0; row_loop<userMat_r1;row_loop++)
    {
        for(int col_loop = 0; col_loop<userMat_c1; col_loop++)
        {
            added_matrix[row_loop][col_loop] = user_matrix1[row_loop][col_loop] + user_matrix2[row_loop][col_loop];
        }
    }

}


void userGivenMatrixAddition()
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
}

void printUserDefinedMatrixAddition()
{
    for(int row_loop = 0; row_loop < userMat_r1;row_loop++)
    {
        for(int col_loop = 0; col_loop < userMat_c1; col_loop++)
        {
            printf("%d,",added_matrix[row_loop][col_loop]);
        }
        printf("\n");
    }
}

void printUserGivenMatrixAddition()
{
    for(int row_loop = 0; row_loop<r1;row_loop++)
    {
        for(int col_loop = 0; col_loop<c1; col_loop++)
        {
            printf("%d,",added_matrix[row_loop][col_loop]);
        }
        printf("\n");
    }
}













