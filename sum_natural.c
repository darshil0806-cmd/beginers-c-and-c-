#include <stdio.h>
int main(){
int i = 0;
int n,d;
printf("enter n till which you need the submission ");
scanf("%d",&n);
for(i = 0 ; i<=n;i++)
    {
       d=d+i;
      // printf("%d\n",d);
}
printf("%d",d);
return 0;
}

