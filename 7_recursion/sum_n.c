#include <stdio.h>
int sum(int a){
    if(a==1){
        return 1;
    }
    int sumNm1=sum(a-1);
    printf("sum of %d\n",a-1);
    int sumN=sumNm1+a;
    return sumN;
}
int main()
{
    int a;
    printf("sum of numbers : ");
    scanf("%d",&a);
    printf("sum is : %d",sum(a));
    return 0;
}