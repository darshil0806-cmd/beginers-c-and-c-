#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &n);
    int prime = 1;
    if(n==1 || n==0){
        printf("%d is not a prime number.\n", n);
    }
    else{
    for (int i = 2; i <= n ; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}