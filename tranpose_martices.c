// transpose of matrices 4x4 matrix
#include <stdio.h>
int main()
{
    int a[4][4], transpose[4][4];
    int i, j;

    printf("Enter elements of 4x4 matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}