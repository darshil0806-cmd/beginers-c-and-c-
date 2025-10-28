//given an array of integers , change the value of all odd indexed elements to its second multiple 
// and even indexed elements increased by 10 value
#include <stdio.h>
int main(){
    int n;
    printf("how many numbers do you want: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int a[n];
    printf("enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        if (scanf("%d", &a[i]) != 1) return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] += 10;
        }
        else
        {
            a[i] *= 2; 
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}