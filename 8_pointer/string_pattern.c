#include <stdio.h>
#include<string.h>

int main()
    
{
    char str[]="harry";
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%2c",str[j]);
        }
        printf("\n");
        
    }
    len=len-1;
    for (int i = len-1; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%2c",str[j]);
        }
        printf("\n");
        
    }
    
    
   
    return 0;
}