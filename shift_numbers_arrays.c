//shift all number by given n position within an array of 10 elements either on left side or right side . pad the remmaning position with zero.
#include <stdio.h>

int main()
{
    int arr[10], i, n, direction;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to shift (positive for right, negative for left): ");
    scanf("%d", &n);

    // Determine direction
    if (n > 0)
    {
        direction = 1; // Right shift
    }
    else
    {
        direction = -1; // Left shift
        n = -n; // Make n positive for easier handling
    }

    // Shift elements
    for (i = 0; i < 10; i++)
    {
        if (direction == 1)
        {
            // Right shift
            arr[(i + n) % 10] = arr[i];
        }
        else
        {
            // Left shift
            arr[(i - n + 10) % 10] = arr[i];
        }
    }

    // Pad remaining positions with zero
    for (i = 0; i < 10; i++)
    {
        if (direction == 1 && i < n)
        {
            arr[i] = 0;
        }
        else if (direction == -1 && i >= 10 - n)
        {
            arr[i] = 0;
        }
    }

    printf("Array after shifting:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}