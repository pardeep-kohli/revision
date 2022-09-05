#include <stdio.h>
int main()
{
    int number;
    printf("enter number : ");
    scanf("%d",&number);
    if(number>=0){
        printf("the number %d is positve\n",number);
        if(number %2 ==0){
            printf("the number %d is even\n",number);
        }
        else{
            printf("the number %d is odd\n",number);
        }
    }
    else{
        printf("the number %d is negative\n",number);
    }
    return 0;
}