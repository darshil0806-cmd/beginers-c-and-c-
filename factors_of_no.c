// find out factors given numbers
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) 
    {
        b = a % i;
        if (b == 0)
        {
            printf("Factor of %d is %d\n", a, i);
        }
    }
    return 0;
}