//count the numbers of triplets whose sum is equal to a given number
#include <stdio.h>

int main(){
    int n, target, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    count++;
                }
            }
        }
    }

    printf("Total triplets with sum %d: %d\n", target, count);

    return 0;
}
