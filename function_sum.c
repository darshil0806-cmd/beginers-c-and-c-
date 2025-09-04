#include<stdio.h>
//function define
int sum(int,int);
// function prototype 
int sum(int x, int y){
    printf(" the sum is %d\n",x+y);
    return x+y;
}




int main(){
    int a = 1;
    int b = 2;

sum(a,b); 

return 0;
}
