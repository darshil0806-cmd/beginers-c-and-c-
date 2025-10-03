// minimum no of notes required. notes given are 1,2,5,10,20,50,100,200,500.
#include<stdio.h>
int main(){
    int a[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int b, count;
    printf("Enter the amount: ");
    scanf("%d", &b);
    printf("Notes required for 500, 200, 100, 50, 20, 10, 5, 2, 1 are listed below:\n");
    for(int i = 0; i < 9; i++){
        count = b / a[i];
        printf("%d: %d\n", a[i], count);
        b = b % a[i];
    }
    return 0;
}
