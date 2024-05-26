#include "stdio.h"

void get_min_max(int f_num, int s_num, int *min, int *max);

void main()
{
    int first_num, sec_num, min, max, HCF, LCM;
    printf("Enter 2 numbers\r\n");
    scanf("%d %d", &first_num, &sec_num);

    // HCF caluclation
    get_min_max(first_num, sec_num, &min, &max);
    printf("\r\nmin value is %d, max value %d", min, max);

    printf("\r\nStarting HCF caluclation");
    int division = 2;
    for(int div_loop = 2; div_loop <= min; div_loop++)
    {
        if( (first_num%div_loop == 0) && (sec_num%div_loop == 0) )
        {
            HCF = div_loop;
        }
    }
    printf("\r\nHCF is - %d", HCF);
    // LCM
    printf("\r\nStarting LCM caluclation");
    for(int div_loop = max; ; div_loop++)
    {
        if( (div_loop%first_num == 0) && (div_loop%sec_num == 0) )
        {
            LCM = div_loop;
            break;
        }
    }

    printf("\r\nLCM is %d",LCM);

}

void get_min_max(int f_num, int s_num, int *min, int *max)
{
    *max = f_num > s_num ? f_num : s_num;
    *min = f_num > s_num ? s_num : f_num;
}