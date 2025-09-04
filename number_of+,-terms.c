#include <stdio.h>
int main()
{
    int i, c, j = 0, d = 0; 
    for (i = 1; i <= 20; i++)
    {
        printf("Enter number %d: \n", i);
        scanf("%d", &c);

        if (c < 0)
        {
            j = j + 1;
        }
        else if (c > 0)
        {
            d = d + 1;
        }
        // Zero is not counted as positive or negative
    }

    printf("Number of positive terms: %d\n", d);
    printf("Number of negative terms: %d\n", j);

    return 0;
}