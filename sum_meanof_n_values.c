#include <stdio.h>

int main() {
    int n, i, value, sum = 0;

    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &value);
        sum += value;   // add each input to sum
    }

    printf("The sum of %d numbers is: %d\n", n, sum);

    return 0;
}
