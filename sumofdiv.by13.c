#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i < 100; i++){
        if(i % 13 == 0){
            sum += i;
        }
    }
    printf("Sum of numbers divisible by 13 is: %d\n", sum);
    return 0;
}