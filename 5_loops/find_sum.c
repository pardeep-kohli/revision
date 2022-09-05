//find the sum of all number between 5 to 50, these numbers also included
#include <stdio.h>
int main()
{
    int sum=0;
    for (int i = 5; i <= 50; i++)
    {
        sum+=i;
    }
    printf("sum of 5-50 is %d ",sum);
    
    return 0;
}