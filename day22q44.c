#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1, denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;      
        denominator += 2;    
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}