//find the difference between the sum of elements at even and odd positions in an array
 #include <stdio.h>
 
 int main(){
     int n;
     printf("how many numbers do you want: ");
     if (scanf("%d", &n) != 1 || n <= 0) return 0;
 
     int a[n];
     printf("enter %d values:\n", n);
     for (int i = 0; i < n; i++){
         if (scanf("%d", &a[i]) != 1) return 0;
     }
 
     int even_sum = 0, odd_sum = 0;
     for (int i = 0; i < n; i++){
         if (i % 2 == 0){
             even_sum += a[i];
         } else {
             odd_sum += a[i];
         }
     }
 
     int difference = even_sum - odd_sum;
     printf("Difference between sum of elements at even and odd positions: %d\n", difference);
 
     return 0;
 }