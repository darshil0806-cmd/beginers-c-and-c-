#include<stdio.h>

void print_n_times(int n, int a){
    printf("%d\n", a);
    if (n > 1)
        print_n_times(n - 1, a);
}

int main(){
    int n, a;
    printf("Enter a number to print: ");
    scanf("%d", &a) ;
    printf("Enter number of times to print: ");
    scanf("%d", &n) ;

    print_n_times(n, a);
    return 0;
}