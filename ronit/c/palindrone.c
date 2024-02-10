// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char *in_string;
    int run_again = 1;
    do
    {
        int flag = 1;
        printf("Input the string\r\n");
        scanf("%s",in_string);
        
        int str_len = strlen(in_string);
        int loop = 0;
        while(loop < (str_len/2))
        {
            if(in_string[loop] != in_string[str_len-1-loop])
            {
                flag = 0;
                break;
            }
            loop++;
                
        }
        if(flag)
            printf("string is palindrome");
        else
            printf("string is not palindrome");
            
        printf("Do you want to execute program againr\r\n");    
        scanf("%d",&run_again);
        printf("\n");
    }while(run_again);
    

    return 0;
}