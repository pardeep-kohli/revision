#include <stdio.h>
int main()
{
    int a;
    printf("How many number do you want to print : ");
    scanf("%d",&a);
    printf("hello");
    for(int i=1; i<=a; i++){
        printf("%d\n",i);
    }
    return 0;
} 