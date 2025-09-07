// find out a number is perfect number or not
#include <stdio.h>
int main()
{
    int a, b, d = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        b = a % i;
        if (b == 0)
        {
            d = d + i;
        }
    }
    if (d == a)
    {
        printf("The number is perfect\n");
    }
    else
    {
        printf("Your number is not perfect\n");
    }
    return 0;
}