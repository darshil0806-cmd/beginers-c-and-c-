#include<stdio.h>
int main(){
int i,sum;
for(i=1;i<=10;i++){
sum += i;
}
printf("Sum = %d\n",sum);
printf("Mean = %.2f\n",(float)sum/10);
return 0;
}