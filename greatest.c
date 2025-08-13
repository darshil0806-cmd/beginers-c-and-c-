#include<stdio.h>
int main(){
int a=4,b=6,c=7;
if(a>b && a>c ){
    printf("the greatest no. is %d",a);
}
if(b>a && b>c ){
    printf("the greatest no. is %d",b);
}
if(c>b && a<c ){
    printf("the greatest no. is %d",c);
}
return 0;
}