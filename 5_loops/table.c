//print a table of number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%.2d * %.2d = %.2d\n",n,i,n*i);
    }
    return 0;
}