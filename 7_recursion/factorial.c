#include <stdio.h>
int factorial(int n);
int main()
{   int n;
    printf("Enter the number to calculate factorial: ");
    scanf("%d",&n);
    printf("the factorial of %d is : %d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact = factorial(n - 1) * n;
    return fact;
}