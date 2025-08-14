#include<stdio.h>
int main(){
int a,b,c;
printf("Enter your gross salary: ",a);
scanf("%d", &a);
if(a>10000){
    c=a+0.1*a-0.3;
}
else if(a>5000){
    c=a+0.7*a-0.2;
}
printf("your in hand salary is : %d", c);
return 0;
}