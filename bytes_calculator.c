#include<stdio.h>
int main()
{
    {
       {
          {

    float a,b;
    int c=1000;
    printf("Enter the value of  bytes you want in KB\n ");
    scanf("%f",&a);
    b=a/c;
    printf("The value in kilobytes is %f\n",b);
          }
    float a,b;
    int c=1000000;
    printf("Enter the value of  bytes you want in MB \n");
    scanf("%f",&a);
    b=a/c;
    printf("The value in megabytes is %f\n",b);
       } 
   int a,b;
    int c=1000000000;
    printf("Enter the value of bytes you want in GB\n ");
    scanf("%f",&a);
    b=a/c;
    printf("The value in gigabytes is %f\n",b);
    }  
}