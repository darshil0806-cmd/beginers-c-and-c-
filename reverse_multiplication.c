#include<stdio.h>
int main(){
int n;
printf("Enter a number whose multiple you need to find :");
scanf("%d",&n);
for(int i=10;i;i--){
    printf("%d * %d = %d\n", n, i, n*i);
}
return 0;
}