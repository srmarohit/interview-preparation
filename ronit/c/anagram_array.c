/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define alphabet_array 26


/*  function to set the array memory */
void set_memory(int *mem, int size)
{
    for(int i=0;i<size;i++)
    {
        mem[i] = 0;
    }
}


int main()
{
    //char str_1[20], str_2[20]; // If I don't allocate memory then it'll not take second string input
    char *str_1 = malloc(20), *str_2 = malloc(20); // If I don't allocate memory then it'll not take second string input//
    int strlen_1,strlen_2, index = 0, loop = 0;
    int str1_characters[alphabet_array], str2_characters[alphabet_array];
    int anagram_flag = 0, rerun_flag;
    do{
        loop = 0;
        index = 0;
        // memset((int*)str1_characters, 0, 26);        // this line not able to set/clear the array with 0 and hence getting anagrama also not anagram
        // memset((int*)str2_characters, 0, 26);
        set_memory(str1_characters,alphabet_array);
        set_memory(str2_characters,alphabet_array);
        
        printf("enter the string 1\n");
        scanf("%s",str_1);
        printf("enter the string 2\n");
        scanf("%s", str_2);
        
        strlen_1 = strlen(str_1);
        strlen_2 = strlen(str_2);
        
        if(strlen_1 == strlen_2)
        {
            while(loop < strlen_1)
            {
                if( (str_1[loop] >= 'a' && str_1[loop] <= 'z') &&
                    (str_2[loop] >= 'a' && str_2[loop] <= 'z') 
                )
                {
                    index = str_1[loop] - 'a';
                    str1_characters[index] = str1_characters[index] + 1;
                    index = str_2[loop] - 'a';
                    str2_characters[index] = str2_characters[index] + 1;
                }
                else
                {
                    anagram_flag = 0;
                    break;
                }
                loop++;
            }
            anagram_flag = 1;
            for(loop=0;loop<alphabet_array;loop++)
            {
                if(str1_characters[loop] != str2_characters[loop])
                {
                    anagram_flag = 0;
                    break;
                }
            }
            
            
        }
        else
        {
            anagram_flag = 0;
        }
        
        if(anagram_flag)
        {
            printf("Given string is anagram");
        }
        else
        {
            printf("Given string is not anagram");
        }
        
        printf("\nDo you want to execute program again");
        scanf("%d",&rerun_flag);
    }while(rerun_flag);
    
    free(str_1);
    free(str_2);
    return 0;
}
