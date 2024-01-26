// This program will take input from user and tell whether it is a prime number or not

#include <stdio.h>
#include <stdbool.h>

bool get_primeNumber(int number)
{
    int ret = 1;            // By default assume Number is prime number
    int div = 2;
    do
    {
        if(number%div == 0)
        {
            ret = 0;                // Number is not prime number
            break;
        }
        div++;
    }while(div<number);
    return ret;
}


int main() {
    // Write C code here
    int in_num;
    int run_again;
    do
    {
        printf("\n\nEnter the number\n");
        scanf("%d",&in_num);
        if(in_num < 0)
        {
            printf("Enter the integer number\n");
        }
        else if((in_num == 1) || (in_num == 2) || (in_num == 3))
        {
            printf("Entered number is prime number\n");
        }
        else
        {
            bool ret_value = get_primeNumber(in_num);
            if(ret_value)
             printf("Entered number is prime number\n");
            else
             printf("Entered number is not prime number\n");
        }

        /*  ask user whether to run program again or not    */
        printf("Do you want run the program again\n");
        scanf("%d",&run_again);
    }while(run_again);

    return 0;
}
