//create a structure type 'book' with name, price and number of pages as its attributes 
#include<stdio.h>
#include<string.h>
int main(){
struct book {
    char name[100];
    int price ;
    int no_of_pages;
}a,b,c;

printf("name of book :\n" );
scanf("%s",&a.name);
printf("enter price of book: \n ");
scanf("%d",&a.price);
printf("enter number of pages: \n");
scanf("%d",&a.no_of_pages);
printf("Book Name: %s\n",a.name);
printf("Book Price: %d\n",a.price);
printf("Number of Pages: %d\n",a.no_of_pages);
return 0;
}