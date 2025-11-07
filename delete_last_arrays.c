// delete from last position of arrays
#include <stdio.h>

int main()
{
    int n;

    printf("How many numbers do you want: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int a[n];

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    n--;

    printf("Array after deleting last element:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
