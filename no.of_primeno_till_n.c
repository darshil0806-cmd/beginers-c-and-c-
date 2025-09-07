// find how many number of prime number are there from 1 to n

#include <stdio.h>
int main()
{
    int i, j, Prime, f;
    printf("enter a number till which you need to find number of prime numbers :\n");
    scanf("%d", &f);
    int p = 0;
    printf("prime from 1 to %d are as given below \n", f);
    for (i = 2; i <= f; i++)
    {
        Prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                Prime = 0;
                break;
            }
        }

        if (Prime == 1)
        {
            p = p + 1;
            printf("%d,", i);
        }
    }
    printf(" \n number of prime number from 1 to %d is : %d", f, p);
    return 0;
}