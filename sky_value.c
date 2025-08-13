#include<stdio.h>
int main(){
char ch = 'a';
printf("the character is %c\n",ch);
printf("the character is %d\n",ch);

//97,122
if(ch >=97 && ch <=122){
    printf("this character is lowercase\n");
}
else{
    printf("this character is not a lower case");
}
return 0;
}