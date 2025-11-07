#include <stdio.h>

int main()
{
    int n, pos;

    printf("How many numbers do you want: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
} 
