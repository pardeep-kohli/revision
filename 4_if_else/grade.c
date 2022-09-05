/*
Question 10: Write a program to give grade to a student
marks <30 is C
30<=marks<70 B
70<=marks<90 A
90<=marks<=100 is A+
*/

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks(1-100): ");
    scanf("%d", &marks);
    if (marks < 30 && marks > 0)
    {
        printf("you achieved C grade");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("You achieved B grade");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("You achieved A grade");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Wow! Congratulation you got A+");
    }
    else
    {
        printf("Invalid Entry");
    }
    return 0;
}