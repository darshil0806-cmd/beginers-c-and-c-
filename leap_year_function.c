//any year is entered through the keyboard. Write a function to check whether the year is a leap year or not.
#include<stdio.h>
int leap_year(int year){
    if (year % 4 == 0){
        printf(" '%d' is a leap year. ", year);
    }
    else{
        printf(" '%d' is not a leap year. ", year);
    }
}
int main(){
    int year;
    printf("enter a year to check whether it is leap year or not: ");
    scanf("%d", &year);
    leap_year(year);

return 0;
}