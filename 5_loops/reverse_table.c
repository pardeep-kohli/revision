//reverse table
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    for (int i = 10; i >= 1; i--)
    {
        printf("%.2d * %.2d = %.2d\n",a,i,a*i);
    }
    
    return 0;
}