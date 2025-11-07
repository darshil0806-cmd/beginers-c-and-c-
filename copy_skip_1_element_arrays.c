// copy one array of 5 elements to another array of 10 elements skipping one element
#include <stdio.h>

int main()
{
    int source[5] = {1, 2, 3, 4, 5};
    int destination[10];
    int i, j = 0;

    for (i = 0; i < 5; i++)
    {
        if (i != 2)
        { // Skip the element at index 2
            destination[j] = source[i];
            j++;
        }
    }

    // Print the destination array
    printf("Destination array: ");
    for (i = 0; i < j; i++)
    { // Print only copied elements
        printf("%d ", destination[i]);
    }

    return 0;
}