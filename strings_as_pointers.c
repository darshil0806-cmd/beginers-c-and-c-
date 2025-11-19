#include<stdio.h>
#include<string.h>
int main(){
char str[]="collefe wallah";
char *ptr=&str[0];
printf("%p",ptr);

return 0;
}