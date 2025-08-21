#include <stdio.h>
int main(){
int i = 1;
int n;
printf("how many odd natural no. do you want starting from 1 to ");
scanf("%d",&n);
for(int i = 1 ; i<=n;i=i+2)
    {
printf("odd natural no. is %d\n",i);
}
return 0;
}
