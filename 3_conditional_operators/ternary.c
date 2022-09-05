#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    age>=18?printf("adult \n"):printf("not adult \n");
    age<=13?printf("teenager"):printf("not teenager");
    return 0;
}