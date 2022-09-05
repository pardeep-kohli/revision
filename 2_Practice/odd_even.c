//Write a program to check if number is even or odd
#include <stdio.h>
int main()
{
    int a,b=2;
    printf("please enter a number for check : ");
    scanf("%d",&a);
    int c=a%b;
    if(c==0){
        printf("the number %d is even.",a);
    }
    else{
        printf("the number %d is odd.",a);
    }
    return 0;
}