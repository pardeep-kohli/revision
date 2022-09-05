#include <stdio.h>
int main()
{
    int a;
    int i=1;
    printf("How many number do you want to print : ");
    scanf("%d",&a);
    while(i<=a){
        printf("%d\n",i);
        i++;
    }
    return 0;
}