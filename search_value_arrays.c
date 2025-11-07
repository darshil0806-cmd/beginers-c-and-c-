//search value within arrays
#include <stdio.h>

int main()
{
    int n, value, found = 0;

    printf("How many numbers do you want: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the value to delete: ");
    scanf("%d", &value);

    // Search for the value and delete it
    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            found = 1;
            // Shift all elements to the left
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--; // Reduce size
            break; // Remove only first occurrence
        }
    }

    if (found)
    {
        printf("Array after deletion:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Value not found in the array!\n");
    }

    return 0;
}
