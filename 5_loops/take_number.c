//keep taking numbers as input from user until user enters an odd number
#include <stdio.h>
int main()
{
    int a;
    do{
        printf("Enter you number : ");
        scanf("%d",&a);
        printf("the number is %d\n",a);
        if(a%2!=0){
            break;
        }
    }while(1);
    printf("Thank You!");
    return 0;
}