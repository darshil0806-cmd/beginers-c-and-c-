#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter no. of rows : ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d", j + 1);
            }
            else
            {
                printf("%c", j + 65);
            }
        }
        printf("\n");
    }
    return 0;
}