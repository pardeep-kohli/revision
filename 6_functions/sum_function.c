#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a=3,b=4;
    printf("the sum of a and b is %d",sum(a,b));
    return 0;
}
int sum(int a, int b){
     int um=a+b;
     return um;
}
