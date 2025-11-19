// use for renamming typedef structure
#include<stdio.h>
#include<string.h>
int main(){
typedef struct book {
    char name[100];
    float no_of_pages;
    float price;
} book;
book d;
printf("Enter book name: ");
scanf("%s", d.name);
book e;
printf("Enter number of pages: ");      
scanf("%f", &e.no_of_pages);
book a;
printf("Enter book price: ");
scanf("%f", &a.price);

return 0;
}