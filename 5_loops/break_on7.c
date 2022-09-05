//whenever user enter the number divisible by 7 use break
#include <stdio.h>
int main()
{
    int a;
    do{
        printf("Enter your Number : ");
        scanf("%d",&a);
        printf("Your number is %d\n",a);
        if(a%7==0){
            break;
        }
    }while(1);
    return 0;
}