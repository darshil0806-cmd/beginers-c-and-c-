#include<stdio.h>
int main()
{
    float p,r,n,I;
    printf("to calculate enter the value of principle amount \n");
    scanf("%f",&p);
    printf("to calculate enter the value of time period \n");
    scanf("%f",&r);
    printf("to calculate enter the value of rate  \n");
    scanf("%f",&n);
    I=p*r*n/100;
    printf("the interest is %f",I);
}