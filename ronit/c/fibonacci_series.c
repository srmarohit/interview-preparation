// This progrma will print the fibonacci series

#include <stdio.h>

void print_series(int in_terms)
{
    int first_num = 0, sec_num = 1,sum=0;
    printf("%d\t%d\t",first_num, sec_num );
    
    for(int loop=0; loop < in_terms-2; loop++) // subtracting it with 2 because we have already used starting 2 numbers from sequence
    {
        sum = first_num + sec_num;
        printf("%d\t", sum);
        first_num = sec_num;
        sec_num = sum;
    }
}


int main() {
    // Write C code here
    int in_terms;
    int run_again;
    int first_num = 0;
    int sec_num = 1;
    do
    {
        printf("\n\nEnter the terms for fibonacci series\n");
        scanf("%d",&in_terms);
        if(in_terms < 0)
        {
            printf("Enter the integer number\n");
        }
        else if(in_terms == 1)
        {
            printf("%d\n",first_num);
        }
        else if(in_terms == 2)
        {
            printf("%d\t%d\n",first_num, sec_num);
        }
        else
        {
            print_series(in_terms);
        }
        
        /*  ask user whether to run program again or not    */
        printf("Do you want run the program again\n");
        scanf("%d",&run_again);
    }while(run_again);

    return 0;
}

