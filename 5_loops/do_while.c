//print the sum of first n natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("sum of first: ");
    scanf("%d",&n);
    int i=0;
    int sum=0;
    do{
       sum=sum+i;
       i++;
        
    }while(i<=n);
    printf("the first %d digit sum is %d/n",n,sum);

    //reverse
    return 0;
}