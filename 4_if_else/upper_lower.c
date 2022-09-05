#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("The character '%c' is lowercase.\n",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("The character '%c' is uppercase\n",ch);
    }
    else{
        printf("the character '%c' is invalid\n",ch);
    }
    return 0;
}