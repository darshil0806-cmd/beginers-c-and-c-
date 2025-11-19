// create a structure type 'person' with name , salary and age as its attributes . Declare and initilialize 2 variables for this . print the name of first person and age of the other .
#include<stdio.h>
#include<string.h>
int main(){
struct person_structure
{
    char name[100];
    float salary;
    int age;
}p1, p2;

strcpy(p1.name, "Alice");
p1.salary = 50000.0;
p1.age = 30;

strcpy(p2.name, "Bob");
p2.salary = 60000.0;
p2.age = 40;

printf("Name of first person: %s\n", p1.name);
printf("Age of second person: %d\n", p2.age);

return 0;
}