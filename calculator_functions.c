#include<stdio.h>
int add(int x, int y){
    return x + y;
}
int subtract(int x, int y){
    return x - y;
}
int multiply(int x, int y){
    return x * y;
}
int divide(int x, int y){
    if(y != 0){
        return x / y;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
int main(){
int a , b ;
printf("Enter two integers: ");
scanf("%d %d",&a,&b);
printf(" enter 1 for addition\n enter 2 for subtraction\n enter 3 for multiplication\n enter 4 for division\n");
int choice;
scanf("%d",&choice);
switch(choice){
    case 1:
        printf("Result of addition: %d\n", add(a, b));
        break;
    case 2:
        printf("Result of subtraction: %d\n", subtract(a, b));
        break;
    case 3:
        printf("Result of multiplication: %d\n", multiply(a, b));
        break;
    case 4:
        printf("Result of division: %d\n", divide(a, b));
        break;
    default:
        printf("Invalid choice\n");
}
return 0;
}