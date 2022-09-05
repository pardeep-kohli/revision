// calculate factorial
#include <stdio.h>
int main()
{
    int a;
    int fact = 1;
    printf("Enter the number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        fact = i * fact;
    }
    printf("%d", fact);

    return 0;
}