#include<stdio.h>
int main(){
int a,b,c;
printf("enter the number: ");
scanf("%d", &a);
if(a%7==0){
    printf("The number is divisible by 7");
}
else{
    printf("The number is not divisible by 7");
}
return 0;
}