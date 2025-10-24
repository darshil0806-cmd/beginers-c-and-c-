#include<stdio.h>
int main(){
    int n;
    printf("enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int s=1;s<=i-1;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}