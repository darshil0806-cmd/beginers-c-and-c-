//armstrong number : sum of cubes of digits
#include<stdio.h>
int main(){
    int num, digit,e, c,d,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    d=0;
    e=num;
    while (num > 0)
    {
        digit = num % 10;
        c=(digit*digit*digit);
        d=d+c;
        num = num / 10;
    }
    printf("Cubes of digits is: %d\n", d);
    if(d==e){
        printf("your no. is armstrong");
    }
    else{
        printf("your no. is not armstrong");
    }
    return 0;
}