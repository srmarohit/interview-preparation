#include <stdio.h>


void print_series(int in_terms)
{
    int first_num = 0, sec_num = 1,sum=0,total_sum=0;
    printf("%d\t%d\t",first_num, sec_num );
    
    total_sum = first_num + sec_num;    // To optimize the loop we're adding the sum before the loop
    for(int loop=0; loop < in_terms-1; loop++)  // subtracting by 1 because we need 1 digit/number extra to get a sum, that's why it is little different from printing the fibonacci series 
    {
        sum = first_num + sec_num;
        total_sum += sum;
        printf("%d\t", sum);
        first_num = sec_num;
        sec_num = sum;
    }
    printf("\nsum of fibonacci series is %d\n", total_sum);
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
        if(in_terms <= 0)
        {
            printf("Enter the number greater than zero\n");
        }
        else if(in_terms == 1)
        {
            printf("%d\n",first_num);
            printf("To get sum you need to 2 digits/terms\n");
        }
        else if(in_terms == 2)
        {
            printf("%d\t%d\n",first_num, sec_num);
            printf("sum of fibonacci series is %d\n", sec_num);
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

