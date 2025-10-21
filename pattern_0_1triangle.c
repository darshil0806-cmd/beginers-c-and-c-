#include <stdio.h>
int main()
{
    int a;
    printf("enter no. of rows : ");
    if (scanf("%d", &a) != 1) return 0;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
