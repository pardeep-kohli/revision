#include <stdio.h>
void work(float a, float b, int *sum, int *prod, float *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
int main()
{
    int sum,prod;
    float a=4,b=5, avg;
    work(a,b,&sum,&prod,&avg);
    printf(" sum = %d\n prod = %d\n avg = %.2f",sum,prod,avg);
    return 0;
}