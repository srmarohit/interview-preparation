/* Brief -  This program is used to convert binary 2 decimal and vice-versa  
Explanation - This will convert the numbers and parallely will check whether input number is
                right or not
*/
#include <stdio.h>

void get_user_number(int option, int *number);
int convert_Dec2Bin(int in_num);
int convert_Bin2Dec(int in_num);

void main()
{
    int run_again = 0, option_number = 0;
    int input_number, out_binNumber,out_decNumber, ret = 0;
    do
    {
        printf("Press 1 to run Binary 2 Decimal and press 2 run Deciaml 2 Binary\r\n");
        scanf("%d", &option_number);
        if(option_number == 1)
        {
            get_user_number(option_number, &input_number);
            out_decNumber = convert_Bin2Dec(input_number);
            if(out_decNumber != -1)
                printf("Output Decimal number is - %d\r\n", out_decNumber);
            else
               printf("Input number is wrong\r\n");

        }
        else if(option_number == 2)
        {
            get_user_number(option_number, &input_number);
            out_binNumber = convert_Dec2Bin(input_number);
            if(out_binNumber != -1)
                printf("Output Binary number is - %d\r\n", out_binNumber);
            else
               printf("Input number is wrong\r\n");

        }
        else
        {
            printf("Give correct input to run\r\n");
        }
        printf("Do you want to run program again\r\n");
        scanf("%d", &run_again);
    } while (run_again);
    
    
}

void get_user_number(int option, int *number)
{
    if(option == 1)
    {
        printf("Give Input Binary number\r\n");
        scanf("%d",number);
    }
    else if(option == 2)
    {
        printf("Give Decimal Input number\r\n");
        scanf("%d",number);
    }

}

/* Brief - To convert decimal number into binary    */
int convert_Dec2Bin(int in_num)
{
    int Binary_number = 0, multiplier = 1;
    while(in_num > 0)
    {
        Binary_number   += multiplier*(in_num%2);
        in_num        = in_num/2;

        multiplier = 10*multiplier;
    }
    return Binary_number;
}

/* Brief - To convert binary number into decimal    */
int convert_Bin2Dec(int in_num)
{
    int Decimal_number = 0, remainder,multiplier = 1;
    while(in_num > 0)
    {
        remainder = in_num%10;
        if(remainder == 0 || remainder == 1)
        {
            Decimal_number += multiplier*(remainder);   // multiplier is used to multiply it by 2
            in_num = in_num/10;
            multiplier *= 2;
        }
        else
        {
            return -1;      // To indicate if binary number have other 0 and 1
        }
    }
    return Decimal_number;
}
