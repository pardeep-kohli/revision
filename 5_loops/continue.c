#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}