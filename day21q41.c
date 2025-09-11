#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, newNum;

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 10) {
        printf("After swapping: %d\n", num);
        return 0;
    }

    last = num % 10;                     
    digits = (int)log10(num);            
    first = num / (int)pow(10, digits);  
    middle = num % (int)pow(10, digits); 

    newNum = last * (int)pow(10, digits) + middle - last + first;

    printf("After swapping: %d\n", newNum);

    return 0;
}