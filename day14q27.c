#include <stdio.h>

int main() {
    int n, sum = 0;

   
    printf("Enter a number: ");
    scanf("%d", &n);

    
    sum = n * n;

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}