#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, num;
    printf("Enter your number: ");
    scanf("%d", &num);
    for (int i = 3; i <= num; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    if (num == 2)
    {
        printf("1");
    }
    else
    {

        printf("%d", n3);
    }
    return 0;
}