#include<stdio.h>

float force(float);
float force(float mass){
    return mass*9.8;
}
int main(){
    float mass;
    printf("Enter mass of the object in kg: ");
    scanf("%f", &mass);
 
    printf("Force on object with mass %.2f kg is %.2f N\n", mass, force(mass));
    return 0;
}