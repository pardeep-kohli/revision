// print matrix
#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter Matrix Element\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter Matrix Data [%d] [%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
        printf("Matrix is ....\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%3d",a[i][j]);
            }
            printf("\n");
            
        }
        

    return 0;
}