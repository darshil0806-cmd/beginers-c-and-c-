// summation of all prime numbers from 1 to 500
#include <stdio.h>
int main()
{
    int i, j, Prime;
    int prime = 0;
    printf("Prime numbers up to 500:\n");
    for (i = 2; i <= 500; i++)
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
            prime = prime + i;
        }
    }
    printf("Sum of all prime numbers up to 500: %d\n", prime);
    return 0;
}