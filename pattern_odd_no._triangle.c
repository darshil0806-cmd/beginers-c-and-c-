#include<stdio.h>
int main(){
int a;
printf("enter no. of rows : ");
scanf("%d",&a);
for(int i=0;i<=a;i++){
    for(int j=0;j<i;j++){
        printf("%d\t",2*j+1);
    }
    printf("\n");

}
return 0;
}