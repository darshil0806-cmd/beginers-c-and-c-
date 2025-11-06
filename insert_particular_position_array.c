#include <stdio.h>

int main() {
    int n, pos, value;

    printf("How many numbers do you want: ");
    scanf("%d", &n);

    int a[n + 1]; 

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

        for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    
    a[pos - 1] = value;
    n++;

    
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
