// Question 9 :Write a program to check if a student passed or fail
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter you marks(0-100) : ");
    scanf("%d", &marks);
    // if (marks > 30 && marks <= 100)
    // {
    //     printf("Pass\n");
    // }
    // else if (marks < 30 && marks >=0)
    // {
    //     printf("Fail");
    // }
    // else
    // {
    //     printf("Invalid Entry");
    // }
    marks<=30?printf("Fail"):printf("Pass");
    return 0;
}