#include<stdio.h>
int main(){
    int n,t;
    printf("enter no. of odd lines : ");
    scanf("%d",&t);
    n=(t+1)/2;
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
    }for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=n-i-1;k++){
            printf("*");
        }
        for(int s=1;s<=n-i;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
