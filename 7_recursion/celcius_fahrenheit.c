#include <stdio.h>
float C2fahrenheit(float c)
{
    float f = c * (9 / 5) + 32;
    return f;
}
float F2celcius(float f)
{
    float c = f/((9/5)+32);
    return c;
}
int main()
{
    int choose;
    float c;
    float f;
    printf("Enter the number (celcius =1, fahrenheit =2): ");
    scanf("%d", &choose);
    if (choose == 1)
    {
        printf("Enter the Celcius Value: ");
        scanf("%f", &c);
        printf("The Fahrenheit value of %f is : %f",c,F2celcius(c));
    }
    else if (choose == 2)
    {
        printf("Enter the Fahrenheit Value: ");
        scanf("%f", &f);
         printf("The Fahrenheit value of %f is : %f",f,C2fahrenheit(f));;
    }
    return 0;
}