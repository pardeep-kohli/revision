// write a function that prints namaste is user is indian and bonjour if the user is french
void india();
void french();
#include <stdio.h>
int main()
{
    int a;
    printf("Enter you Country (india = 1 & french = 2) : ");
    scanf("%d", &a);
    if (a == 1)
    {
        india();
    }
    else if (a == 2)
    {
        french();
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
void india()
{
    printf("Namaste!");
    french();
}
void french()
{
    printf("Bonjour!");
    // india();
}