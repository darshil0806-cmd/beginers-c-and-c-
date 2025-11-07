//insert a new number at the beginning of an array
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i + 1]); 
    }

    int new_element;
    printf("Enter the new element to insert at the beginning: ");
    scanf("%d", &new_element);
    arr[0] = new_element;

    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}