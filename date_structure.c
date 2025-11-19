//create a structure 'date' that contains three members namely date , month and year. create 2 structure vareables with different dates are equal then display messages as equal othewise unequal .
#include<stdio.h>
int main(){
typedef struct date
{
    int day;
    int month;
    int year;
} date;
 date a,b;
 a.day=15;
 a.month=8;
 a.year=2023;

 b.day=15;
 b.month=8;
 b.year=2023;

if(a.day == b.day && a.month == b.month && a.year == b.year){
    printf("Dates are equal\n");
} else {
    printf("Dates are unequal\n");
}

return 0;
}