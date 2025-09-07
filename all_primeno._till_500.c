//all prime numbers upto 500
#include <stdio.h>
int main()
{
    int i, j, Prime;
    printf("Prime numbers up to 500:\n");
    for(i = 2; i <= 500; i++)
    {
        Prime = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                Prime = 0;
                break;
            }
        }
    if(Prime==1)
            printf("%d\n", i);
    }
    return 0;
}