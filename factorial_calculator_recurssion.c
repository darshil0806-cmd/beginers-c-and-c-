#include<stdio.h>
int factorial(int a){
    if(a==0)
        return 1;
    else
        return a * factorial(a-1);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}