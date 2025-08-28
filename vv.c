int main() {
    int a, b,c,d, i;
    a = 0;
    printf("enter a random no.");
    scanf("%d",&a);
c=a;
d=a;

    for (i = 1; i < 11; i++)
        {
        printf("Enter a %d number \n",i);
        scanf("%d", &b);
        if (b > c) {
            c = b;
        }
        else if(b<d){
            d=b;
        }
    }

    printf("The largest number is %d\n", c);
    printf("The smallest number is %d\n", d);

    return 0;
}







