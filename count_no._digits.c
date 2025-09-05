//count how many number of digits are there 
#include<stdio.h>
int main(){
int num;
printf("enter a number : ");
scanf("%d",&num);

// Count the number of digits in num
int count = 0;
int a= num;
while (a != 0) {
	a = a/ 10;
	count++;
}
printf("Number of digits: %d\n", count);
return 0;
}