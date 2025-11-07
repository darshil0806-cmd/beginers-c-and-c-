// Find out frequency of each number in the array (having 10 elements).
#include <stdio.h>

int main()
{
    int arr[10], freq[10] = {0}, i, j;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        freq[i] = 1; 
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                freq[i]++;
                freq[j] = -1; 
            }
        }
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < 10; i++)
    {
        if (freq[i] != -1)
        {
            printf("Element %d: %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}