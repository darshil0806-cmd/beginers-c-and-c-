// star path. no. of ways to climb n stairs when you can climb either 1 stair or 2 stairs at a time using recursion.
int stair(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return stair(n - 1) + stair(n - 2);
    }
}

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    printf("Number of ways to climb %d stairs: %d\n", n, stair(n));
    return 0;
}