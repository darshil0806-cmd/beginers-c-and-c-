#include<stdio.h>
int main(){
int n;
printf("Enter a number of odd integers to sum: ");
scanf("%d", &n);
int sum = 0;
for (int i = 1; i <= n; i++)
{
    sum += i*2-1;
}
printf("The sum of the first %d odd numbers is %d\n", n, sum);
return 0;
}