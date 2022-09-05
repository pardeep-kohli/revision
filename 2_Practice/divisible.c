//Write a program to check if a number is divisible by 2 or not
#include <stdio.h>
int main()
{
    int a,b=2;
    printf("please enter a number for check : ");
    scanf("%d",&a);
    int c=a%b;
    if(c==0){
        printf("the number %d is divisible by 2.",a);
    }
    else{
        printf("the number %d isn't divisible by 2.",a);
    }
    return 0;
}