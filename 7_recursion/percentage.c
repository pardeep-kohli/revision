#include <stdio.h>
float percentage(float a, float b, float c){
    float p= (a+b+c)/3;
    return p;
}
int main()
{
    float a,b,c;
    printf("Enter Math Marks: ");
    scanf("%f",&a);
    printf("Enter Math Marks: ");
    scanf("%f",&b);
    printf("Enter Math Marks: ");
    scanf("%f",&c);
    float per=percentage(a,b,c);
    printf("The percentage is : %.2f",per);
    return 0;
}