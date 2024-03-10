/*
    This program is to swap 2 number without using third variable
    and testing of internal rebasing and 
*/


#include <stdio.h>

int main() {
    // Write C code here
    int first_number, second_number, run_again;
    
    do
    {
        printf("Enter first number\r\n");
        scanf("%d",&first_number);
        printf("Enter second number\r\n");
        scanf("%d",&second_number);

        printf("\r\nEntered first number is %d", first_number);
        printf("\r\nEntered second number is %d", second_number);

        first_number = first_number + second_number;
        second_number = first_number - second_number;
        first_number = first_number - second_number;
        
        printf("\r\nEntered first number is %d", first_number);
        printf("\r\nEntered second number is %d", second_number);
        
        printf("\r\nDo you want to execute program again\r\n");
        scanf("%d",&run_again);
    }while(run_again);
    return 0;
}