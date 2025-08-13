#include<stdio.h>
int main(){
float a;
printf(" your income is ");
scanf("%d",&a);
if(a<250000){
    printf("you are free to not pay the tax");
}
else if (a>250000 && a < 500000){
    printf("you have to pay 5% tax %d",a/20);  
    
}
else if ( a>500000 && a<1000000){
    printf("you have to pay 20% tax %d",a/5);
}
else if (a>10000000){
    printf("you have to pay 30% tax %d",a/3.33);
}

return 0;
}