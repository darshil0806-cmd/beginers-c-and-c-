#include <stdio.h>
int main()
{
    int a, b, c;
    float d;
    printf("enter marks of physics : \n");
    scanf("%d", &a);
    printf("enter marks of chemistry : \n");
    scanf("%d", &b);
    printf("enter marks of maths : \n");
    scanf("%d", &c);
    d = (a + b + c) / 3.0;
    printf("average marks = %f", d);
    if (d >= 70)
    {
        printf("You have passed with distinction.");
    }
    else if (d >= 60 && d < 70)
    {
        printf("You have passed with first class");
    }
    else if (d >= 50 && d < 60)
    {
        printf("You have passed with second class");
    }
    else if (d >= 35 && d < 50)
    {
        printf("You have passed with third class");
    }
    else
    {
        printf("You have failed");
    }
    return 0;
}