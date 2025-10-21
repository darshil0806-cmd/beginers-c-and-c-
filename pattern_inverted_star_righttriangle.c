#include<stdio.h>
int main(){
int a,b,c;
printf("enter no. of rows : ");
scanf("%d",&a);
for(int i=a;i>0;i--){
    for(int j=i;j>0;j--){
        printf("*");
    }
    printf("\n");

}
return 0;
}