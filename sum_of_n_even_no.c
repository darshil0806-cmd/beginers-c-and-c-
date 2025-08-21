#include<stdio.h>
int main(){
int n;
printf("Enter a number of even integers to sum: ");
scanf("%d", &n);
int sum = 0;
for (int i = 1; i <= n; i++)
{
    sum += i*2;
}
printf("The sum of the first %d even numbers is %d\n", n, sum);
return 0;
}