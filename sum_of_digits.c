//summation of digits
#include<stdio.h>
int main(){
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    printf("Sum of digits is: %d\n", sum);
    return 0;
}