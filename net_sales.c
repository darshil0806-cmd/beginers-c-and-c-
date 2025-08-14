#include<stdio.h>
int main(){
int a,b,c;
printf("enter your gross sales",a);
scanf("%d", &a);
if(a>20000){
    b=a-0.15*a;
}
else if (a>10000){
    b=a-0.1*a;
}
else{
    b=a-0.05*a;
}
printf("your total net sales discount is : %d", b);
return 0;
}