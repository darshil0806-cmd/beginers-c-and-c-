// count the number of elements in given array greater than a given number
#include <stdio.h>
int main(){
    int n, count = 0, threshold;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the threshold value: ");
    scanf("%d", &threshold);

    for (int i = 0; i < n; i++) {
        if (arr[i] > threshold) {
            count++;
        }
    }

    printf("Number of elements greater than %d: %d\n", threshold, count);

    return 0;
}