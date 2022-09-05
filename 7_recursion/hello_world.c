#include <stdio.h>
void printHello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello world\n");
    printHello(count - 1);
}
int main()
{
    int count;
    printf("how many times do you want to print: ");
    scanf("%d", &count);
    printHello(count);
    return 0;
}