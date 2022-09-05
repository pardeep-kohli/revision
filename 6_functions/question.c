// write functions to calculate area of a square, a circle & a rectangle
#include <stdio.h>
float areaofSquare(float area);
float areaofCircle(float area);
float areaofTriangle(float area, float area2);
int main()
{
    float area;
    float area2;
    float choose;

    printf("Which area do you want to calculate (1=square, 2=circle, 3= rectangle: ");
    scanf("%f", &choose);
    if (choose == 3)
    {
        printf("Enter the first side to calculate the area: ");
        scanf("%f", &area);
        printf("Enter the second side to calculate the area: ");
        scanf("%f", &area2);
    }
    else
    {
        printf("Enter the number to calculate the area: ");
        scanf("%f", &area);
    }
    if (choose == 1)
    {
        printf("The area of Square is %.2f",areaofSquare(area));
    }
    else if (choose == 2)
    {
        areaofCircle(area);
    }
    else if (choose == 3)
    {
        areaofTriangle(area, area2);
    }
    else
    {
        printf("wrong input");
    }
    return 0;
}
float areaofSquare(float area)
{
    float calc = area * area;
    return calc;
};
float areaofCircle(float area)
{
    float calc = 3.14 * (area * area);
    printf("The area of Circle is %.2f", calc);
};
float areaofTriangle(float area, float area2)
{
    float calc =(area * area2);
    printf("The area of Triangle is %.2f", calc);
};