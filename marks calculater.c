#include<stdio.h>
int main(){
int a ;
printf("your marks in maths:");
scanf("%d",&a);
int b ;
printf("your marks in physics:");
scanf("%d",&b);
int c;
printf("your marks in chemistry:");
scanf("%d",&c);
printf("your percentage is %d", (a+b+c)/3);
if((a+b+c)/3 >= 40){
    printf("you are passed");
}
else if((a+b+c)/3 < 40){
    printf("you are failed");
}
if(a<33 || b<33|| c<33){
    printf("you are failed in individual subjects");
}
return 0;
}