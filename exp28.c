#include <stdio.h>
int main() {
    int i,n;
   int factorial=1;
   printf("enter a positive integer: ");
   scanf("%d", &n);
   if( n < 0) {
    printf("factorial of negative nuber does'nt exist.\n");
   } else {
    for ( i=1; i <= 0; i++) {
    factorial = factorial *i;

   }
   printf("the factorial = %d.\n", factorial);
   } 
   return 0;

}