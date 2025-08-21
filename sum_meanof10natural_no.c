#include <stdio.h>

int main() {
    int numbers[10], i, sum = 0;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // adding each number to sum
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}
