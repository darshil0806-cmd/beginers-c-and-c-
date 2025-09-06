// given number is palindrome or not

#include <stdio.h>

int main()
{
    int num, digit, d;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }
    d = (num + digit) / 2;
    if (d == num)
    {
        printf("\nyour number is palindrome");
    }
    else
    {
        printf("your number is not palindrome ");
    }

    return 0;
}
