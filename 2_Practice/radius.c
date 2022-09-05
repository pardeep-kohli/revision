//Write a program to calculate area of a circle. (radius is given)
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the Radius of circle: ");
    scanf("%d",&radius);
    printf("The area of cirle is : %f",3.14*(radius*radius));
    return 0;
}