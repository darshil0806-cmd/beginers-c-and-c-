//add 2 D arrays
#include<stdio.h>
int main(){
int a[2][2],b[2][2],c[2][2];
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("Enter element a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("Enter element b[%d][%d]: ",i,j);
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Sum of matrices:\n");
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}