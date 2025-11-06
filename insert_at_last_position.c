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



    printf("Enter the value to insert at last: ");
    scanf("%d", &value);


    for (int i = n; i >= n; i--) {
        a[i] = a[i - 1];
    }


    a[n] = value;
    n++;


    printf("Array after insertion at last:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

