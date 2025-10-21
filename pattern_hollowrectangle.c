#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter no. of rows : ");
    scanf("%d", &a);
     printf("enter no. of column : ");
     scanf("%d", &b);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i==1||j==1||i==a||j==b)
            {
               
                    printf(" *");}
                
           
                
            // }if (i==a||j==b)
            // {
               
            //         printf(" *");
                
            
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
