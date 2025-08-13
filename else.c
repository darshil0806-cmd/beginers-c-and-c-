#include<stdio.h>
int main(){
int age = 40    ;
if(age >45){
    printf("you are senior citizen and you can drive\n");
}
else if(age >18 ){
    printf("you are elder and you can drive if you have lisence");
}
else{
    printf(" sorry you are not eligible for driving");
}
return 0;
}