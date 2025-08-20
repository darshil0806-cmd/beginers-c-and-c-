#include<stdio.h>
int main(){
int n;
printf(" enter the no. that you want to find the factorial of :");
scanf("%d",&n);
int fact = 1;
for(int i=1;i<=n;i++){
    fact *= i;
}
printf("the factorial of %d is %d",n,fact);
return 0;
}